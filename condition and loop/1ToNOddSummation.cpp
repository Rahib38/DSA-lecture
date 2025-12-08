#include <iostream>
using namespace std;

int main()
{

    int sum = 0;
    int n;

    cout << "Enter the number ";
    cin >> n;

    for (int i = 1; i <= n; i+=2)
    {

        sum += i;
    }
    cout << "The Summation is: " << sum;

    return 0;
}
