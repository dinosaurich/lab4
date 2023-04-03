#ifndef OBJECT_H
#define OBJECT_H
#include <stdlib.h>
#include "Coordinates.h"
#include <vector>
#include <stdlib.h>
#include <math.h>
using namespace std;
Coordinates c;
vector<Coordinates>path;
class Object{
double s;
public:
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

#endif // OBJECT_H
