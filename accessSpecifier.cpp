#include <iostream>
using namespace std;

class Coordinates{
    private: // members are accessible from outside the class
    int x;
    
    public: // members cannot be accessed (or viewed) from outside the class
    int y;
    void printCoordinates();
    void variablesDeclaretion(int , int);

    protected: // members cannot be accessed from outside the class, however, they can be accessed in inherited classes.
    int z;

};

void Coordinates::variablesDeclaretion(int _x, int _y){
    x = _x;
    y = _y;
}

void Coordinates::printCoordinates(){
    cout << "x = " << x << " y = " << y << endl;
}

int main() {
    
    Coordinates p1;
    p1.y = 16;
    p1.variablesDeclaretion(16,p1.y);
    p1.printCoordinates();

    return 0;
}