/*
Name: Arnob Karmokar
ID: 16-01-05-055
Group: B1
Year: 2nd
Semester: 1st
*/
#include<iostream>
using namespace std;
int main(){
  int age;
  cout<<"Enter your age: ";
  cin>>age;
  if(age<18){
    cout<<"You are a child."<<endl;
  }
  if(age>=18 && age<=65){
    cout<<"You are an adult."<<endl;
  }
  if(age>65){
    cout<<"You are a senior citizen."<<endl;
  }
  return 0;
}
