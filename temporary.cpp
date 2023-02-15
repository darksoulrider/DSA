#include <iostream>
#include <map>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 1, 2, 3, 10, 11, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    map<int, int> frequency;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        frequency[arr[i]]++;
        count++;
        cout << count << endl;
    }

    cout << "Unique elements in the array are: ";
    for (int i = 0; i < n; i++)
    {
        if (frequency[arr[i]] == 1)
        {
            cout << arr[i] << " ";
        }
        count++;
        cout << count << endl;
    }
    return 0;
}
