#include <iostream>
using namespace std;

class Coordinates{
    private:
    int x = 0,y = 0;

    public:
    // Getter and Setter methods
    int getX();
    int getY();

    void setX(int);
    void setY(int);
};

int Coordinates::getX(){
    return x;
}

int Coordinates::getY(){
    return y;
}

void Coordinates::setX(int _x){
    x = _x;
}

void Coordinates::setY(int _y){
    y = _y;
}


int main() {

    Coordinates p1;
    
    cout<<"Private x: "<<p1.getX()<<endl;
    cout<<"Private y: "<<p1.getY()<<endl;

    p1.setX(1);
    p1.setY(6);

    cout<<"Changed Private x: "<<p1.getX()<<endl;
    cout<<"Changed Private y: "<<p1.getY()<<endl;

  
    return 0;
}