#include<iostream>
using namespace std;
int main()
{
string name;
int weight_loss,req_days;
cout<<"Enter the Name of the Person: ";
cin>> name;
cout<<"Enter the target weight loss in kilograms: ";
cin>> weight_loss;
req_days=15*weight_loss;
cout<<name<<" will need "<<req_days<<" days to lose "<<weight_loss<<" of weight by following the doctor's suggestions";
}