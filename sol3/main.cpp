#include <iostream>
#include <fstream>
#include "cla.h"
#include "cla.cpp"
using namespace std;

int main(){
    cla ak(5,10,2,3,-5,0.1,10,"akalisol3.dat");
    cla am(7,100,-3.5,4,100,10,15,"amumusol3.dat");
    cla an(12,17,0.01,0.2,1.5,0.08,20,"anniesol3.dat");
    cla as(10,20,4.2,-5.3,2.1,0.2,5,"ashesol3.dat");
    ak.f1();
    ak.f2();
    am.f1();
    am.f2();
    an.f1();
    an.f2();
    as.f1();
    as.f2();



    return 0;

}