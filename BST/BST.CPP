/*

    - This binary search Tree
    - we need sorted array for this...
    - take care if start = 2^31-1 and end = 2^31-1
      so, if add them then it can overflow int capacity of storage...
    - to fix that => (start + ((end - start)/2) )
    this is simpy start + end/2 - start/2
    and s - s/2 = s/2 i.e positive
    or we can separately devide first and the add

*/

#include <iostream>
using namespace std;

int BST(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    // int mid = (start + end) / 2;
    // int mid = (start / 2) + (end / 2); // dont ever try this, 7/2 takes 3
    // instead of that use above mentioned foemula

    int mid = (start + ((end - start) / 2));

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        // mid = (start + end) / 2;
        mid = (start / 2) + (end / 2); // safety check
    }
    return -1;
}

int main()
{
    int even[] = {2, 4, 6, 8, 10, 12};
    int odd[] = {1, 3, 5, 7, 9, 11};
    int data[] = {1};
    int index = BST(even, 5, 10);
    int l = BST(data, 1, 1);
    cout << "Index of 10 is => " << index << endl;
    cout << "Index of 10 is => " << l;
    return 0;
}