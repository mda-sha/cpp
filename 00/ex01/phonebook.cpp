#include "contact.hpp"
#include "phonebook.hpp"

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
        else if (!std::cin.eof())
            std::cout << "WRONG COMMAND" << std::endl; 
    }
}