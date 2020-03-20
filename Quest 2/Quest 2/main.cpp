#include <iostream>
#include "account.h"
#include "database.h"
#include "interaction.h"

using namespace std;

int main()
{
	interaction ATM;
	char menuSelection;
	bool loop = true;
	while (loop)
	{
		cout << "ATM\n-(A)uthorization\n-(R)egistration\n-(D)isplay Balance"
			 << "\n-(T)ransfer to Other Account\n-(L)ogout From Account\n"
			 << "-(E)nd Program\n";
		cin >> menuSelection;

		int id;
		int pin;
		float money;
		account account;
		switch (menuSelection)
		{
		case 'A':
		case 'a':
			system("cls");
			cout << "Enter the account id: ";
			cin >> id;
			cout << "Enter the account PIN: ";
			cin >> pin;

			ATM.authorizeAccount(id, pin);
			break;

		case 'R':
		case 'r':
			system("cls");
			cout << "Enter the account id: ";
			cin >> id;
			cout << "Enter the account PIN: ";
			cin >> pin;

			ATM.registerAccount(id, pin);
			break;

		case 'D':
		case 'd':
			ATM.displayBalance();
			break;

		case 'T':
		case 't':
			cout << "Enter the account number you wish to transfer to: ";
			cin >> id;
			cout << "Enter the amount of money to transfer: $";
			cin >> money;

			ATM.database.find(id, account);
			transfer(ATM.currentAccount, account, money);
			break;
			
		case 'L':
		case 'l':
			ATM.logoutAccount();
			break;

		case 'E':
		case 'e':
			ATM.endProgram(loop);
			break;
		}
	}

	return 0;
}
