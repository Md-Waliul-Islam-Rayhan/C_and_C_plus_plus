#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if (n > 10 and n <= 25)
        {
            cout << "10"
                 << " " << n - 10 << endl;
        }

        else
        {
            cout << "0"
                 << " " << n << endl;
        }
    }
}