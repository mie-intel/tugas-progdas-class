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
	protected:
		double interest, minimumBalance, serviceCharge;
	
	public:
		checkingAccount(double _interest, double _minimumBalance, double _serviceCharge);
		void setInterest(double _interest);
		double retrieveInterest();
		void setMinimumBalance(double _minimumBalance);
		double retrieveMinimumBalance();
		void setServiceCharge(double _serviceCharge);
		double retrieveServiceCharge();
		double postInterest();
		bool balanceVerify();
		void writeCheck();
		double withdraw(double amount);
		void printAccountInfo();
};

class savingsAccount : public bankAccount{

}

#endif