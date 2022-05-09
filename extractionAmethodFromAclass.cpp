#include <iostream>
using namespace std;

class Coordinates{
    public:
    int x,y;

    void variablesDeclaretion(int,int);

    bool isOrigin();

    void printCoordinates();
};

void Coordinates::variablesDeclaretion(int _x, int _y){
    x = _x;
    y = _y;
}

bool Coordinates::isOrigin(){
    return x == 0 && y == 0;
}

void Coordinates::printCoordinates(){
    cout << "x = " << x << " y = " << y << endl;
}

int main() {

    Coordinates p1;
    p1.variablesDeclaretion(1,2);
    cout<< p1.isOrigin()<< endl;
    p1.printCoordinates();

  
    return 0;
}