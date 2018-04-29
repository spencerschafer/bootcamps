#include <iostream>
#include <string>
#include "Account.class.hpp"

static int	getNbAccounts(Account account)
{
	//std::cout << _nbAccounts;
	return _nbAccounts;
}

static int	getTotalAmount(void)
{
	//std::cout << _totalAmount;
	return _totalAmount;
}

static int	getNbDeposits(void)
{
	//std::cout << _totalNbDeposits;
	return _totalNbDeposits;
}

static int	getNbWithdrawals( void )
{
	//std::cout << _totalNbWithdrawals;	
	return _totalNbWithdrawals;
}

static void	displayAccountsInfos( void );
{
	_displayTimestamp();
	std::cout << 
}	


Account::Account(int initial_deposit)
{
	// static amounts
	_nbAccounts += 1;
	_totalAmount += initial_deposit;
	_totalNbDeposits += 1;

	//specifc class amounts
	Account._accountIndex += 1;
	Account._amount += initial deposit;
	Account._nbDeposits += 1;
}

~Account(void);

void makeDeposit(int deposit)
{
	_totalAmount += deposit;
	_totalNbDeposits += 1;

	_amount += deposit;
	_nbDeposits += 1;
}

bool makeWithdrawal(int withdrawal)
{
	_totalAmount -= withdrawal;
	_totalNbWithdrawals += 1;

	_amount -= withdrawal;
	_nbWithdrawals += 1;
	//return proper value
	return (1);
}

int checkAmount(void) const
{
	return (Account.amount);
}

void displayStatus(void) const
{
	//code
}

static void	_displayTimestamp(void)
{
	
}

int main(void)
{
    Account account;
}