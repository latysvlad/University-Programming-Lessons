// Списёк.cpp: определяет точку входа для консольного приложения.
//




/*										ВАРИАНТ №5
					-Построить список
					-Вывести список на экран
					-Уничтожить список
					-Удалить последний узел списка
					-Добавить узел к "голове списка"
			Type A=record		{Автомобиль}
				M:string[20];	{ФИО владельца}
				N:string[10];	{Марка}
				W:string[14];	{Номер}
*/

#include "stdafx.h"
#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <time.h>
#include <locale.h>
using namespace std;

struct A
{ char M[20];		// ФИО владельца
  char N[10];		// Марка
  char W[14];		// Номер
  struct A* adr;
};
typedef struct A spisok;
spisok* first = NULL;
spisok* last = NULL;

//Вывод списка на экран//
void print_list() 
{   setlocale(LC_ALL, "Russian");
    int i=0;
	spisok* current = first;
	cout<< "Элементы списка:\n\n";
	printf ("Номер(Пор)|          ФИО          |     Марка     |       Номер      |\n");
	printf ("----------------------------------------------------------------------\n");
	if (!current) cout<<"Список пустой!\n";
	while (current)
	{
		printf ("%5d     |%20s   | %10s    |%14s    |\n",i+1,current->M, current->N, current->W);
		current = current->adr;
		i++;
	}
	_getch();
}  //Вывод списка//

//Добавление элемента списка в начало
void add_element() 
{   setlocale(LC_ALL, "Russian");
	char FIO[20];
	char mark[10];
	char num[14];
	printf ("Введите данные нового элемента списка\n");
	printf ("ФИО: ");
	gets (FIO);
	gets (FIO);
	printf ("Марка: ");
	gets (mark);
	
	printf ("Номер: ");
	gets (num);
	
	spisok * current = new spisok;
	strcpy(current->M,FIO);
	strcpy(current->N,mark);
	strcpy(current->W,num);
	current->adr = NULL;
	current->adr=first;
	first=current;

	system("cls");
}

//Создание списка
int make_list()
{	setlocale(LC_ALL, "Russian");
	int n;
	int i=0;
	char FIO[20];
	char mark[10];
	char num[14];
	cout << "Введите количество элементов в списке: ";
	cin >> n;
	printf ("Введите данные об автомобиле (%d):\n",i+1);
		
	printf ("ФИО: ");
	gets (FIO);
	gets (FIO);
	printf ("Марка: ");
	gets (mark);
	
	printf ("Номер: ");
	gets (num);
	
	spisok * current = new spisok;
	strcpy(current->M,FIO);
	strcpy(current->N,mark);
	strcpy(current->W,num);
	current->adr = NULL;
	if(!first)
		first = current;
	else last->adr=current;
	last=current;
	i++;		//i=1;

	for (i=1; i<n; i++)
	{
		printf ("Введите данные об автомобиле (%d):\n",i+1);
		
	printf ("ФИО: ");
	gets (FIO);
	
	printf ("Марка: ");
	gets (mark);
	
	printf ("Номер: ");
	gets (num);
	
	spisok * current = new spisok;
	strcpy(current->M,FIO);
	strcpy(current->N,mark);
	strcpy(current->W,num);
	current->adr = NULL;
	if(!first)
		first = current;
	else last->adr=current;
	last=current;
	}
	return n;
}

//Удаления списка
void del_list()
{
	while (first)
	{
		spisok* current = first;
		first = current->adr;
		delete current;
	}
}
//Удаление последнего элемента
void del_last()
{	int i=0;
	spisok* constant = first;
	spisok* current = first;
	if(first->adr==NULL)
		first=NULL;
	else
		while(i==0)
		{
			current=first->adr;
		
			if(current->adr!=NULL)
				first=first->adr;
			else
				{
				first->adr=NULL;
				i=1;
				first=constant;
				}
		}
}


//Главная функция
void main()
{   setlocale(LC_ALL, "Russian");
	int k0 = 1;
	while (k0 != 7)
	{
	system("cls");
	 printf("Меню программы:\n");
	 printf("1. Построить список.\n");
	 printf("2. Вывести список на экран.\n");
	 printf("3. Уничтожить список.\n");
	 printf("4. Добавить элемент в начало списка.\n");
	 printf("5. Удалить последний узел.\n");
	 printf("6. Закрыть программу.\n");
	 printf ("\n");
	 printf ("Выберите пункт меню: ");
	 scanf_s("%d", &k0);
	 switch (k0)
	 {
	 case 1:
		 {
			 system("cls");
			 make_list();
		 }
		 break;
	 case 2:
		 {
			 system("cls");
			 print_list();
		 }
		 break;
	 case 3:
		 {
			 system("cls");
			 del_list();
			 printf ("Список уничтожен");
			 _getch();
		 }
		 break;
	 case 4:
		 {
			 system("cls");
			 add_element();
			 printf ("Элемент добавлен");
		 }
		 break;
	 case 5:
		 {
			 system("cls");
			 del_last();
			 printf ("Последний элемент удалён");
			 _getch();
		 }
		 break;
	 case 6: k0 = 7;
		 break;

	 default:
		 {
             system("cls");
			 printf("Повторите ввод пунка меню (1-6).");
			 _getch();
			 k0 = 1;
		 }
	 }
}
}