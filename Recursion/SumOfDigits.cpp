//
// Created by Aravinth on 20/12/23.
//

#include <iostream>

using namespace std;

int fun(int n){
    if(n<10){
        return n;
    }
    return (fun(n/10) + (n%10));


}

int main(){

    int a;
    cout<<"\nEnter a Number : ";
    cin>>a;
    cout<<"\nSum of Digits is : "<<(fun(a))<<endl;
    return 0;
}