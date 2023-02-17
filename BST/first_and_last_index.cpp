#include <iostream>
#include <array>
using namespace std;

array<int, 2> BST(int arr[], int size, int key)
{

    array<int, 2> f_array;
    int start = 0;
    int end = size - 1;
    int mid = start + ((end - start) / 2);
    int lastindex = 0;
    int firstindex = 0;
    int lv = 5;
    while (start <= end)
    {

        if (key == arr[mid])
        {
            firstindex = mid;
            lastindex = mid;

            bool isTrue_1 = true;
            bool isTrue_2 = true;
            while (isTrue_1 == true)
            {
                if (key == arr[firstindex - 1])
                {
                    firstindex = firstindex - 1;
                }
                else
                {
                    isTrue_1 = false;
                    break;
                }
            }
            while (isTrue_2 == true)
            {
                if (key == arr[lastindex + 1])
                {
                    lastindex = lastindex + 1;
                }
                else
                {
                    isTrue_2 = false;
                    break;
                }
            }
            f_array[0] = firstindex;
            f_array[1] = lastindex;
            return f_array;
        }

        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + ((end - start) / 2);
    }

    return f_array;
};

int main()
{

    array<int, 2> myarr;
    int data[] = {1, 2, 2, 2, 5, 6, 7, 8};
    myarr = BST(data, 8, 8);
    cout << "Index are =>  " << myarr[0] << " " << myarr[1] << endl;
    return 0;
}