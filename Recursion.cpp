//
// Created by Aravinth on 18/12/23.
//

#include <iostream>
using namespace std;


void fun(int n)
{
    if(n==0){
        return;
    }
    fun(n-1);
    cout<<n<<" ";


}

bool pal(string &str,int start,int end){



    if(start>=end){
        return true;
    }

    return (str[start]==str[end]) && pal(str,start+1,end-1);
}

int fact(int n){
    if(n==0){
        return 1;

    }
    else {
        return (n*fact(n - 1));
    }
}

void  binary(int n){
    if(n==0){
        return;
    }
    binary(n/2);
    cout<<n%2;
}

int main()
{
    string s="geeks";
    cout<<pal(s,0,s.size()-1);
    return 0;

}
