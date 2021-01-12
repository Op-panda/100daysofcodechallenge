// prog to read marks of 'n' no. of students.

#include<iostream>
using namespace std;

int main(){
    int n, marks[n];
    cin>>n;

    for(int i=0; i<n; ++i){
        cout<<"enter marks of roll no."<<i+1<<":";
        cin>> marks[i];
    }
    cout<<endl;
    for(int i=0; i<n ; ++i){
    cout<<"marks["<<i<<"]=" <<marks[i]<<endl;
    }

return 0;
}
