//
// Created by Aravinth on 23/12/23.
//


#include <iostream>
using namespace std;

void fun(int arr[],int n){
    int low=0,last=n-1;

    while(low<last){
        int temp=arr[low];
        arr[low]=arr[last];
        arr[last]=temp;
        low++;
        last--;


    }


}

int main()
{

    int arr[]={3,2,1};
    int n=sizeof (arr)/sizeof arr[1];
    fun(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }

}