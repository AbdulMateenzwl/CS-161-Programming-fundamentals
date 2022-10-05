#include <iostream>
using namespace std;
void dis(int *x)
{
    *x = *x + 1;
}
main()
{
    int x = 10;
    int *p;
    p = &x;
    dis(p);
    cout << x << "        " << p;
}