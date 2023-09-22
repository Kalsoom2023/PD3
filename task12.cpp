#include<iostream>
using namespace std;
int main()
{
int no_square,width,height,no1,paint_walls;
cout<<"Number of square meters you can paint: ";
cin>>no_square;
cout<<"Width of the single wall (in meters): ";
cin>> width;
cout<<"Height of the single wall (in meters): ";
cin>> height;
no1=(height*width);
paint_walls=no_square/no1;
cout<<"Number of walls you can paint: "<<paint_walls;
}