//
// Created by Aravinth on 19/12/23.
//


#include <iostream>
using namespace std;
void hanoi(int n, char A, char B, char C)
{
    if( n==1){
        cout<<"Move 1 from"<<A<<"to"<<C;

    }
    hanoi(n-1,A,C,B);

    cout<<"Move"<<n<<"from"<<A<<"to"<<C;
    hanoi(n-1,B,A,C);

    return;



}

int main()
{
    hanoi(3,'A','C','B');
    return 0;
}