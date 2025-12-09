#include <iostream>
using namespace std;

int main()
{

    int n;
    bool isPrime = true;

    cout << "Enter the number: ";
    cin >> n;

    for (int i = 1; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }

    }
    if(isPrime==true){
        cout << "Prime number";
    }else{
        cout<< "non Prime";
    }



    return 0;
}
