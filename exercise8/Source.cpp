#include "GameAccountPlus.h"
#include <iostream>

using namespace std;

const int ACCOUNTS_COUNT = 10;
const int USED_ACCOUNTS = 2;
const int STR_SIZE = 100;

int main()
{	
	/*
	** Demonstration of overriding methods and virtual methods behaviour
	** uncomment to try out

	GameAccount noob("Newibie", 1, 0);
	GameAccountPlus pro("Pro baby", 2, 0, "I am the pro!");

	cout << "noob.viewAccount()" << endl;
	noob.viewAccount();

	cout << "\npro.viewAccount()" << endl;
	pro.viewAccount();


	//virtual vs non-virtual methods overriding - what would happen if we made the methods non-virtual??? - try it!
	GameAccount *noob_acc = &noob;
	GameAccount *pro_acc = &pro;

	cout << "\nGameAccount* viewAccount(): " << endl;
	noob_acc->viewAccount();

	cout << "\nGameAccount* viewAccount(): " << endl;
	pro_acc->viewAccount();
	
	**
	**
	*/

	GameAccount *accounts[ACCOUNTS_COUNT]; //Array of both GameAccount and GameAccountsPlus - would get messy without virtual...
	char nickname[STR_SIZE];
	char motto[STR_SIZE];
	int points;
	int accNumber = 3;
	char accountsType;

	for (int i = 0; i < USED_ACCOUNTS; i++)
	{
		cout << "\nENTERING ACCOUNT ID: " << accNumber << endl;
		cout << "Enter account nickname: ";
		cin >> nickname;
		cout << "Enter points: ";
		cin >> points;
		cout << "Enter account type (1 for normal, 2 for PLUS): ";
		while (cin >> accountsType && (accountsType != '1' && accountsType != '2'))
			cout << "Enter either 1 or 2: ";

		if (accountsType == '1')
			accounts[i] = new GameAccount(nickname, accNumber, points);
		else
		{
			cout << "Enter motto: ";
			cin.ignore();
			cin.getline(motto, 256, '\n');	
			
			accounts[i] = new GameAccountPlus(nickname, accNumber, points, motto);
		}

		++accNumber;
	}

	cout << "\nPRINTING ACCOUNTS INFO: " << endl;

	for (int i = 0; i < USED_ACCOUNTS; i++)
	{
		accounts[i]->viewAccount();
		cout << endl;
	}

	for (int i = 0; i < USED_ACCOUNTS; i++)
	{
		delete accounts[i]; //free memory
	}
}
