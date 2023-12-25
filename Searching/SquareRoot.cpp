//
// Created by Aravinth on 25/12/23.
//

#include <iostream>

using namespace std;

int fun(int x){


    int low=1,high=x,ans=-1;

    while(low<=high){

        int mid=(low+high)/2;
        int sq=mid*mid;
        if(sq==x){
            return mid;
        }

        else if(sq>x){
            high=mid-1;
        }
        else{
            low=mid+1;
            ans=mid;

        }
    }

    return ans;

}

int main()

{

    cout<<fun(25);


}