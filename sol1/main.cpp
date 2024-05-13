#include <iostream>
#include <fstream>
#include "cla.h"
#include "cla.cpp"
using namespace std;

int main(){
    cla ak, am,an,as;
    ak.N1=5;ak.N2=10;ak.a=2;ak.b=3;ak.x0=-5;ak.dx=0.1;ak.m=10; //ak
    am.N1=7;am.N2=100;am.a=-3.5;am.b=4;am.x0=100;am.dx=10;am.m=15; //am
    an.N1=12;an.N2=17;an.a=0.01;an.b=0.2;an.x0=1.5;an.dx=0.08;an.m=20; //an
    as.N1=20;as.N2=20;as.a=4.2;as.b=-5.3;as.x0=2.1;as.dx=0.2;as.m=5; //as
    
    ak.f0("akalisol1.dat");
    ak.f1();
    ak.f2();
    am.f0("amumusol1.dat");
    am.f1();
    am.f2();
    an.f0("anniesol1.dat");
    an.f1();
    an.f2();
    as.f0("ashesol1.dat");
    as.f1();
    as.f2();



    return 0;

}