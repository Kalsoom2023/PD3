#include<iostream>
using namespace std;
int main()
{
float adult_tp,child_tp,no_ats,no_cts,percentage,amount,donation,remaining;
string movie;
cout<<"Enter the movie name: ";
cin>> movie;
cout<<"Enter the adult ticket price: $";
cin>> adult_tp;
cout<<"Enter the child ticket price: $";
cin>> child_tp;
cout<<"Enter the number of adult tickets sold: ";
cin>>no_ats;
cout<<"Enter the number of child tickets sold: ";
cin>> no_cts;
cout<<"Enter the percentage of the amount to be donated to charity: ";
cin>> percentage;
amount=(no_ats*adult_tp)+(no_cts*child_tp);
donation=percentage/100*amount;
remaining=amount-donation;
cout<<"Movie: "<<movie<<endl;
cout<<"Total amount generated from ticket sales: $"<<amount<<endl;
cout<<"Donation to charity ("<<percentage<<"%): $"<<donation<<endl;
cout<<"Remaining amount after donation: $"<<remaining;
}
