/*If15. Даны три числа. Найти сумму двух наибольших из них.*/
#include <iostream>
using namespace std;
int main ()
{
    int a,b,c;
    cin >> a;
    cin >> b;
    cin >> c;
        if (a>b && b<c)
    {
        cout << a+c << endl;
    }
    else if (a>b && b>c)
    {
        cout << a+b << endl;
    }
    else if (a<b && a>c)
    {
        cout << b+a << endl;
    }
    else if (a<b && c>b)
    {
        cout << b+c << endl;
    }
      else if (a<c && b<a)
    {
        cout << c+b << endl;
    }
          else if (c<b && c>a)
    {
        cout << b+c << endl;
    }
    return 0;

}
