#include <iostream>
#include <time.h>
#include <algorithm>
#include <cctype>
using namespace std;

int main ()
{

    int a, size;
    
    cout << "Size Of Array: ";
    cin >> a;
    
    int N[a];
    
    cout << "N elements: ";
    for (int i = 0; i < a; ++i) {
        cin >> N[i];
    }
    int min = N[0], max = N[a-1];
    
    N[0] = max;
    N[a-1] = min;
    
    for (int n = 0; n < a; ++n) {
        cout << N[n] << " ";
    }

}
