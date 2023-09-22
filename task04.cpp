#include<iostream>
using namespace std;
int main()
{
float imposter_count,player_count;
cout<<"Enter Imposter Count: ";
cin>> imposter_count;
cout<<"Enter Player Count: ";
cin>> player_count;
float chance=(imposter_count/player_count)*100;
cout<<"Chance of being an imposter: "<<chance<<"%";
}
