#include <iostream>

/*
partern =>
A B C D
E F G H
I J K L
M N O P
*/

using namespace std;
int main()
{
    int A = 65;
    int row;
    cout << "Enter row: ";
    cin >> row;

    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < row; j++)
        {
            cout << (char)A << " ";
            A++;
        }
        cout << endl;
    }
    cout << "-------------------" << endl;
    for (size_t i = 0; i < row; i++)
    {
        int backup = A;
        for (size_t j = 0; j < row; j++)
        {
            cout << (char)A << " ";
            A++;
        }
        A = backup + 1;
        backup++;
        cout << endl;
    }

    return 0;
}