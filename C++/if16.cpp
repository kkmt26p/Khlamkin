/*���� ��� ���������� ������������� ����: A, B, C.
���� �� �������� ����������� �� �����������, �� ������� ��;
� ��������� ������ �������� �������� ������ ���������� �� ���������������.
������� ����� �������� ���������� A, B, C.*/
#include <iostream>
using namespace std;
int main ()
{
    int a,b,c;
    cin >> a;
    cin >> b;
    cin >> c;
    if (a<b && b<c)
    {
        a=a*2;
        b=b*2;
        c=c*2;
    }
    else
        {
            a=-1*a;
            b=-1*b;
            c=-1*c;
        }
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    return 0;
}
