#include <iostream>
using namespace std;

const double PI = 3.14;

class Shape {
public:
    double area(int length, int breadth){
        return length * breadth;
    }

    double area(double base, double height){
        return 0.5 * base * height;
    }

    double area(float radius){
        return PI * radius * radius;
    }
};

main(){
    Shape shape;
    int length, breadth;
    double base, height;
    float radius;

    cout<<"Enter length and breadth of the rectangle: ";
    cin>>length>>breadth;

    cout<<"Enter base and height of the triangle: ";
    cin>>base>>height;
    
    cout<<"Enter radius of the circle: ";
    cin>>radius;
    
    cout<<"\nArea of Rectangle: "<<shape.area(length, breadth);
    cout<<"\nArea of Triangle: "<<shape.area(base, height);
    cout<<"\nArea of Circle: "<<shape.area(radius);
}
