#include <iostream>
using namespace std;
// dynamic memory manangment
// new-delete

int main() {

    //new new[] delete delete[]
    int* emptyIntPtr = new int();
    int* IntPtr = new int(5);

    cout<<"Empty pointer's address: "<<emptyIntPtr<<endl<<"Empty pointer's value: "<<*emptyIntPtr<<endl;
    cout<<"Other pointer's address: "<<IntPtr<<endl<<"Other pointer's value: "<<*IntPtr<<endl;
    cout<<"-------------------------------------"<<endl;
    int* ptrArray = new int[10];

    for(int i = 0;i<10;i++)
    {
        *(ptrArray + i) = i;
        cout<<"Pointer array's address: "<<(ptrArray + i)<<endl<<"Pointer array's value: "<<*(ptrArray + i)<<endl;
    }
    

    //memory return

    delete[] ptrArray;
    delete emptyIntPtr;
    delete IntPtr;





    return 0;
}