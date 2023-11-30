// �����.cpp: ���������� ����� ����� ��� ����������� ����������.
//




/*										������� �5
					-��������� ������
					-������� ������ �� �����
					-���������� ������
					-������� ��������� ���� ������
					-�������� ���� � "������ ������"
			Type A=record		{����������}
				M:string[20];	{��� ���������}
				N:string[10];	{�����}
				W:string[14];	{�����}
*/

#include "stdafx.h"
#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <time.h>
#include <locale.h>
using namespace std;

struct A
{ char M[20];		// ��� ���������
  char N[10];		// �����
  char W[14];		// �����
  struct A* adr;
};
typedef struct A spisok;
spisok* first = NULL;
spisok* last = NULL;

//����� ������ �� �����//
void print_list() 
{   setlocale(LC_ALL, "Russian");
    int i=0;
	spisok* current = first;
	cout<< "�������� ������:\n\n";
	printf ("�����(���)|          ���          |     �����     |       �����      |\n");
	printf ("----------------------------------------------------------------------\n");
	if (!current) cout<<"������ ������!\n";
	while (current)
	{
		printf ("%5d     |%20s   | %10s    |%14s    |\n",i+1,current->M, current->N, current->W);
		current = current->adr;
		i++;
	}
	_getch();
}  //����� ������//

//���������� �������� ������ � ������
void add_element() 
{   setlocale(LC_ALL, "Russian");
	char FIO[20];
	char mark[10];
	char num[14];
	printf ("������� ������ ������ �������� ������\n");
	printf ("���: ");
	gets (FIO);
	gets (FIO);
	printf ("�����: ");
	gets (mark);
	
	printf ("�����: ");
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

//�������� ������
int make_list()
{	setlocale(LC_ALL, "Russian");
	int n;
	int i=0;
	char FIO[20];
	char mark[10];
	char num[14];
	cout << "������� ���������� ��������� � ������: ";
	cin >> n;
	printf ("������� ������ �� ���������� (%d):\n",i+1);
		
	printf ("���: ");
	gets (FIO);
	gets (FIO);
	printf ("�����: ");
	gets (mark);
	
	printf ("�����: ");
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
		printf ("������� ������ �� ���������� (%d):\n",i+1);
		
	printf ("���: ");
	gets (FIO);
	
	printf ("�����: ");
	gets (mark);
	
	printf ("�����: ");
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

//�������� ������
void del_list()
{
	while (first)
	{
		spisok* current = first;
		first = current->adr;
		delete current;
	}
}
//�������� ���������� ��������
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


//������� �������
void main()
{   setlocale(LC_ALL, "Russian");
	int k0 = 1;
	while (k0 != 7)
	{
	system("cls");
	 printf("���� ���������:\n");
	 printf("1. ��������� ������.\n");
	 printf("2. ������� ������ �� �����.\n");
	 printf("3. ���������� ������.\n");
	 printf("4. �������� ������� � ������ ������.\n");
	 printf("5. ������� ��������� ����.\n");
	 printf("6. ������� ���������.\n");
	 printf ("\n");
	 printf ("�������� ����� ����: ");
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
			 printf ("������ ���������");
			 _getch();
		 }
		 break;
	 case 4:
		 {
			 system("cls");
			 add_element();
			 printf ("������� ��������");
		 }
		 break;
	 case 5:
		 {
			 system("cls");
			 del_last();
			 printf ("��������� ������� �����");
			 _getch();
		 }
		 break;
	 case 6: k0 = 7;
		 break;

	 default:
		 {
             system("cls");
			 printf("��������� ���� ����� ���� (1-6).");
			 _getch();
			 k0 = 1;
		 }
	 }
}
}