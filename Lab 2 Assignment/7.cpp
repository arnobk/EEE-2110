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

int main()
{
    double loanAmount, interest;
    int termLength, paymentsPerYear;
    cout<<"Enter the amount of Loan: ";
    cin>>loanAmount;
    cout<<"Enter interest rate: ";
    cin>>interest;
    cout<<"Enter the length (Years): ";
    cin>>termLength;
    cout<<"Enter the number of payments per year: ";
    cin>>paymentsPerYear;
    double paymentPerTerm = (loanAmount * pow(1+interest/(100*paymentsPerYear),(interest*termLength)))/(termLength*paymentsPerYear);
    cout<<"Regular Payment: "<<paymentPerTerm<<endl;

    return 0;
}
