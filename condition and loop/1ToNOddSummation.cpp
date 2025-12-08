#include <iostream>
using namespace std;

int main()
{

    int sum = 0;
    int n;
    int i =1;

    cout << "Enter the number ";
    cin >> n;

    // for (int i = 1; i <= n; i+=2)
    // {

    //     sum += i;
    // }

    while ( i<=n)
    {
        /* code */
        if(i%2==0){
            sum+=i;
        }
        i++;
        
    }
    cout << "The Summation is: " << sum;
    


    return 0;
}
