//
// Created by Aravinth on 22/12/23.
//


#include <iostream>
using namespace std;
bool fun(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            return false;
        }
        return true;
    }
}

int main()
{
    int arr[]={1,1,1,1};
    int n=sizeof(arr)/ sizeof (arr[2]);

    cout<<n<<endl;

    cout<< fun(arr,n);

}