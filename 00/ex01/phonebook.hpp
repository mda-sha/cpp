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
        }
        
        void print_data(string str, int len)
        {
            // int len;
            string new_str = str;

            // len = str::length();
            if (len < 10)
            {
                int space = 10 - len;
                while (space--)
                    std::cout << " ";
            }
            if (len > 10)
            {
                new_str.resize(9);
                std::cout << new_str << ".";
            }
            std::cout << " " << new_str;
            if (len > 10)
                std::cout << new_str << ".";
            std::cout << " |";
        }

        void search()
        {
            int i = 0;
            int len;
            std::cout << "     index | first name |  last name |   nickname" << std::endl;
            while (!vasya[i].first_name.empty() && i < 8)
            {
                std::cout << "         " << i << " |";
                len = (vasya[i].first_name)::length();
                print_data(vasya[i].first_name, len);
                len = (vasya[i].last_name)::length();
                print_data(vasya[i].last_name), len;
                len = (vasya[i].nickname)::length();
                print_data(vasya[i].nickname, len);
                std::cout << std::endl;
            }
            // std::cout << "ENTER CONTACTS NAME " << std::endl;
            // string name;
            // std::getline(std::cin, name);
            // int i = 0;
            // while (i < 8)
            // {
            //     if (vasya[i].name == name)
            //     {
            //         std::cout << vasya[i].number << std::endl;
            //         break;
            //     }
            //     i++;
            // }
            // if (i == 8)
            //     std::cout << "contact not found" << std::endl;
        }
};