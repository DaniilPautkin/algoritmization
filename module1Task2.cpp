#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

int A,B,countN=0;

int main()
{
   do {
        cin>>A>>B;
   } while (A>B || A==B);

   for(int i=A; i<B+1; i++) {
       cout<<i<<" ";
       countN++;
   }
   
   cout<<"\n";

   cout<<endl;
   cout<<"N: "<<countN<<endl;

   return 0;
}
