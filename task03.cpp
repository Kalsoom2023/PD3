#include<iostream>
using namespace std;
int main()
{
int initial_velocity,acceleration,time,final;
cout<<"Enter Initial Velocity (m/s): ";
cin>> initial_velocity;
cout<<"Enter Acceleration (m/s^2): ";
cin>> acceleration;
cout<<"Enter Time (s): ";
cin>>time;
final= acceleration*time+initial_velocity;
cout<<"Final Velocity (m/s): "<<final;
}