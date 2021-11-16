#include <iostream>
#include <cstdlib>

bool charCheck(double a, char *s)
{
    int i = 0;
    int point = 0;    
    while (s[i] && (std::isdigit(s[i]) || (s[i] == '.' && point < 1) || (s[i] == 'f' && s[i + 1] == '\0')))
    {
        if (s[i] == '.')
            point++;
        i++;
    }
    if (s[i] != '\0')
    {
        std::cout << "impossible" << std::endl;
        return false;
    }
    if ((a = static_cast<long>(std::atol(s))) > CHAR_MAX || a < CHAR_MIN)
    {
        std::cout << "impossible" << std::endl;
        return false;
    }
    return true;
}

void toChar(double a, char *s)
{
    if (!charCheck(a, s))
        return;
    char r = static_cast<char>(a);
    if (r && std::isprint(r))
        std::cout << "'" << r << "'" << std::endl;
    else
        std::cout << "Non displayable" << std::endl;
}

void toInt(double a)
{
    int r = static_cast<int>(a);
    if (r < INT_MAX && r > INT_MIN)
        std::cout << r << std::endl;
    else
        std::cout << "impossible" << std::endl;
}

void conversion(char *s)
{
    char *end = s;
    bool point = 0;
    while (*end)
        end++;
    double a = std::strtod(s, &end);
    if (a  - static_cast<double>(static_cast<int>(a)))
        point = true;
    std::cout << "char: ";
    toChar(a, s);
    std::cout << "int: ";
    toInt(a);
    std::cout << "float: " << static_cast<float>(a);
    if (!point)
        std::cout << ".0";
    std::cout << "f" << std::endl;
    std::cout << "double: " << a;
    if (!point)
        std::cout << ".0";
    std::cout << std::endl;
}

int main(int argc, char **argv)
{
    if (argc != 2)
        std::cout << "invalid arguments" << std::endl;
    else
        conversion(argv[1]);
}