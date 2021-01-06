// program to convert into diiferent temperature scales

#include<iostream>
using namespace std;

int main(){
    int choice;
    float f,c;
cout<<"temperature conversion menu"<<"\n";
cout<<"1.farenheit to celcius"<<"\n";
cout<<"2.Celsius to farenheit"<<"\n";
cout<<"Enter your choice:";
cin>>choice;
if(choice==1)
{
    cout<<"Enter temp in farenheit:";
    cin>>f;
    c=f-32/1.8;
    cout<<"The temp in celcius is:"<<c<<"\n";

}
else
{
    cout<<"Enter temp in celcius:";
    cin>>c;
    f=c*1.8+32;
    cout<<"The temp in farenheit is:"<<f<<"\n";
}
return 0;
}

