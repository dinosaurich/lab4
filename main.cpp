#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>
#include <vector>
using namespace std;
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
class Coordinates{
private:
int startpos_x,startpos_y;
public:
int x,y;
vector <int> position;
void SaveLastPosition(int a, int b){
position.push_back(a);
position.push_back(b);
}
int getLastPosition(int step_num){
return position.at(step_num);
return position.at(step_num+1);
}
void set_startpos(int a, int b){
startpos_x=a;
startpos_y=b;
}
int get_startpos_x(){
return startpos_x;
}
int get_startpos_y(){
return startpos_y;
}
};
Coordinates c;
void changepos(){
k++;
c.x=rand()%11;
c.y=rand()%11;
c.SaveLastPosition(c.x,c.y);
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

int main()
{
Object obj;
obj.init();
while(true){
obj.changepos();
obj.c.getLastPosition(obj.k);
sleep(5);
}
    return 0;
}
