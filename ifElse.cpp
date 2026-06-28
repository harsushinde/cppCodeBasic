#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    // if (n%5==0){
    //     cout<<"Divisible by 5."<<endl;
    //     cout<<n/5;
    // }else{
    //     cout<<"Not Divisible by 5.";
    // }

    // if (n>0){
    //     cout<<"Absolute value of "<<n<<" is : "<<n;
    // }else{
    //     cout<<"Absolute value of "<<n<<" is : "<<-n;
    // }

    if (n<0){
        n=-n;
    }
    cout<<"Absolute value is : "<<n;
}