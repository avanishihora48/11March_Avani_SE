#include <iostream>
using namespace std;
class Bank 
{
    int accno;
    double bal;

public:
    Bank(int a, double b)
	{
        accno = a;
        bal = b;
    }

    void deposit(double amount) 
	{
		
        if (amount > 0) 
		{
            bal += amount;
            cout << "Deposited: " << amount ;
        } 
		else {
            cout << "Invalid deposit amount." ;
        }
    }

    void withdraw(double amount) 
	{
	
        if (amount > 0 && amount <= bal) 
		{
            bal -= amount;
            cout << "Withdrawn: " << amount;
        } 
		else if (amount > bal) 
		{
            cout << "Insufficient balance.";
        } 
		else 
		{
            cout << "Invalid withdrawal amount.";
        }
    }

    int getAccNo()  
	{
        return accno;
    }

    double getBal()  
	{
        return bal;
    }

    void printData() 
	{
		
        cout << "Account Number: " << accno;
        cout << "\nCurrent Balance: " << bal;
    }
};

main() 
{
    int x, choice;
    double y, amount;

    cout << "Enter account number: ";
    cin >> x;
    cout << "Enter initial balance: ";
    cin >> y;

    Bank b(x,y);

    do {
        cout << "\n\n----------- Menu -----------\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Print Account Details\n";
        cout << "4. Exit...Thn\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
        	cout<<"\n--------- Deposite ------------ ";
            cout << "\nEnter amount to deposit: ";
            cin >> amount;
            b.deposit(amount);
            break;
        case 2:
        	cout<<"\n--------- Withdraw ------------ ";
            cout << "\nEnter amount to withdraw: ";
            cin >> amount;
            b.withdraw(amount);
            break;
        case 3:
        	cout<<"\n-------- Printing details -------------\n";
            b.printData();
            break;
        case 4:
            cout << "Thank you!.." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

}

