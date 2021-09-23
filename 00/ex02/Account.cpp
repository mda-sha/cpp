#include <iomanip>
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void )
{
    std::time_t t = std::time(nullptr);
    std::tm tm = *std::localtime(&t);
    std::cout << std::put_time(&tm, "[%Y%m%d_%H%M%S] ");
}

Account::Account( int initial_deposit )
{
    Account::_displayTimestamp();
    _amount = initial_deposit;
    _accountIndex = _nbAccounts;
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
    _nbAccounts++;
    _totalAmount += initial_deposit;
    _nbWithdrawals = 0;
    _nbDeposits = 0;
}

void Account::makeDeposit(int dps)
{
    Account::_displayTimestamp();
    _nbDeposits++;
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << dps;
    _amount += dps;
    std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
    _totalNbDeposits++;
    _totalAmount += dps;
}

bool Account::makeWithdrawal(int withdrawal)
{
    Account::_displayTimestamp();
    if (withdrawal > _amount)
    {
        std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused" << std::endl;
        return false;
    }
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:" << withdrawal;
    _amount -= withdrawal;
    _nbWithdrawals++;
    _totalAmount -= withdrawal;
    _totalNbWithdrawals++;
    std::cout << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals  << std::endl;
    return true;
}

void Account::displayAccountsInfos()
{
    Account::_displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

Account::~Account()
{
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

void Account::displayStatus() const
{
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}