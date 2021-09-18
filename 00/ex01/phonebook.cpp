#include "contact.hpp"
#include "phonebook.hpp"

int main()
{
    phonebook book;
    std::string cmd;

    while (1)
    {
        std::cout << "enter a command (ADD, SEARCH or EXIT) " << std::endl;
        std::getline(std::cin, cmd);
        if (cmd == "exit")
            break;
        else if (cmd == "add")
            book.add();
        else if (cmd == "search")
            book.search();
        else
            std::cout << "WRONG COMMAND" << std::endl; 
    }
}