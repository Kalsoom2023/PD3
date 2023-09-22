#include<iostream>
using namespace std;
int main()
{
int age,timesofmove,noofyears;
cout<<"Enter the person's age: ";
cin>> age;
cout<<"Enter the number of times they've moved: ";
cin>> timesofmove;
noofyears=age/(timesofmove+1);
cout<<"Average number of years lived in the same house: "<<noofyears;
}
