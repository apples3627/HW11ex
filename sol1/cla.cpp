#include "cla.h"

void cla::f0(string s) {
    xx.open(s, ios::binary | ios::out);
    int data[]={N1,N2,a,b,dx,m};
    for(int i=0;i<6; i++){
    xx.write((char*)&data[i], 4);
    }
}
void cla::f1(){
    int f11[N2-N1+1];
    for(int i=N1; i<=N2;i++){
        f11[i-N1]=i*(i+1)/2;
    }
    xx.write((char*)f11, 4*(N2-N1+1));
}
void cla::f2(){
    float f22[m], x=x0;
    for (int i= 0; i<m;i++){
        f22[i]=a*x+b;
        x+=dx;
    }
    xx.write((char*)f22,4*m);
    xx.close();
}