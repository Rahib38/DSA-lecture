#include <iostream>
using namespace std;

int main()
{

    int count = 1;
    int n;

    cout << "Enter the number: ";
    cin >> n;

    while (count <= n)
    {
        cout << " " << count;
        count++;
        cout << endl;
    }
    return 0;
}
