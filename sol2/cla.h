#pragma once
#include <fstream>
using namespace std;


class cla{
    public:
    cla();
    cla(int, int, float, float,float, float,int);
    ~cla();

    int N1, N2;
    float a,b,x0,dx;
    int m;
    int *f11;
    float *f22;
    ofstream xx;


    void f0(string);
    void f1();
    void f2();
};