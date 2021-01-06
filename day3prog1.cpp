// program to give name of the day on giving number from(1-7)

#include<iostream>
using namespace std;

int main(){
    int daynumber;
    cout<<"Enter number of week days(1-7):";
    cin>>daynumber;
    switch(daynumber)
    { case 1: cout<<"\n sunday";
    break;
    case 2: cout<<"\n monday";
    break;
    case 3: cout<<"\n tuesday";
    break;
    case 4: cout<<"\n wednesday";
    break;
    case 5: cout<<"\n thursday";
    break;
    case 6: cout<<"\n friday";
    break;
    case 7: cout<<"\n saturday";
    break;
    default:cout<<"\n wrong number of day!";
    }
    return 0;

}