#include<iostream>
using namespace std;
int main()
{
int four_digitno,sum =0,sum1,sum2,sum3,sum4,no2,no3,no4;
cout<<"Enter a 4-digit number: ";
cin>>four_digitno;
sum1=four_digitno%10;
four_digitno=four_digitno/10;
sum2=four_digitno%10;
four_digitno=four_digitno/10;
sum3=four_digitno%10;
four_digitno=four_digitno/10;
sum4=four_digitno%10;
sum=sum1+sum2+sum3+sum4;
cout<<"Sum of the individual digits: "<<sum;
}