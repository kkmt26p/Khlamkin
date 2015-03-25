/*If14. ƒаны три числа. ¬ывести вначале наименьшее, а затем наибольшее из данных чисел.*/
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
        cout << b << endl;
        cout << a;
    }
    else if (a>b && b>c)
    {
        cout << c << endl;
        cout << a;
    }
    else if (a<b && a>c)
    {
        cout << c << endl;
        cout << b;
    }
    else if (a<b && c>b)
    {
        cout << a << endl;
        cout << c;
    }
      else if (a<c && b<a)
    {
        cout << b << endl;
        cout << c;
    }
          else if (c<b && c>a)
    {
        cout << a << endl;
        cout << b;
    }
    return 0;

}
