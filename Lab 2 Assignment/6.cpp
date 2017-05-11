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
  int a,b,c;
  cout<<"Input the co-efficients of Quadratic Equation(ax^2 + bx + c = 0): (Separate by Spaces)"<<endl;
  cin>>a>>b>>c;
  double m = (b*b)-(4*a*c);
  double r1 = (-b + pow(m,1/2))/(2*a);
  double r2 = (-b - pow(m,1/2))/(2*a);
  cout<<"Value of X are "<< r1 << " and " << r2 <<endl;
  return 0;
}
