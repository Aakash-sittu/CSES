#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, sum = 0, var, res;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }
    var = (n * (n + 1)) / 2;
    for (int i = 0; i < n - 1; i++)
    {
        sum += arr[i];
    }
    res = var - sum;
    cout << res << endl;
    return 0;
}
