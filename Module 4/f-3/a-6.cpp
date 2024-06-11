#include <iostream>
using namespace std;

class Employee {
    double salary;
    int id;
    string name;

public:
    Employee(double s, int i, string n)
    {
        salary = s;
        id = i;
        name = n;
    }

    void setSalary(double esal) 
	{
        salary = esal;
    }

    void applyRating(double performanceRating) 
	{
        if (performanceRating >= 0 && performanceRating <= 1.4) {
            salary *= performanceRating;
        } else {
            cout << "Poor performance..No change in salary" << endl;
        }
    }

    string getName() 
	{
        return name;
    }

    int getId() 
	{
        return id;
    }

    double getSalary() 
	{
        return salary;
    }
};

int main() {
    int id;
    string name;
    double salary, performanceRating;

    cout << "Enter Id of an employee: ";
    cin >> id;
    cout << "Enter name of an employee: ";
    cin >> name;
    cout << "Enter salary of an employee: ";
    cin >> salary;

    Employee em(salary, id, name);

    cout << "Initial salary: " << em.getSalary() << endl;

    cout << "Enter Rating (0-1.4): ";
    cin >> performanceRating;
    em.applyRating(performanceRating);

    cout << "Updated salary: " << em.getSalary() << endl;

}

