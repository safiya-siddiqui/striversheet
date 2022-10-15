#include <iostream>
using namespace std;

int counting(int n)
{
    if (n == 0)
        return 1;

    counting(n - 1);
    cout << n << endl;
}
int main()
{
    int n;
    cout << "enter the number";
    cin >> n;
    counting(n);

    return 0;
}