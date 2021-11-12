#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int day;
    
    do {
    cout<<"Enter day of a week: ";
    cin>>day;
    } while (day < 1 || day > 7);
    
    switch(day)
    {
        case 1: cout<<"Monday";
        break;
        
        case 2: cout<<"Tuesday";
        break;
        
        case 3: cout<<"Wednesday";
        break;
        
        case 4: cout<<"Thursday";
        break;
        
        case 5: cout<<"Friday";
        break;
        
        case 6: cout<<"Saturday";
        break;
        
        case 7: cout<<"Sunday";
        break;
        
        default: return 0;
    }
}
