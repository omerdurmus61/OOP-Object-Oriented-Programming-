#include <iostream>
using namespace std;

class Robot{
protected:
    int axis;
    string company;
    string color;

public:
    int getAxis(){return axis;}
    string getCompany(){return company;}
    string getColor(){return color;}

    void setAxis(int _axis){axis = _axis;}
    void setCompany(string _company){company = _company;}
    void setColor(string _color){color = _color;}

    string simKey;

};

class Drone:public Robot{
    
};

class Atagv: public Robot{

int cameraNum;
int wheelNum;

public:

    int getCameraNum(){return cameraNum;}
    int getWheelNum(){return wheelNum;}

    void setCameraNum(int cameraNum){ this->cameraNum = cameraNum;}
    void setWheelNum(int wheelNum) {this->wheelNum = wheelNum;}

};

int main(){
    adin a;
    a.sa();
    Robot myScara;
    myScara.setAxis(6);
    myScara.setColor("orange");
    myScara.setCompany("Kuka");

    cout<<"My Scara's axis : "<< myScara.getAxis()<<endl;
    cout<<"My Scara's company : "<<myScara.getCompany()<<endl;
    cout<<"My Scara's color : "<<myScara.getColor()<<endl;
    
    Atagv myAgv;

    myAgv.setCameraNum(2);
    myAgv.setWheelNum(4);
    myAgv.setAxis(4);
    myAgv.setColor("orange");
    myAgv.setCompany("ABB");

    cout<<"My AGV's axis : "<< myAgv.getAxis()<<endl;
    cout<<"My AGV's company : "<<myAgv.getCompany()<<endl;
    cout<<"My AGV's color : "<<myAgv.getColor()<<endl;
    cout<<"My AGV's wheels number : "<<myAgv.getWheelNum()<<endl;
    cout<<"My AGV's cameras numer : "<<myAgv.getCameraNum()<<endl;

    myAgv.simKey = "ABC123";
    
    


    return 0;
}