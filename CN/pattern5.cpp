#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int i = 1;
    while (i <= N)
    {
        int j = 1;
        while (j <= N)
        {
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}