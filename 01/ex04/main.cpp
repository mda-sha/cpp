#include <string>
#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "invalid arguments\n";
        return 1;
    }
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::ifstream file(argv[1]);
    if (!file || !s1.length() || !s2.length())
    {
        std::cout << "invalid arguments\n";
        return 1;
    }
    std::string str;
    std::string out_file = argv[1];
    out_file += ".replace";
    std::ofstream out(out_file);
    getline(file, str);
    while (!file.eof())
    {
        if (str != s1)
            out << str << std::endl;
        else
            out << s2 << std::endl;
        getline(file, str);
    }
    file.close();
    out.close();
}