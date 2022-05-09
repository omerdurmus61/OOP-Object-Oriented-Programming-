#include <iostream>
using namespace std;

class Coordinate{
    private:
    int x = 0;
    public:
        int getX();
        void setX(int);
};

int Coordinate::getX(){return x;}

void Coordinate::setX(int x){
    this->x = x;
}

int main() {
    Coordinate p;
    cout<<p.getX()<<endl;
    p.setX(10);
    cout<<p.getX()<<endl;

    return 0;
}