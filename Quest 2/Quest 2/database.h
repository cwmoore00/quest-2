#pragma once
#include <vector>
#include "account.h"

class database
{
public:
	void append(account const& a);
	bool find(int accountNum, account& account);

private:
	std::vector<account> accounts;
};
