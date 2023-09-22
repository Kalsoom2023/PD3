#include<iostream>
using namespace std;
int main()
{
float vegetableprice_kilo,fruitprice_kilo,total,total_rp;
int kg_vegetable,kg_fruit;
cout<<"Enter vegetable price per kilogram (in coins): ";
cin>>vegetableprice_kilo;
cout<<"Enter fruit price per kilogram (in coins): ";
cin>> fruitprice_kilo;
cout<<"Enter total kilograms of vegetables: ";
cin>> kg_vegetable;
cout<<"Enter total kilograms of fruits: ";
cin>> kg_fruit;
total=(vegetableprice_kilo*kg_vegetable)+(fruitprice_kilo*kg_fruit);
total_rp=total/1.94;
cout<<"Total earnings in Rupees (Rps): "<<total_rp;
}
