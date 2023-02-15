#include <iostream>
using namespace std;
int main()
{

    int data[] = {1, 1, 3, 3, 5, 5, 7, 9, 9, 1};
    int ans = 0;
    for (int i = 0; i < 10; i++)
    {
        ans = ans ^ data[i];
    }
    // for (size_t i = 0; i < 10; i++)
    // {
    //     ans = ans ^ i;
    // }
    cout << ans << endl;
    return 0;
}