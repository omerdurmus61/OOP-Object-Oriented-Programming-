#include <iostream>
using namespace std;
//we must to declare a prototipe of MotorDriver class.
//Because we used it in the Sensor class.
//we used it before we defined it.
class MotorDriver;

class Sensor{
    private:
    int x;
    public:
        int getX();
        //void setX(int);
        friend void setDistance(Sensor&);
        void setY(MotorDriver&);
};

class MotorDriver{
    private:
    int y;
    public:
        int getY();
        //void setY(int);
        friend class Sensor;


};



int Sensor::getX(){return x;}
//void Sensor::setX(int _x){x = _x;}

void Sensor::setY(MotorDriver& _y){_y.y = 100;}

int MotorDriver::getY(){return y;}
//void MotorDriver::setY(int _y){y = _y;}

void setDistance(Sensor& _x){_x.x = 0;} // this function is not a member of Sensor class

int main() {
    Sensor mySens;
    //mySens.setX(61);
    cout<<"output of getx() from sensor class: "<<mySens.getX()<<endl;
    setDistance(mySens);
    cout<<"output after the setDistance() function: "<<mySens.getX()<<endl;

    MotorDriver motor;
    //motor.setY(50);
    cout<<"output of gety() from motor class: "<<motor.getY()<<endl;

    mySens.setY(motor);
    cout<<"output after the sensor class' setY() function"<<motor.getY()<<endl;

    return 0;
}