#include "account.h"
#include <bits/stdc++.h>
using namespace std;

void testA(){
	cout << "Simulating checkingAccount\n";
	cout << "====================================\n\n";
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
	cout << "\nDone\n\n";
}

void testB(){
	cout << "Simulating savingsAccount\n";
	cout << "====================================\n\n";
	savingsAccount B(100, 100, 100, 100, 100);
	B.printAccountInfo();
	B.setInterestRate(5);
	cout << endl;
	cout << "Interest Rate " << B.retrieveInterestRate() << endl;
	cout << "Post Interest " << B.postInterest() << endl << endl;
	B.withdraw(200);
	cout << "After withdrawal:\n";
	B.printAccountInfo();
	cout << endl;
	B.deposit(75);
	cout << "After deposit:\n";
	B.printAccountInfo();
	cout << "Post Interest " << B.postInterest() << endl;
	cout << "\nDone\n\n";
}

int main(){

	testA();
	testB();

	return 0;
}