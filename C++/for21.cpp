/*���� ����� ����� N (> 0). ��������� ���� ����, ����� �����
1 + 1/(1!) + 1/(2!) + 1/(3!) + � + 1/(N!)
(��������� N! � N���������� � ���������� ������������ ���� ����� ����� �� 1 �� N:    N! = 1�2���N). ���������� ����� �������� ������������ ��������� ��������� e = exp(1).*/


#include <iostream>
using namespace std;
int main ()
{
    int i,n;
    double f=1;
    double l=1;
    cin >> n;
    for (i=1; i<=n; ++i)
        {

        f=f*i;
        l=l+(1/f);
        }
    cout << l;
    return 0;
}

