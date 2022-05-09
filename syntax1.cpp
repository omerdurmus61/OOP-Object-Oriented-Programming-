#include <iostream>
using namespace std;

int main() {

    cout << "Hi guys"<< endl;
    
    char a = 'a';
    int b = 10;
    float c = 3.14;
    double d = 12.87;
    bool e = true;

    const int var = 61;

    cout <<"The char data type takes up to "<< sizeof(char) <<" byte of memory"<< endl;
    cout <<"The int data type takes up to "<< sizeof(int) <<" bytes of memory"<< endl;
    cout <<"The float data type takes up to "<< sizeof(float) <<" bytes of memory"<< endl;
    cout <<"The double data type takes up to "<< sizeof(double) <<" bytes of memory"<< endl;
    cout <<"The bool data type takes up to "<< sizeof(bool) <<" byte of memory"<< endl;

    int var1;
    cout<<"pleas enter a number: "<< endl;
    cin >> var1;
    cout<< endl << var1 << endl;
    return 0;
}