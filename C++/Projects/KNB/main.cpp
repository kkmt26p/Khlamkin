/// ���� ������-�������-������
/// �������� ��� ��������� ������� ������� � �������� ����
/// 17.05.2015 last update
/// game dev forever

#include <iostream>
#include <windows.h>
#include <locale.h>
#include <cstdlib>
#include <ctime>
#include <stdio.h>
#include <dos.h>
#include "gotoxy.h"

using namespace std;

int s=0;///���������� ��� ������ ������ ����������
int s1=0; ///���������� ��� ������ ������ ������
int player,bot,nich; /// ���������� ��� ����� ����������

void ShowMenu(int iItem)          ///���� ������ � ����� ����������
{
    system("cls");
    GotoXY(22,0);
    cout<<"�����     ���������      �����";
    GotoXY(24,1);
    cout << player<<"           "<<bot<<"            "<<nich;
    GotoXY(32,3);
    printf("%s1 - ������\n",iItem == 1 ? ">" : " ");
    GotoXY(32,4);
    printf("%s2 - ������\n",iItem == 2 ? ">" : " ");
    GotoXY(32,5);
    printf("%s3 - �������\n",iItem == 3 ? ">" : " ");
    GotoXY(32,6);
    printf("%s4 - �����\n",iItem == 4 ? ">" : " ");
}

void menu()
{
    int iItem = 1;
    int nLast = 4;
    ShowMenu(iItem);
    bool menu = true;
    while(menu == true)
    {
        if(GetAsyncKeyState(VK_UP))
        {
            keybd_event(VK_UP, 0, KEYEVENTF_KEYUP, 0);
            if(0 < iItem - 1)
                iItem = iItem - 1;
            else
                iItem = nLast;
            ShowMenu(iItem);
        }
        if(GetAsyncKeyState(VK_DOWN))
        {
            keybd_event(VK_DOWN, 0, KEYEVENTF_KEYUP, 0);
            if(iItem < nLast)
                iItem = iItem + 1;
            else
                iItem = 1;
            ShowMenu(iItem);
        }
        if(GetAsyncKeyState(VK_RETURN))
        {
            keybd_event(VK_DOWN, 0, KEYEVENTF_KEYUP, 0);
            switch(iItem)
            {
            case 1:
                s1=1;
                menu = false;
                break;
            case 2:
                s1=2;
                menu = false;
                break;
            case 3:
                s1=3;
                menu = false;
                break;
            case 4 :
                exit(1);
            }
        }
    }
}

int main()
{
int h=1;
setlocale(0,"Rus");
while(h==1)
    {
        menu();
        system("cls");
        srand(time(0));
        s=1+rand()%3;///�����������, ���������� �� ����� ����������
        ///���������� ������
        switch (s1)
        {
            case 1:
            cout<<"�� ������� ������,  ";
            break;
            case 2:
            cout<<"�� ������� ������,  ";
            break;
            case 3:
            cout<<"�� ������� �������, ";
            break;
        }
        switch (s)
        {
            case 1:
            cout<<"�������� ������ ������"<<endl;
            break;
            case 2:
            cout<<"��������� ������ ������"<<endl;
            break;
            case 3:
            cout<<"��������� ������ �������"<<endl;
            break;
        }
        if (s1 == s)
            {
                cout<<"�����"<<endl;
                nich+=1;
            }
        else
            if ((((s == 1) && (s1 == 2))) || (((s == 2) && (s1 == 3))) || (((s == 2) && (s1 == 3))) || ((s == 3) && (s1 == 1))) ///������� ��������
                {
                    player+=1;
                    cout<<"�� ��������"<<endl;
                }
            else
                {
                    bot+=1;
                    cout<<"�� ���������"<<endl;
                }
        system("pause");
        if(GetAsyncKeyState(VK_RETURN))
        Sleep(100);
        system("cls");
    }
   return 0;
}
