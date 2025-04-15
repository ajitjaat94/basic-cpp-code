#include<iostream>
using namespace std ;

int main(){
    int a = 10;
    int b = 20;
    bool c = true;
    bool d = false;
    string str = "hello world";
    char ch = 'A';
    

    cout << a + b << endl;//add
    cout << a - b << endl;//sub
    cout << a * b << endl;//mul
    cout << a / b << endl;//div
    cout << a % b << endl;//mod
    cout << c << endl;//bool
    cout << d << endl;//bool
    cout << str << endl;//string    
    cout << ch << endl;//char
    cout << (a == b) << endl;//equal to
    cout << (a += b) << endl;//add and assign
    cout << (a -= b) << endl;//sub and assign
    cout << (a *= b) << endl;   //mul and assign
    cout << (a /= b) << endl;//div and assign
    cout << (a %= b) << endl;//mod and assign
    cout << (a <<= b) << endl;//grater and assign
    cout << (a >>= b) << endl;
    cout << (a &= b) << endl;
    cout << (a |= b) << endl;
    cout << (a ^= b) << endl;

    


    return 0;

}