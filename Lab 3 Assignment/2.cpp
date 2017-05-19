/*
Name: Arnob Karmokar
ID: 16-01-05-055
Group: B1
Year: 2nd
Semester: 1st
*/
#include<iostream>
#include<cmath>
#define PI 3.14159265

using namespace std;
int main(){
  double v,z,t;
  cout<<"Input Voltage of the source: ";
  cin>>v;
  cout<<"Input ohm value of Impedence: ";
  cin>>z;
  cout<<"Input angle of the Impedence: ";
  cin>>t;
  double i = v/z;
  double real = v*i*cos(t*PI/180);
  double appa = v*i*sin(t*PI/180);
  cout<<"Real Power: "<<real<<endl;
  cout<<"Reactive Power: "<<appa<<endl;
  cout<<"Apparent Power: "<<pow((real*real + appa*appa),.5)<<endl;
  cout<<"Power Factor: "<<cos(t*PI/180)<<endl;
  return 0;
}
