#include <iostream>
using namespace std;

namespace Namespace1{
    string nameSpace1Str = " Here is Namespace1's scope";
    void nameSpace1Func(){
        cout<<"Namespace1's function worked"<<endl;
    }

}

namespace Namespace2{
    string nameSpace2Str = " Here is Namespace2's scope";
    void nameSpace2Func(){
        cout<<"Namespace2's function worked"<<endl;
    }

}

int main() {
    
    cout<<"This string is from Namespace1: "<<Namespace1::nameSpace1Str<<endl;
    cout<<"This string is from Namespace2: "<<Namespace2::nameSpace2Str<<endl;
    Namespace1::nameSpace1Func();
    Namespace2::nameSpace2Func();

    return 0;
}