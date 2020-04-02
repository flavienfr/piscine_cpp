/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/27 16:02:05 by froussel          #+#    #+#             */
/*   Updated: 2020/03/27 23:15:09 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts;
int Account::_totalAmount;
int Account::_totalNbDeposits;
int Account::_totalNbWithdrawals;

void    Account::_displayTimestamp(void)
{
	time_t	curr_time;
	tm		*curr_tm;
	char	buff[20];
	
	time(&curr_time);
	curr_tm = localtime(&curr_time);
	strftime(buff, 20, "[%G%m%d_%H%M%S]", curr_tm);
	std::cout << buff;
}

Account::Account(int initial_deposit)
{
	if (initial_deposit < 0)
		return ;
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_nbAccounts++;
	_totalAmount += _amount;
	Account::_displayTimestamp();
	std::cout	<< " index:" << _accountIndex
				<< ";amount:" << _amount
				<< ";created" << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	if (deposit < 0)
		return ;
	_amount += deposit;
	_nbDeposits++;

	_totalAmount += deposit;
	_totalNbDeposits++;
	Account::_displayTimestamp();
	std::cout	<< " index:" << _accountIndex
				<< ";p_amount:" << _amount - deposit
				<< ";deposit:" << deposit
				<< ";amount:" << _amount
				<< ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (withdrawal < 0)
		return (0);
	Account::_displayTimestamp();
	std::cout	<< " index:" << _accountIndex
				<< ";p_amount:" << _amount
				<< ";withdrawal:";
	if (withdrawal > _amount)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	_amount -= withdrawal;
	_nbWithdrawals++;
	std::cout	<< withdrawal << ";amount:"
				<< _amount << ";nb_withdrawals:"
				<< _nbWithdrawals << std::endl;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	return (true);
}

void	Account::displayStatus() const
{
	Account::_displayTimestamp();
	std::cout	<< " index:" << _accountIndex
				<< ";amount:" << _amount
				<< ";deposits:" << _nbDeposits
				<< ";withdrawals:" << _nbWithdrawals << std::endl;
}

int		Account::getNbAccounts() {return (_nbAccounts);}
int		Account::getTotalAmount() {return (_totalAmount);}
int		Account::getNbDeposits() {return (_totalNbDeposits);}
int		Account::getNbWithdrawals() {return (_totalNbWithdrawals);}

void	Account::displayAccountsInfos()
{
	Account::_displayTimestamp();
	std::cout	<< " accounts:" << _nbAccounts
				<< ";total:" << _totalAmount
				<< ";deposits:" << _totalNbDeposits
				<< ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

Account::~Account()
{
	Account::_displayTimestamp();
	std::cout	<< " index:" << _accountIndex
				<< ";amount:" << _amount
				<< ";closed" << std::endl;
}
