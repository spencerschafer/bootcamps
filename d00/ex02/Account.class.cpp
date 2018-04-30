#include <iostream>
#include <string>
#include <iomanip>
#include "Account.class.hpp"


int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts(void)
{
	return _nbAccounts;
}

int	Account::getTotalAmount(void)
{
	return _totalAmount;
}

int	Account::getNbDeposits(void)
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << ";" << std::endl;
}

Account::Account(int initial_deposit)
{
	this->_accountIndex = _nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	_nbAccounts += 1;
	_totalAmount += initial_deposit;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
};

void	Account::makeDeposit(int deposit)
{
	_totalAmount += deposit;
	_totalNbDeposits += 1;

	this->_amount += deposit;
	this->_nbDeposits += 1;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount - deposit << ";deposit:" << deposit << ";";
	std::cout << "amount:" <<_amount << ";nb_deposits:" << _nbDeposits << ";" << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	if (_amount - withdrawal >= 0) {

		_totalAmount -= withdrawal;
		_totalNbWithdrawals += 1;

		this->_amount -= withdrawal;
		this->_nbWithdrawals += 1;

		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount + withdrawal << ";withdrawal:" << withdrawal << ";";
		std::cout << "amount:" << _amount <<  ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return (true);
	}

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused" << std::endl;
	return (false);
}

int Account::checkAmount(void) const
{
	std::cout << "checkAmount: " << std::endl;
	return (0);
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void)
{
	time_t now = time(0);
	tm *ltm = localtime(&now);

	std::cout << "[";
	std::cout << 1900 + ltm->tm_year;
	std::cout << std::setw(2) << std::setfill('0') << 1 + ltm->tm_mon;
	std::cout << std::setw(2) << std::setfill('0') << ltm->tm_mday;
	std::cout << "_";
	std::cout << std::setw(2) << std::setfill('0') << ltm->tm_hour;
	std::cout << std::setw(2) << std::setfill('0') << ltm->tm_min;
	std::cout << std::setw(2) << std::setfill('0') << ltm->tm_sec;
	std::cout << "] ";
}

Account::Account(void)
{
	return;
};
