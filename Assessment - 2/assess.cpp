#include <iostream>
#include <ctime>
using namespace std;

class data {
public:
    string nm, loc, add;
    int accno, bal, amount, pin,i;
};

class getInfo : public data {
public:
    void info() {
        cout << "Enter your name: ";
        cin >> nm;
        cout << "Enter your address: ";
        cin >> add;
        cout << "Enter your branch location: ";
        cin >> loc;
        cout << "Enter your account number: ";
        cin >> accno;
        cout << "Enter initial balance: ";
        cin >> bal;
    }
};

class deposite {
public:
    void depos(data &account, double amount) {
        if (amount > 0) {
            account.bal += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }
};

class withdraw {
public:
    void withd(data &account, double amount) {
        if (amount > 0 && amount <= account.bal) {
            account.bal -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else if (amount > account.bal) {
            cout << "Insufficient balance." << endl;
        } else {
            cout << "Invalid withdrawal amount." << endl;
        }
    }
};

class ATM : public getInfo, public deposite, public withdraw {
    public:
    void getin() {
        cout << "--------------- WELCOME TO ATM -----------------" << endl;
        time_t now = time(0);
        tm *ltm = localtime(&now);

        cout << "Current date: ";
        cout << 1900 + ltm->tm_year << "-"
             << 1 + ltm->tm_mon << "-"
             << ltm->tm_mday << " "
             << ltm->tm_hour << ":"
             << ltm->tm_min << ":"
             << ltm->tm_sec << endl;

        int a;
        
        cout << "\nPress 1 and Press Enter to Access Your Account Via Pin Number";
        cout << "\n              or                 ";
        cout << "\nPress 0 and Press Enter to get Help." << endl;
        cin >> a;
        
        
        if (a == 1) {
            cout << "---------------- ATM ACCOUNT ACCESS -------------" << endl;
            
            cout << "Enter your Account Pin Number![only one attempt is allowed]: ";
            cin >> pin;
        
            if (pin == 12345) {
                cout << "Correct pin number." << endl;
                info() ;
                atmMenu();
                
            } else {
                cout << "You have made your attempt which failed! No more attemps allowerd! Sorry!";
            } 
	
            
        } else if (a == 0) {
            cout << "----------------- ATM ACCOUNT STATUS -----------------" << endl;
            cout << "You must have the correct pin number to access this account." << endl;
            cout << "See your bank representative for assistance during bank opening hours." << endl;
            cout << "Thanks for your choice today!!" << endl;
        } else {
            cout << "Invalid choice. Exiting..." << endl;
        }
    }

    void atmMenu() {
        int choice;
        do {
            cout << "\n--------------- ATM Main Menu Screen:-----------------";
            cout << "\n1. to Deposit cash";
            cout << "\n2. to Withdraw cash";
            cout << "\n3. to Balance inquiry";
            cout << "\n0. to Exit ATM";
            cout << "\nPLEASE ENTER A SELECTION AND PRESS RETURN KEY : ";
            cin >> choice;

            switch (choice) {
                case 1: {
                    double depositAmount;
                    cout << "Enter amount to deposit: ";
                    cin >> depositAmount;
                    depos(*this, depositAmount);
                    break;
                }
                case 2: {
                    double withdrawAmount;
                    cout << "Enter amount to withdraw: ";
                    cin >> withdrawAmount;
                    withd(*this, withdrawAmount);
                    break;
                }
                case 3:
                    print();
                    break;
                case 0:
                    cout << "Exiting...Thank you !" << endl;
                    break;
                default:
                    cout << "Invalid choice. Please try again." << endl;
            }
        } while (choice != 0);
    }

    void print() {
        cout << "Account holder name: " << nm << endl;
        cout << "Account holder address: " << add << endl;
        cout << "Account holder branch location: " << loc << endl;
        cout << "Account holder account number: " << accno << endl;
        cout << "Account holder balance: " << bal << endl;
    }
};

int main() {
    ATM atm;
    atm.getin();
}

