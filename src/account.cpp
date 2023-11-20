#include "account.h"
#include <bits/stdc++.h>

using namespace std;

// ini line baru

// BANK ACCOUNT CLASS
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

// CHECKING ACCOUNT CLASS
// class checkingAccount : protected bankAccount{
	
// };

checkingAccount::checkingAccount(int _accountNumber, double _balance, double _interest, double _minimumBalance, double _serviceCharge)
	: bankAccount::bankAccount(_accountNumber, _balance){
	interest = _interest;
	minimumBalance = _minimumBalance;
	serviceCharge = _serviceCharge;
}

void checkingAccount::setInterestRate(double _interest){
	interest = _interest;
}

double checkingAccount::retrieveInterestRate(){
	return interest;
}

void checkingAccount::setMinimumBalance(double _minimumBalance){
	minimumBalance = _minimumBalance;
}

double checkingAccount::retrieveMinimumBalance(){
	return minimumBalance;
}

void checkingAccount::setServiceCharge(double _serviceCharge){
	serviceCharge = _serviceCharge;
}

double checkingAccount::retrieveServiceCharge(){
	return (balance < minimumBalance) ? serviceCharge : 0;
}

double checkingAccount::postInterest(){
	return (balance+balance*(interest/100));
}

bool checkingAccount::balanceVerify(){
	return ((balance<minimumBalance) ? true : false);
}

void checkingAccount::writeCheck(){
	cout << "CHECK INFORMATION" << endl;
	cout << "=============================================" << endl;
	cout << "Interest :\t" << retrieveInterestRate() << "%" << endl;
	cout << "Post Interest :\t" << postInterest() << endl;

	cout << "Service Charge :\t";
	if(balanceVerify()) cout << (minimumBalance-balance) << endl;
	else cout << 0 << endl;
}

double checkingAccount::withdraw(double amount){
	if(balance < amount){
		balance = 0;
		return balance;
	}
	else{
		balance -= amount;
		return amount;
	}
}

void checkingAccount::printAccountInfo(){
	cout << "ACCOUNT INFORMATION" << endl;
	cout << "=============================================" << endl;
	cout << "Account Number :\t" << retrieveAccountNumber() << endl;
	cout << "Balance :\t" << retrieveBalance() << endl;
}

// SAVINGS ACCOUNT CLASS
// class savingsAccount: protected bankAccount{

// };