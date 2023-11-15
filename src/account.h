#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

#include <bits/stdc++.h>
using namespace std;

class bankAccount{
protected: 
	int accountNumber;
	double balance;

public:
	bankAccount(int _accountNumber, double _balance);
	void setAccountNumber(int _accountNumber);
	int retrieveAccountNumber();
	double retrieveBalance();
	void depositMoney(double amount);
	double withdraw(double amount);
	void printAccountInfo();
};

class checkingAccount : public bankAccount{
	
}

class savingsAccount : public checkingAccount{

}

#endif