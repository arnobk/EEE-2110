/*
Name: Arnob Karmokar
ID: 16-01-05-055
Group: B1
Year: 2nd
Semester: 1st
*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
  float a,b,c;
  cout<<"Enter Three co-factors of quadratic equation (ax^2 + bx + c): ";
  cin>>a>>b>>c;
  double m = b/(2*a);
  float d = (b*b)-(4*a*c);
  if(d>0){
    cout<<"Roots of x are "<<(-b + pow(d,.5))/(2*a)<<" and "<<(-b - pow(d,.5))/(2*a)<<endl;
  }
  if (d==0){
    cout<<"Both roots of x are "<<-b/(2*a)<<endl;
  }
  if(d<0){
    cout<<"Roots of x are "<<-m<<" + " <<(pow(-d,.5))/(2*a)<<"i"<<" and "<<-m<<" - " <<(pow(-d,.5))/(2*a)<<"i" <<endl;
  }
  return 0;
}
