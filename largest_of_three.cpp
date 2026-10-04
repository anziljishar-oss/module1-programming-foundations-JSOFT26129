#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter first number:";
    cin>>a;
    cout<<"enter second number:";
    cin>>b;
    cout<<"enter third number:";
    cin>>c;
    if(a>b && a>c){
    cout<<"largest number is"<<a;
} else if(b>a && b>c){
    cout<<"largest  number is "<<b;
}else{
    cout<<"largest number is "<<c;

}
 return 0;
}