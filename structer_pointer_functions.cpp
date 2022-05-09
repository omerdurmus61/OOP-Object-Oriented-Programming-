#include <iostream>
using namespace std;


struct oto{
    float motor;
    int model;
    char color;
}otoDataBase[100];

int main(){
    oto oto1;
    oto* otoPtr = &oto1;
    
    otoDataBase[0].motor = 1.0;
    otoDataBase[0].model = 1;
    otoDataBase[0].color = 'b';

    cout<<otoDataBase[0].model<<endl;

    return 0;
}

