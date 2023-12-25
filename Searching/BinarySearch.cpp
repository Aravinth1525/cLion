//
// Created by Aravinth on 25/12/23.
//

#include <iostream>
using namespace std;

int bin(int arr[],int target,int size)
{
    int low=0,high=size-1;

    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            high=mid-1;
        }
        else {
            low=mid+1;
        }

    }
    return -1;
}

int main(){

    int arr[]={1,2,3,4,5};

    int n= sizeof (arr)/ sizeof (arr[2]);
    int t;
    cout<<"\nEnter Target : ";
    cin>>t;
    cout<<bin(arr,t,n);


}
