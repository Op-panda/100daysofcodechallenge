// prog to find distance between two given coordinates

#include<iostream>
using namespace std;
#include<stdlib.h>
#include<math.h>

int main(){
    double d,x1,x2,y1,y2;
    cout<<"Enter first coordinates:";
    cin>>x1>>x2;
    cout<<"Enter second coordinates:";
    cin>>x2>>y2;
    d=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    cout<<"The distance between two coordinates is:"<<d<<endl;

    return 0;
    }
