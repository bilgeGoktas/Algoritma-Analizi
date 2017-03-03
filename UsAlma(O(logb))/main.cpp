/* Karmasklk O(logn) olan üs alma kodu*/
#include <iostream>

using namespace std;

int pow(int x, int n)
{
    if(n==0)
        return 1;
    if(n==1)
        return x;
    if(n%2==0)
        return pow(x*x, int(n/2));
    else
        return pow(x*x, int(n/2))*x;
}

int main()
{
    int sonuc = pow(3,40);
    cout << sonuc;
    return 0;
}
