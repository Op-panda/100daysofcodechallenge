// program to calculate the factorial of an integer using iteration statements

#include<iostream>
using namespace std;
#include<stdlib.h>

int main(){
    int i,num,fact=1; 
    cout<<"Enter the number \n";
    cin>>num;
   
    for(i=1;i<=num;i++)
    fact=fact*i;
     cout<<"the factorial of"<<i-1<<"is"<<fact<<"\n";

    return 0;
}