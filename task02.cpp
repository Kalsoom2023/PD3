#include<iostream>
using namespace std;
int main()
{
int minutes,fps,total;
cout<<"Number of Minutes: ";
cin>> minutes;
cout<<"Frames per Second: ";
cin>> fps;
total=(minutes*60)*fps;
cout<<"Total Number of Frames: "<<total;
}