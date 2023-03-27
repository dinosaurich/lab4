#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>
using namespace std;
class wildtiger{
private:
int startpos_x,startpos_y;
double s;
public:
int k=0;
int last_position[100];
void setStart_x(int x){
    cin>>startpos_x;
}
void setStart_y(int y){
    cin>>startpos_y;
}
int getStart_x(){
    return startpos_x;
}
int getStart_y(){
    return startpos_y;
}
void getLastPosition(int step_number){
cout<<"x:"<<last_position[2*step_number+1]<<","<<last_position[2*step_number+2]<<endl;
}
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
public:
int x,y;

};
Coordinates c;
void changepos(){
c.x=rand()%11;
c.y=rand()%11;
last_position[2*k+1]=startpos_x;
last_position[2*k+2]=startpos_y;
array1[startpos_x][startpos_y]='0';
array1[c.x][c.y]='*';
startpos_x=c.x;
startpos_y=c.y;
//cout<<"x:"<<x<<endl;
//cout<<"y"<<y<<endl;
s=sqrt(pow((startpos_x-c.x),2)+pow((startpos_y-c.y),2));
//cout<<"s:"<<s<<endl;
c.x=0;
c.y=0;
for(int i =0;i<10;i++){
    for(int j=0;j<10;j++){
        cout<<array1[i][j];
    }
    cout<<""<<endl;
}
s=0;
}

};

int main()
{
wildtiger wt;
wt.init();
wt.setStart_x(0);
wt.setStart_y(0);
while(true){
wt.changepos();
int i=0;
wt.getLastPosition(i);
i++;
sleep(5);
}
    return 0;
}
