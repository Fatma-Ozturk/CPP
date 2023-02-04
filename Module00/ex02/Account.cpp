#include "Account.hpp"
#include <iomanip>
#include <iostream>
#include <string>
#include <cctype>
#include <ctime>
#include <time.h>

int Account::_nbAccounts = 0; //static değişkenlerin initi class ile aynı adlı source dosyasında fonksiyonların dışında yapılır.
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

// format: [19920104_091532]
// [year/month/day_hour/min/sec]
// month starts at 0;
static void	display_time(void)
{
	const time_t	current = time(0);
	tm				*ltm = localtime(&current);

	std::cout << "[" << 1900 + ltm->tm_year << std::setfill('0') << std::setw(2) << 1 + ltm->tm_mon << std::setfill('0') << std::setw(2) << ltm->tm_mday << "_";
    std::cout << std::setfill('0') << std::setw(2) << ltm->tm_hour << std::setfill('0') << std::setw(2) << ltm->tm_min << std::setfill('0') << std::setw(2) << ltm->tm_sec << "] ";
}

Account::Account( int initial_deposit )// : _amount(initial_deposit)
{
	display_time();
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	std::cout << "index:" << _accountIndex << ";" << "amount:" << initial_deposit << ";" << "created" << std::endl;
	_totalAmount+=initial_deposit;
	_nbAccounts++;
}

int	Account::getNbAccounts( void ){
	return (_nbAccounts);
}

int	Account::getTotalAmount( void ){
	return(_totalAmount);
}

int	Account::getNbDeposits( void ){
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ){
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ){
	display_time();
	std::cout << "accounts:" << getNbAccounts() << ";" << "total:" << getTotalAmount() << ";" << "deposits:" << getNbDeposits() << ";" << "withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit ){
	display_time();
	int p_amount = _amount;
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout << "index:" << _accountIndex << ";" << "p_amount:" << p_amount << "amount:" << _amount << ";" << "nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ){
	display_time();
	int p_amount = _amount;
	if (withdrawal <= _amount){
		_amount -= withdrawal;
		_nbWithdrawals++;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		std::cout << "index:" << _accountIndex << ";" << "p_amount:" << p_amount << "withdrawal:" << withdrawal << "amount:" << _amount << ";" << "nb_withdrawals:" << _nbWithdrawals << std::endl;
		return(true);
	}
	else{
		std::cout << "index:" << _accountIndex << ";" << "p_amount:" << p_amount << "withdrawal:" << "refused" << std::endl;
		return(false);
	}
	
}

int		Account::checkAmount( void ) const{
	return (_amount);
}

void	Account::displayStatus( void ) const{
	display_time();
	std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount << ";" << "deposits:" << _nbDeposits << ";" << "withdrawals:" << _nbWithdrawals << std::endl;
}

Account::~Account( void )
{
	display_time();
	std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount << ";" << "closed" << std::endl;
}
