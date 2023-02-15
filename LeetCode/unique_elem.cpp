#include <iostream>
using namespace std;

// xoring seams bad idea cuz =>int data[] = {1, 1, 3, 3, 5, 5, 7, 9, 9, 1};
// with this it give 6 cuz 7^1 at last point
int unique_ele_2(int arr[], int len)
{
    int i, j;
    for (i = 0; i < len; i++)
    {
        for (j = 0; j < len; j++)
            if (i != j && arr[i] == arr[j])
                break;
        if (j == len)
            return arr[i];
    }
    return -1;
}

int unique_ele(int arr[], int len)
{
    int check = 1;
    int unique = arr[0];
    int stop = 0;
    int my = 0;
    for (size_t i = 0; i < len; i++)
    {
        my++;
        int count = 0;
        for (size_t j = 0; j < len; j++)
        {
            my++;
            if (arr[i] == arr[j])
            {

                count++;
            }
        }
        if (stop == 0)
        {
            check = count;
            stop++;
        }

        if (count <= check)
        {
            check = count;
            unique = arr[i];
        }
    }
    cout << "data " << my << endl;
    return unique;
}

int main()
{
    int arr[] = {1, 1, 1, 2, 2, 33, 33, 33, 4, 4, 500, 55, 66, 55, 66};
    int myele = unique_ele(arr, 15);
    int alt = unique_ele_2(arr, 15);

    cout << myele << endl;
    cout << alt << endl;
    return 0;
}