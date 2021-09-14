class phonebook{
public:
        contact vasya[8];
        int lastAdded;

        phonebook()
        {
            lastAdded = -1;
        }

        void add()
        {
            lastAdded++;
            if (lastAdded == 8)
                lastAdded = 0;
            vasya[lastAdded].set_first_name();
            vasya[lastAdded].set_last_name();
            vasya[lastAdded].set_nickname();
            vasya[lastAdded].set_number();
            vasya[lastAdded].set_secret();
        }
        
        void print_data(string str)
        {
            int len = str.length();
            string new_str = str;

            if (len < 10)
            {
                int space = 10 - len;
                while (space--)
                    std::cout << " ";
            }
            if (len > 10)
                new_str.resize(9);
            std::cout << " " << new_str;
            if (len > 10)
                std::cout << ".";
            std::cout << " |";
        }

        void by_index()
        {
            int i;
            std::cout << "ENTER INDEX ";
            std::cin >> i;
            i--;
            std::cin.ignore(32767, '\n');
            if (i < 0 || i > 9 || vasya[i].first_name == "0")
            {
                std::cout << "INVALID INDEX" << std::endl;
                return;
            }
            std::cout << "FIRST NAME " << vasya[i].first_name << std::endl;
            std::cout << "LAST NAME " << vasya[i].last_name << std::endl;
            std::cout << "NICKNAME " << vasya[i].nickname << std::endl;
            std::cout << "PHONE NUMBER " << vasya[i].phone_number << std::endl;
            std::cout << "DARKEST SECRET " << vasya[i].darkest_secret << std::endl;
        }

        void search()
        {
            int i = 0;
            std::cout << "     index | first name |  last name |   nickname |" << std::endl;
            while (vasya[i].first_name != "0" && i < 8)
            {
                std::cout << "         " << i + 1 << " |";
                print_data(vasya[i].first_name);
                print_data(vasya[i].last_name);
                print_data(vasya[i].nickname);
                std::cout << std::endl;
                i++;
            }
            by_index();
        }
};