#include <iostream>
using namespace std;
#define LENGHT 10

class Pointers{

    public:
    int index = 0;
    
    void returnArrayWhitPointer(int* ptr, int* lastPtr)
    {
        int* ptrc = ptr;
        cout<<"while loop"<<endl;
        while(ptr<lastPtr)
        {
            cout<<"Address: "<<ptr<<endl<<"Value: "<<*ptr<<endl<<"Index: "<<index<<endl<<"---------------"<<endl; ++ptr; ++index;
        }

        index = 0;
        cout<<"for loop"<<endl;

        // first way with for loop is copy ptr to ptrc.
        for( ;ptrc<lastPtr;++ptrc)
        {
            cout<<"Address: "<<ptrc<<endl<<"Value: "<<*ptrc<<endl<<"Index: "<<index<<endl<<"---------------"<<endl; ++index;
        } 

        index = 0;
        // second way with for loop is substract the lenght from ptr
        cout<<"for loop's second way"<<endl;
        for(ptr = ptr-LENGHT;ptr<lastPtr;++ptr)
        {
            cout<<"Address: "<<ptr<<endl<<"Value: "<<*ptr<<endl<<"Index: "<<index<<endl<<"---------------"<<endl; ++ptr; ++index;
        }

    }

};

int main() {
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    int* ptr = array;
    int* lastPtr = ptr + LENGHT;

    Pointers slave;
    slave.returnArrayWhitPointer(ptr,lastPtr);

    return 0;
}