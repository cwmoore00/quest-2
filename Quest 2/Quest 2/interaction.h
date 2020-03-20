#pragma once
#include "account.h"
#include "database.h"

class interaction
{
public:
	void authorizeAccount(int accountNum, int PIN);
	void registerAccount(int ID, int PIN);
	void displayBalance();
	void logoutAccount();
	void endProgram(bool& loopProgram);
	database database;
	account currentAccount;
	account emptyAccount;
};