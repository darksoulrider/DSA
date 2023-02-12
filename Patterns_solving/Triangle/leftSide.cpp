/*
pattern =>

*
* *
* * *
* * * *


*/

#include <iostream>
using namespace std;
int main()
{
    int row;
    cout << "Enter row: ";
    cin >> row;

    // 1st method..
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    // 2nd method ...
    cout << "---------------------------" << endl;
    int num = 1;
    while (num <= row)
    {
        int col = 1;
        while (col <= num)
        {
            cout << "* ";
            col++;
        }
        num++;
        cout << endl;
    }
    return 0;
}