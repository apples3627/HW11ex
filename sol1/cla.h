#pragma once
#include <fstream>
using namespace std;


class cla{
    public:
    cla() {};
    int N1, N2;
    float a,b,x0,dx;
    int m;
    ofstream xx;
    void f0(string);
    void f1();
    void f2();
};