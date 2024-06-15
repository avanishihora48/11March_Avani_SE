#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream f1("ans-5-1.txt");
    ifstream f2("ans-5-2.txt");

    if (!f1.is_open() || !f2.is_open())
    {
        cout << "Cannot open one or both files!" << endl;
        return 1;
    }

    bool equal = true;
    char ch1, ch2;

    // Compare file contents character by character
    while (true)
    {
        ch1 = f1.get();
        ch2 = f2.get();

        // Check for end of file
        if (ch1 == EOF || ch2 == EOF)
        {
            // If both reach EOF at the same time, files are equal
            if (ch1 == EOF && ch2 == EOF)
                cout << "Files are equal!" << endl;
            else
                cout << "Files are not equal!" << endl;
            break;
        }

        // Compare characters
        if (ch1 != ch2)
        {
            equal = false;
            break;
        }
    }

    f1.close();
    f2.close();

    return 0;
}

