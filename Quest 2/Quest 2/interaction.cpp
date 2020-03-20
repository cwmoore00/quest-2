#include <iostream>
#include <iomanip>
#include "interaction.h"

void interaction::authorizeAccount(int accountNum, int PIN)
{
	account account;
	if (database.find(accountNum, account))
	{
		if (account.pin == PIN)
			currentAccount = account;
		else
			std::cout << "Error: invalid ID and/or PIN" << std::endl;
	}
}

void interaction::registerAccount(int ID, int PIN)
{
	account newAccount;
	if (!database.find(ID, newAccount))
	{
		newAccount.id = ID;
		newAccount.pin = PIN;
	}
	else
		std::cout << "Error: account with this ID already exists" << std::endl;
}

void interaction::displayBalance()
{
	std::cout << std::setprecision(2) << "$" << currentAccount.balance << std::endl;
}

void interaction::logoutAccount()
{
	currentAccount = emptyAccount;
}

void interaction::endProgram(bool& loopProgram)
{
	loopProgram = false;
}
