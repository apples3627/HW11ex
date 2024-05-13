#pragma once
#include <fstream>
using namespace std;


class cla{
    public:
    cla();
    cla(int, int, float, float,float, float,int, string);
    ~cla();

    void f1();
    void f2();
private:
    int N1, N2;
    float a,b,x0,dx;
    int m;
    int *f11;
    float *f22;
    ofstream xx;
    string s;
 
};