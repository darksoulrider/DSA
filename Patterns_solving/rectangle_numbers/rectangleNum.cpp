
/*
question -> print 1234 in rectangle shape

Answer =>
    1 2 3 4
    1 2 3 4
    1 2 3 4
    1 2 3 4
*/

#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (size_t j = 1; j <= 4; j++)
        {
            cout << j << " ";
            // cout << 4 - j + 1 << " ";
            // abvoe  line prints in reverse order
        }
        cout << endl;
    }
    return 0;
}