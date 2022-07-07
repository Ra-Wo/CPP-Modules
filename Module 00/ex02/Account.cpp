#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{

	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_amount = initial_deposit;
	this->_totalAmount += initial_deposit;
	this->_accountIndex = this->_nbAccounts;
	this->_nbAccounts++;

	this->_displayTimestamp();

	std::cout << "index:" << this->_accountIndex << ';'
			  << "amount:" << this->_amount << ';'
			  << "created" << '\n';
}

Account::~Account()
{

	this->_displayTimestamp();

	std::cout << "index:" << this->_nbAccounts << ";"
			  << "amount:" << this->_amount << ";"
			  << "closed" << '\n';
	this->_nbAccounts--;
}

void Account::makeDeposit(int deposit)
{

	int old_amount = this->_amount;
	this->_amount += deposit;
	this->_totalAmount += deposit;
	this->_nbDeposits++;
	this->_totalNbDeposits++;

	this->_displayTimestamp();

	std::cout << "index:" << this->_accountIndex << ';'
			  << "p_amount:" << old_amount << ';'
			  << "deposit:" << deposit << ';'
			  << "amount:" << this->_amount << ';'
			  << "nb_deposits:" << this->_nbDeposits << '\n';
}

bool Account::makeWithdrawal(int withdrawal)
{

	this->_displayTimestamp();

	if (withdrawal > this->_amount)
	{

		std::cout << "index:" << this->_accountIndex << ';'
				  << "p_amount:" << this->_amount << ';'
				  << "withdrawal:refused" << '\n';
		return false;
	}
	else
	{
		int old_amount = this->_amount;
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		this->_totalNbWithdrawals++;
		this->_totalAmount -= withdrawal;

		std::cout << "index:" << this->_accountIndex << ';'
				  << "p_amount:" << old_amount << ';'
				  << "withdrawal:" << withdrawal << ';'
				  << "amount:" << this->_amount << ';'
				  << "nb_withdrawals:" << this->_nbWithdrawals << '\n';
		return true;
	}
}

int Account::checkAmount(void) const
{

	this->_displayTimestamp();

	std::cout << "index:" << this->_accountIndex << ';'
			  << "amount:" << this->_amount << ';'
			  << "deposits:" << this->_nbDeposits << ';'
			  << "withdrawals:" << this->_nbWithdrawals << '\n';
	return this->_amount;
}

void Account::displayStatus(void) const
{

	this->_displayTimestamp();

	std::cout << "index:" << this->_accountIndex << ';'
			  << "amount:" << this->_amount << ';'
			  << "deposits:" << this->_nbDeposits << ';'
			  << "withdrawals:" << this->_nbWithdrawals << '\n';
}

void Account::displayAccountsInfos(void)
{

	_displayTimestamp();

	std::cout << "accounts:" << _nbAccounts << ';'
			  << "total:" << _totalAmount << ';'
			  << "deposits:" << _totalNbDeposits << ';'
			  << "withdrawals:" << _totalNbWithdrawals << '\n';
}

void Account::_displayTimestamp(void)
{

	time_t now = time(0);
	tm *time = localtime(&now);
	std::string month = std::to_string((time->tm_mon + 1));
	std::string day = std::to_string((time->tm_mday));
	std::string hour = std::to_string((time->tm_hour));
	std::string min = std::to_string((time->tm_min));
	std::string sec = std::to_string((time->tm_sec));

	std::cout << '['
			  << (time->tm_year + 1900)
			  << (((time->tm_mon + 1) <= 9) ? ('0' + month) : month)
			  << ((time->tm_mday <= 9) ? ('0' + day) : day)
			  << '_'
			  << ((time->tm_hour <= 9) ? ('0' + hour) : hour)
			  << (time->tm_min <= 9 ? ('0' + min) : min)
			  << (time->tm_sec <= 9 ? ('0' + sec) : sec)
			  << "] ";
}