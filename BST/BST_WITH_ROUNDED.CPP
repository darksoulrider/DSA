#include <iostream>
using namespace std;

int BST_SEARCH(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int getPiovte(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        cout << " mid => " << mid << endl;
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int main()
{
    //  need ot look again
    int data[] = {5, 6, 7, 8, 1, 2, 3, 4};
    int key = 8;
    int pivote = getPiovte(data, 8);
    if (key <= pivote)
    {
        int index = BST_SEARCH(data, pivote - 1, 8);
    }
    else
    {
        int index = BST_SEARCH(data, pivote + 1, 8);
    }
}