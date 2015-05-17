/// Игра камень-ножницы-бумага
/// Работали над прогаммой Алексей Хламкин и Шапранов Иван
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

int s=0;///Переменная для записи выбора компьютера
int s1=0; ///Переменная для записи выбора игрока
int player,bot,nich; /// переменные для учета статистики

void ShowMenu(int iItem)          ///Меню выбора и вывод статистика
{
    system("cls");
    GotoXY(22,0);
    cout<<"Игрок     Противник      Ничья";
    GotoXY(24,1);
    cout << player<<"           "<<bot<<"            "<<nich;
    GotoXY(32,3);
    printf("%s1 - Камень\n",iItem == 1 ? ">" : " ");
    GotoXY(32,4);
    printf("%s2 - Бумага\n",iItem == 2 ? ">" : " ");
    GotoXY(32,5);
    printf("%s3 - Ножницы\n",iItem == 3 ? ">" : " ");
    GotoXY(32,6);
    printf("%s4 - Выход\n",iItem == 4 ? ">" : " ");
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
        s=1+rand()%3;///Рандомайзер, отвечающий за выбор компьютера
        ///Оформление вывода
        switch (s1)
        {
            case 1:
            cout<<"Вы выбрали камень,  ";
            break;
            case 2:
            cout<<"Вы выбрали бумагу,  ";
            break;
            case 3:
            cout<<"Вы выбрали ножницы, ";
            break;
        }
        switch (s)
        {
            case 1:
            cout<<"Компьтер выбрал камень"<<endl;
            break;
            case 2:
            cout<<"Компьютер выбрал бумагу"<<endl;
            break;
            case 3:
            cout<<"Компьютер выбрал ножницы"<<endl;
            break;
        }
        if (s1 == s)
            {
                cout<<"Ничья"<<endl;
                nich+=1;
            }
        else
            if ((((s == 1) && (s1 == 2))) || (((s == 2) && (s1 == 3))) || (((s == 2) && (s1 == 3))) || ((s == 3) && (s1 == 1))) ///условия выигрыша
                {
                    player+=1;
                    cout<<"Вы выиграли"<<endl;
                }
            else
                {
                    bot+=1;
                    cout<<"Вы проиграли"<<endl;
                }
        system("pause");
        if(GetAsyncKeyState(VK_RETURN))
        Sleep(100);
        system("cls");
    }
   return 0;
}
