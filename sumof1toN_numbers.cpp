#include <iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    int i=1;
    cout<<"enter a number:";
    cin>>n;
    while ( i<=n){
        sum =sum+i;
        i++;
        

    }
    cout<<"sum of 1 to"<<n<<"="<<sum;
    return 0;


    }
