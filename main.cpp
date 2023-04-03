#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>
#include <vector>
#include "Object.h"
#include "Coordinates.h"
using namespace std;
int main()
{
Object obj;
obj.init();
while(true){
obj.changepos();
c.getLastPosition(obj.k);
sleep(5);
}
    return 0;
}
