/*���� ����� ����� N (> 0). ��������� ���� ����, ����� �����
1! + 2! + 3! + � + N!
(��������� N! � N���������� � ���������� ������������ ���� ����� ����� �� 1 �� N:
 N! = 1�2���N). ����� �������� �������������� ������������,
 ��������� ���������� � ������� ������������ ���������� � ������� ��������� ��� ������������ �����.*/

#include <iostream>
using namespace std;
int main ()
{
    int i,n;
    long f=1;
    long l=0;
    cin >> n;
    for (i=1; i<=n; ++i)
        {

        f=f*i;
        l=l+f;
        }
    cout << l;
    return 0;
}
