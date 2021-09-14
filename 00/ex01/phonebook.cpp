#include "contact.hpp"
#include "phonebook.hpp"

int main()
{
    phonebook book;
    string cmd;

    while (1)
    {
        std::cout << "enter a command (ADD, SEARCH or EXIT) " << std::endl;
        std::getline(std::cin, cmd);
        if (cmd == "exit")
            break;
        else if (cmd == "add")
            book.add();
        else if (!cmd.compare("search"))
            book.search();
        else
            std::cout << "wrong command" << std::endl;
    }
}