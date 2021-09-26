#include "contact.hpp"
#include "phonebook.hpp"

void phonebook::add()
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

void phonebook::by_index()
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

void phonebook::search()
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

phonebook::phonebook()
{
    lastAdded = -1;
}

int main()
{
    phonebook book;
    std::string cmd;

    while (!std::cin.eof())
    {
        std::cout << "enter a command (ADD, SEARCH or EXIT) " << std::endl;
        std::getline(std::cin, cmd);
        if (cmd == "exit")
            break;
        else if (cmd == "add")
            book.add();
        else if (cmd == "search")
            book.search();
        else if (!cmd.length())
            break;
        else
            std::cout << "WRONG COMMAND" << std::endl; 
    }
}