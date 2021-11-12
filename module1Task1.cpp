#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main (void)
{
    
    int N, K;
    
    do {
    cout<<"N: ";
    cin>>N;
    } while (N < 3);

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
