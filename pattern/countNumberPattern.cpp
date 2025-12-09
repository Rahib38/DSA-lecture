#include <iostream>
using namespace std;

int main()
{

    int n = 4;
    int num = 1;

    for (int i = 0; i < n; i++)
    { // outer
        for (int j = 0; j < n; j++)
        { // inner
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}
