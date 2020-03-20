#pragma once

class account
{
public:
	int id;
	int pin;
	float balance = 0;
	bool pay_in(float money);
	bool pay_out(float money);
};

void transfer(account account1, account account2, float money)
{
	account1.pay_in(money);
	account2.pay_out(money);
};