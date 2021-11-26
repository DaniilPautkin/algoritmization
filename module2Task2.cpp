#include<iostream>
using namespace std;

int main ()
{
    int n, max, min, maxId, minId;
    
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    max = arr[0];
    
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            maxId = i;
        } else if (min > arr[i])
        {
            min = arr[i];
            minId = i;
        }
    }
    
    arr[minId] = max;
    arr[maxId] = min;
    
    for (int j = 0; j < n; ++j) {
        cout << arr[j] << " ";
    }
    
    return 0;
}
