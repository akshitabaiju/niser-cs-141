#include<iostream>
#include<cmath>
using namespace std;

int main () 
{
float a;
float b;
float c;
float d;
float e;
cout<<"enter principle  amount";
cin>>a;
cout<<"enter rate of interest";
cin>>b;
cout<<"enter time";
cin>>c;
d=a*(1+(b/100));
e=pow(d,c);
cout<<"compound interest="<<e;
}
