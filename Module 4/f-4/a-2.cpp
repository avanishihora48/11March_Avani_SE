#include <iostream>
using namespace std;
class area 
{
public:
    int l, w; 
    void getData() {
        cout << "Enter length of rectangle: ";
        cin >> l;
        cout << "Enter width of rectangle: ";
        cin >> w;
    }
};

class getAns : public area {
public:
    void ans() {
        cout << "Area of rectangle is: " << l * w << endl;
    }
};

int main() {
    getAns g;
    g.getData();
    g.ans();
    
}

