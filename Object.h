#ifndef OBJECT_H
#define OBJECT_H
#include <stdlib.h>
#include "Coordinates.h"
#include <vector>
#include <stdlib.h>
#include <math.h>
using namespace std;
Coordinates c;
class Object{
double s;
public:
vector<Coordinates>path;
int k=0;
int last_position[100];
char array1[10][10];
void init(){
s=0;
for(int i =0;i<10;i++){
    for(int j=0;j<10;j++){
        array1[i][j]='0';
        //cout<<array1[i][j];
    }
    //cout<<""<<endl;
}
}
void changepos(){
k++;
c.x=rand()%11;
c.y=rand()%11;
path.push_back(c.x);
path.push_back(c.y);
array1[c.get_startpos_x()][c.get_startpos_y()]='0';
array1[c.x][c.y]='*';
c.set_startpos(c.x,c.y);
s=sqrt(pow((c.get_startpos_x()-c.x),2)+pow((c.get_startpos_y()-c.y),2));
c.x=0;
c.y=0;
for(int i =0;i<10;i++){
    for(int j=0;j<10;j++){
        cout<<array1[i][j];
    }
    cout<<""<<endl;
}
}

};
class UserEquipment : public Object {
private:
double latitude;
double longitude;
double R = 6371;
public:
vector <double> lat, lon;
UserEquipment() : Object () {};
UserEquipment(int p_x, int p_y);
void path_print();
void random_walk();
void step_on (int p_x, int p_y);
void current_pos_check();
};
UserEquipment::UserEquipment(int p_x, int p_y) {
    x = p_x;
    y = p_y;
    path_x.push_back(p_x);
    path_y.push_back(p_y);
    latitude = (asin ((sqrt(pow(R, 2) - pow(x, 2)))/(R))*180)/M_PI;
    longitude = (atan2 (y, x)*180)/M_PI;
    lat.push_back(latitude);
    lon.push_back(longitude);
}
#endif // OBJECT_H
