#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main (void)
{
    
    int N, K;
    cout<<"N: ";
    cin>>N;

    for (int i = 1; i < N; i++)
    {
        
        if (i*i > N)
        {
            cout<<i<<"*"<<i<<"="<<i*i<<"\n";
            cout<<"K: "<<i;
            break;
            
        }
        
    }
    
}