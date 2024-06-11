#include <iostream>
using namespace std;

class Matrix {
    int size;
    int *data;

public:
    Matrix(int s){
    	size = s;
        data = new int[size];
    }

    void input(){
        cout<<"Enter two numbers : "<<endl;
        for (int i = 0; i < size; ++i){
            cin >> data[i];
        }
    }

    void display(){
        for (int i = 0; i < size; ++i){
            cout << data[i] << " ";
        }
        cout<<"\n";
    }

    Matrix operator+(Matrix &other){
        Matrix result(size);
        for (int i = 0; i < size; ++i){
            result.data[i] = this->data[i] + other.data[i];
        }
        return result;
    }
};

int main(){
    int size=2;

    Matrix mat1(size);
    Matrix mat2(size);

    cout << "Matrix 1:" << endl;
    mat1.input();
    cout << "Matrix 2:" << endl;
    mat2.input();

    Matrix sum = mat1 + mat2;

    cout << "Matrix 1 is : ";
    mat1.display();
    cout << "Matrix 2 is : ";
    mat2.display();
    cout << "Sum of Matrix 1 and Matrix 2 is: ";
    sum.display();
}
