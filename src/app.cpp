#include "account.h"
#include <bits/stdc++.h>
using namespace std;

void testA(){
	checkingAccount A(100, 100, 100, 100, 100);
	A.printAccountInfo();
	A.setInterestRate(5);
	A.printAccountInfo();
	
	cout << endl;
	cout << "Interest Rate " << A.retrieveInterestRate() << endl;
	A.setMinimumBalance(50);
	cout << "Minimum Balance " << A.retrieveMinimumBalance() << endl;
	A.setServiceCharge(60);
	cout << "Service charge " << A.retrieveServiceCharge() << endl;
	cout << "Post Interest " << A.postInterest() << endl;
	cout << "Is balance verified? " << (A.balanceVerify() ? "Yes" : "No") << endl << endl;

	A.writeCheck();
	cout << endl;
	A.printAccountInfo();
	A.withdraw(75);
	A.printAccountInfo();

	cout << endl;
	cout << "Interest Rate " << A.retrieveInterestRate() << endl;
	A.setMinimumBalance(50);
	cout << "Minimum Balance " << A.retrieveMinimumBalance() << endl;
	A.setServiceCharge(60);
	cout << "Service charge " << A.retrieveServiceCharge() << endl;
	cout << "Post Interest " << A.postInterest() << endl << endl;
	cout << "Is balance verified? " << (A.balanceVerify() ? "Yes" : "No") << endl;
}

void testB(){
	
}

int main(){

	
	// testA();
	testB();

	return 0;
}