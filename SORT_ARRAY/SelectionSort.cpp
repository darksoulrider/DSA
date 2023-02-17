
/*
best case complexity => O(n^2)
worst case complexity => O(n^2)

- use case for small size of arrays
*/

#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &arr, int len)
{
    for (size_t i = 0; i < len - 1; i++)
    {
        for (size_t j = i + 1; j < len; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }

    for (size_t i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    vector<int> data = {1, 4, 6, 2, 7, 3};
    selectionSort(data, 6);
    return 0;
}