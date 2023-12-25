//
// Created by Aravinth on 25/12/23.
//
#include <iostream>
using namespace std;

int bin(int arr[],int low,int high,int x){

    if(low>high){
        return -1;
    }


    int mid=(low+high)/2;


    if(arr[mid]==x){
        return mid;

    }

    else if(arr[mid]>x){
        return bin(arr,low,mid-1,x);


    }
    else{
        return bin(arr,mid+1,high,x);
    }
}

int main(){

    int arr[]={1,2,3,4,5};

    int n= sizeof (arr)/ sizeof (arr[2]);
    int t;
    cout<<"\nEnter Target : ";
    cin>>t;
    cout<<bin(arr,0,n-1,t);

}