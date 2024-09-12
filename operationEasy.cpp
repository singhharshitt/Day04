#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int a,b;
    cout<<"Enter first integer: ";
    cin>>a;
    cout<<"Enter second integer: ";
    cin>>b;;
    int add=a+b;
    int sub=a-b;
    int mul=a * b;
    double division= (double)a/b;
    int mod= a%b;
    cout<<"Addition: "<<add<<endl;
    cout<<"Subtraction: "<<sub<<endl;
    cout<<"Multiplication: "<<mul<<endl;
    if(b==0){
        cout<<"Invalid";
    }else{
        cout<<"Division: "<<division<<endl;
    }
    cout<<"Modulus: "<<mod<<endl;
    return 0;
}
