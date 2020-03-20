#include "account.h"

bool account::pay_in(float money)
{
	if (money > 0)
	{
		balance += money;
		return true;
	}
	return false;
}

bool account::pay_out(float money)
{
	if (money > 0)
	{
		balance -= money;
		return true;
	}
	return false;
}
