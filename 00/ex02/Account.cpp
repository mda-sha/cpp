#include <ctime>
#include <iomanip>
#include <iostream>

void	Account::_displayTimestamp( void )
{
    std::time_t t = std::time(nullptr);
    std::tm tm = *std::localtime(&t);
    std::cout << std::put_time(&tm, "[%Y%m%d_%H%M%S] ");
}

Account::Account(int initial_deposit)
{
    _displayTimestamp();
    _amount = initial_deposit;
    // _accountIndex = _nbAccounts;
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ":created" << std::endl;
    // _nbAccounts++;
}

void Account::makeDeposit(int)
{

}

bool Account::makeWithdrawal(int)
{
    return true;
}

void Account::displayAccountsInfos()
{

}

Account::~Account()
{

}

void Account::displayStatus() const
{

}