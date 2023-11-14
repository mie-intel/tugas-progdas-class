#include "account.h"
#include <bits/stdc++.h>

using namespace std;

bankAccount::bankAccount(int _accountNumber, double _balance){
	accountNumber = _accountNumber;
	balance = _balance;
}

void bankAccount::setAccountNumber(int _accountNumber){
	accountNumber = _accountNumber;
}

int bankAccount::retrieveAccountNumber(){
	return accountNumber;
}

double bankAccount::retrieveBalance(){
	return balance;
}

void bankAccount::depositMoney(double amount){
	balance += amount;
}

double bankAccount::withdraw(double amount){
	balance = max((double)0, balance - amount);
	return min(balance, amount);
}

void bankAccount::printAccountInfo(){
	cout << "account number: " << accountNumber << '\n';
	cout << "balance: " << balance << '\n';
}

class checkingAccount : protected bankAccount{

};

class savingsAccount: protected bankAccount{

};