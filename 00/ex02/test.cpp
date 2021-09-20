#include <iostream>
#include <string>
#include <iomanip>

using std::string;


class hernya{
public:
    int len;

    void fidel(string tpatti)
    {
        int len = tpatti.length();
        std::cout << "len = " << len << std::endl;
    }
};

int main ()
{
    string tpatti = "pisya";
    hernya puk;
    puk.fidel(tpatti);
}