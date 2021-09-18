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
        
        void by_index()
        {
            int i;
            std::cout << "ENTER INDEX ";
            std::cin >> i;
            i--;
            if (i < 0 || i > 9 || !vasya[i].check_if_exists())
            {
                std::cin.clear();
                std::cin.ignore(32767, '\n');
                std::cout << "INVALID INDEX" << std::endl;
                return;
            }
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            vasya[i].print_everithing();
        }

        void search()
        {
            int i = 0;
            std::cout << "     index | first name |  last name |   nickname |" << std::endl;
            while (vasya[i].check_if_exists() && i < 8)
            {
                vasya[i].print_table(i);
                i++;
            }
            by_index();
        }
};