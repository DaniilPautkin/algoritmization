#include <time.h>
#include <iostream>
using namespace std;

int main (void)
{
    
    int N, K;

    cout << ("Floors: ");
    cin >> N;
    cout << ("1st Floor's Number Of People: ");
    cin >> K;

    int array[N], sum = 0;

    for (int i = 0; i < N; i++)
    {
        array[i] = K + (i * 4);
        sum += array[i];
    }
    cout << "\n" << "Number Of People On The First Floor: " << sum-K;
    
}
