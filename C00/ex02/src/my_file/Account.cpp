// Fichier a rebuild //

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


Account::Account(int initial_deposit)
{
	_amount = initial_deposit;
	_totalAmount = _totalAmount + _amount; 
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:"<< _amount << ";created\n";
	
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";closed\n";
}

int Account::getNbAccounts()
{
	return(_nbAccounts);
}

int Account::getTotalAmount()
{
	return(_totalAmount);
}

int Account::getNbDeposits()
{
	return(_totalNbDeposits);
}

int Account::getNbWithdrawals()
{
	return(_totalNbWithdrawals);
}

void Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts;
	std::cout << ";amount:" << _totalAmount;
	std::cout << ";deposts:" << _totalNbDeposits;
	std::cout << ";withdrawals:" << _totalNbWithdrawals << "\n";
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount;
	std::cout << ";deposit:" << deposit;
	_totalAmount += _totalAmount + deposit;
	_amount = _amount + deposit;
	std::cout << ";amount:" << _amount;
	_totalNbDeposits++;
	_nbDeposits++;
	std::cout << ";nb_deposit:" << _nbDeposits << "\n";
}

bool	Account::makeWithdrawal(int withdrawal)
{
	std::cout << "id:" << _accountIndex; 
	std::cout << ";p_amount:" << _amount;  
	std::cout << ";Withdrawal:"; 

	if(withdrawal <= _amount)
	{
		_amount = _amount - withdrawal;
		_totalNbWithdrawals++;
		_nbWithdrawals++;
		std::cout << ";amount:" << _amount;
		std::cout << ";withdrawal:" << _nbWithdrawals << "\n";
		return true;
	}
	else
	{
		std::cout << "refused\n";
		return false;
	}
}

int		Account::checkAmount( void ) const
{
	return(_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";deposit:" << _nbDeposits;
	std::cout << ";withdrawals:" << _nbWithdrawals << "\n";
}

void	Account::_displayTimestamp( void )
{
    std::time_t now = std::time(nullptr);
    std::tm *ltm = std::localtime(&now);

    char buffer[20];
    std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", ltm);
    
    std::cout << buffer << " ";
}
