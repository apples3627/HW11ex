#include "cla.h"
#include <fstream>
using namespace std;
cla::cla(){};
cla::cla(int q, int w, float e, float r,float t, float y,int u){
    N1=q; N2=w, a=e; b=r; x0=t, dx=y; m=u; 
}
cla::~cla(){
    delete[] f11;
    delete[] f22;
    xx.close();

}
void cla::f0(string s) {
    xx.open(s, ios::binary | ios::out);
    int data[]={N1,N2,a,b,dx,m};
    for(int i=0;i<6; i++){
    xx.write((char*)&data[i], 4);
    }
}
void cla::f1(){
    f11= new int[N2-N1+1];
    for(int i=N1; i<=N2;i++){
        f11[i-N1]=i*(i+1)/2;
    }
    xx.write((char*)f11, 4*(N2-N1+1));
}

void cla::f2(){
    f22= new float[m];
    float x=x0;
    for (int i= 0; i<m;i++){
        f22[i]=a*x+b;
        x+=dx;
    }
    xx.write((char*)f22,4*m);
}