#include <iostream>
using namespace std;

class Math {
public:
    
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }

    int sub(int a, int b) {
        return a - b;
    }

    double sub(double a, double b) {
        return a - b;
    }

    int mul(int a, int b) {
        return a * b;
    }

    double mul(double a, double b) {
        return a * b;
    }

    int div(int a, int b) {
        return a / b;
    }

    double div(double a, double b) {
            return a / b;
    }
};

main() {
    Math m;

    int a_int , b_int ;
    double a_double , b_double ;
    
    cout<<"Enter the value of a:";
    cin>>a_int;
    cout<<"Enter the value of b:";
    cin>>b_int;
    

    cout << "\nInteger Operations:";
    cout << "\nAddition: " << m.add(a_int,b_int);
    cout << "\nSubtraction: " << m.sub(a_int,b_int);
    cout << "\nMultiplication: " << m.mul(a_int,b_int);
    cout << "\nDivision: " << m.div(a_int,b_int);

    cout<<"\n\nEnter the value of a:";
    cin>>a_double;
    cout<<"Enter the value of b:";
    cin>>b_double;
    
    cout << "\n\nDouble Operations:" ;
    cout << "\nAddition: " << m.add(a_double,b_double);
    cout << "\nSubtraction: " << m.sub(a_double,b_double);
    cout << "\nMultiplication: " << m.mul(a_double,b_double);
    cout << "\nDivision: " << m.div(a_double,b_double);

}



