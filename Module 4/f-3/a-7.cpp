#include<iostream>
using namespace std;

class date
{
    int day, mon, yr;

public:
    date(int d, int m, int y)
    {
        day = d;
        mon = m;
        yr = y;
    }

    int getDay()
    {
        return day;
    }

    int getMonth()
    {
        return mon;
    }

    int getYear()
    {
        return yr;
    }

    bool isValidDate()
    {
        if(mon < 1 || mon > 12)
        {
            return false;
        }
        if(day < 1 || day > 31)
        {
            return false;
        }
        if((mon == 4 || mon == 6 || mon == 9 || mon == 11) && day > 30)
        {
            return false;
        }
        
        if(mon == 2)
        {
            if(yr % 4 == 0 && (yr % 100 != 0 || yr % 400 == 0)) 
            {
                if(day > 29)
                {
                    return false;
                }
            }
            else
            {
                if(day > 28)
                {
                    return false;
                }
            }
        }
        return true;
    }
};

int main()
{
    int a, b, c;

    cout << "Enter day: ";
    cin >> a;
    cout << "Enter month: ";
    cin >> b;
    cout << "Enter year: ";
    cin >> c;

    date d(a, b, c);
    cout << "\nDate: " << d.getDay() << "/"<< d.getMonth() <<"/"<< d.getYear() << "\n";

    if(d.isValidDate())
    {
        cout << "Date is valid\n";
    }
    else
    {
        cout << "Date is invalid\n";
    }

    return 0;
}

