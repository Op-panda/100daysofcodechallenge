// prog to display a menu regarding rectangle operations and perform according to user response

#include<iostream>
using namespace std;
#include<math.h>

int main(){
    float l,b,area,pm,diag;
    char ch,ch1;
    do
    {
        cout<<"rectangle menu\n";
        cout<<"1.area\n";
        cout<<"2.perimeter\n";
        cout<<"3.diagonal\n";
        cout<<"4.Exit\n";
        cin>>ch;
        if(ch=='1'||ch=='2'||ch=='3')
        {
            cout<<"Enter length and breadth";
            cin>>l>>b;
        }
        switch(ch)
        {
            case'1': area=l*b;
            cout<<"Area:"<<area<<endl;
            break;

            case'2': pm=2*(l+b);
            cout<<"perimeter:"<<pm<<endl;
            break;

            case'3': diag=sqrt(l*l+b*b);
            cout<<"diagonal:"<<diag<<endl;
            break;

            case'4': break;

            default: cout<<"Wrong choice\n";
            break;
        }
        cout<<"\npress any key to continue\n";
        ch1=getchar();

    } while (ch>='1'&& ch<='3');
    return 0;
}


