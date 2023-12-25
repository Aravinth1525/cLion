//
// Created by Aravinth on 20/12/23.
//

#include <iostream>
using namespace std;

int fun(int arr[],int n){

    int max=0;
    for(int i=0;i<n;i++)
    {

        if(arr[i]>max){
            max=arr[i];
         }
    }

    return max;
}

int main(){
    int arr[4]={10,5,20,8};

    cout<<fun(arr,4);
    return 0;
}