#include <iostream>
using namespace std;

class Coordinates{
    public:
    int x,y;
};

int main() {

    Coordinates n;
    n.x = 0;
    n.y = 5;

    cout<<"x = "<<n.x <<" y = "<< n.y << endl;

    return 0;
}