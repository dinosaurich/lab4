#ifndef COORDINATES_H
#define COORDINATES_H


class Coordinates{
public:
int x,y;
private:
int startpos_x, startpos_y;
public:
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

#endif // COORDINATES_H
