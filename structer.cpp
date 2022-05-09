#include <iostream>
using namespace std;

struct  oto
{
    float motor;
    int model;
    int color;
};


int main(){
    struct oto oto1 = {.motor = 1.6, .model=2,.color= 1};

    oto oto2;
    oto2.color = 2; oto2.model = 4; oto2.motor = 1.4;

    oto oto3 = {2.0,2020,4};

    cout<<"struct's size occupied in memory: "<<sizeof(oto1)<<" bytes"<<endl;
    cout<<"float's size occupied in memory: "<<sizeof(float)<<" bytes"<<endl;
    cout<<"int's size occupied in memory: "<<sizeof(int)<<" bytes"<<endl;
    cout<<"The struct contains to 1 float and 2 int variables :"<<endl;

    return 0;
}