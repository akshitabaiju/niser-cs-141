#include<iostream>
using namespace std;

int main () 
{
float a;
float b;
float c;
float d;
float e;
float f;
float g;
float h;
float i;
cout<<"the maximum mark that can be obtained in a subject=";
cin>>a;
cout<<"mark obtained in subject 1";
cin>>b;
cout<<"mark obtained in subject 2";
cin>>c;
cout<<"mark obtained in subject 3";
cin>>d;
cout<<"mark obtained in subject 4";
cin>>e;
cout<<"mark obtained in subject 5";
cin>>f;
g=b+c+d+e+f;
cout<<"total="<<g;
h=g/5;
cout<<"average="<<h;
i=(g/(5*a))*100;
cout<<"percentage="<<i;
}
