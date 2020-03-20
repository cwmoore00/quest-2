#include "database.h"

void database::append(account const& a)
{
	accounts.push_back(a);
}

bool database::find(int accountNum, account& account)
{
	for (int i = 0; i < accounts.size(); i++)
		if (accounts[i].id == accountNum)
		{
			account = accounts[i];
			return true;
		}
	return false;
}
