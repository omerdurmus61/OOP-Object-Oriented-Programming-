#include <iostream>
using namespace std;

class Pointers{
    public:
    int* ptr,*ptr2;

    void returnToAddressAndValue(int* ptr,int arrayLenght){
        for(int i = 0;i<arrayLenght;i++)
        {
            cout<<"The address of the element in the "<<i<<" index: "<<ptr+i<<endl;
            cout<<"The value of the element in the "<<i<<" index: "<<*(ptr+i)<<endl;
        }
    }
};

int main() {

    int myArray[10]={1,2,3,4,5,6,7,8,9,10};

    Pointers mySlave;

    mySlave.returnToAddressAndValue(myArray,10);


  
    return 0;
}