#include <iostream>
using namespace std;

int myPtrFunction(int i){

    return i+61;
}

class Coordinates{
    public:
    int x,y;

    void calculateCoordinate(int _x,int _y){
        x = _x;
        y = _y;   
    }

    void output(){
           cout<<"x = "<<x <<" y = "<< y << endl;
    }

    bool isOrigin(){
        /*
        if (x == 0 && y == 0)
            return true;
        else 
            return false; */
        return x == 0 && y == 0; // :)
    }
     
};

int main() {

    Coordinates n;
    n.x = 0;
    n.y = 5;
    n.calculateCoordinate(2,7);
    n.output();

    Coordinates m;
    m.calculateCoordinate(10,20);
    m.output();

    if (n.isOrigin())
        cout<<"n is the origin"<< endl;
    else
        cout<<"n is not the origin"<< endl;

    Coordinates* ptr = &m;

    cout<<"Class' output method's outputs with pointer"<<endl;
    ptr-> output();
    cout<<"Class' isOrigin method's outputs with pointer"<<endl<< ptr->isOrigin()<<endl;
    cout<<"class' variables"<<endl<<ptr->x<<" and "<<ptr->y <<endl;


    Coordinates* ptr2;
    //dynamic memory management
    ptr2 = new Coordinates();

    cout<<"ptr2's outputs"<<endl;
    ptr2->calculateCoordinate(61,61);
    ptr2->output();
    cout<<"ptr2's isOrigin method's output"<<endl<<ptr2->isOrigin()<<endl;
    cout<<"--------------------------"<<endl;   

    Coordinates coordinateArray[10];
    Coordinates* ptrArray;
    ptrArray = new Coordinates[10];

    ptrArray = coordinateArray;

    for(int i = 0;i<10;i++)
    {
        coordinateArray[i].calculateCoordinate(i,i*10);
        cout<<"Index: "<<i<<endl<<"Address: "<<(ptrArray+i)<<endl<<"Values x and y: "<<(ptrArray+i)->x<<" and "<<(ptrArray+i)->y 
        <<endl<<"-----------------"<<endl;

    }

    cout<<"Function's address: "<<myPtrFunction<<endl;

    Coordinates* coorPtr = new Coordinates();
    cout<<endl<<coorPtr<<endl;
    
    delete coorPtr;



    return 0;
}