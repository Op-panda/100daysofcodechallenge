#include<iostream>
using namespace std;
#include<stdlib.h>

int main(){
    char ch;
    int a,b,result;
    cout<<"Enter the two numbers:";
    cin>>a>>b;
    cout<<"Enter the operator (+,-,*,/):";
    cin>>ch;
    cout<<"\n";
    if(ch=='+')
    result=a+b;
    else if(ch=='-')
    result=a-b;
    else if(ch=='*')
    result=a*b;
    else if(ch=='/')
    result=a/b;
    else
    {
        cout<<"wrong operator!"<<"\n";

    }
    cout<<"The calculated result is:"<<result;

    return 0;

}
