#include <iostream>
using namespace std;

int counting(int n)
{
    if (n == 1)
        return 1;
    cout << n << endl;
    return counting(n - 1);
}
int main()
{
    int n;
    cout << "enter the number";
    cin >> n;
    int ans = counting(n);
    cout << ans;
    return 0;
}