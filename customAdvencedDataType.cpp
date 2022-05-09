#include <iostream>
using namespace std;

struct coordinate{
    int x,y;

};

typedef int* pInt;
typedef int array[5];


int main() {
    coordinate myCoordinate;
    myCoordinate.x = 1;
    myCoordinate.y = 6;

    cout<<"Coordinate structer's total size: "<<sizeof(coordinate)<<endl;
    cout<<"myCoordinate's size: "<<sizeof(myCoordinate)<<endl;
    cout<<"myCoordinate.x's size: "<<sizeof(myCoordinate.x)<<endl;
    cout<<"myCoordinate.y's size: "<<sizeof(myCoordinate.y)<<endl;
    cout<<"---------------------------------------"<<endl;


    coordinate* coorPtr;
    coorPtr = new coordinate();
    coorPtr->x = 0;
    coorPtr->y= 1; 

    cout<<"Address of pointer in coordinate structer: "<<coorPtr<<endl;
    cout<<"Values of pointer in coordinate structer: x = "<<coorPtr->x<<" , y = "<<coorPtr->y<<endl;


    pInt ptr;
    array myArray;
    myArray[3] = 61;


    return 0;
}