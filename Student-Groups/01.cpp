// 01.cpp : Defines the entry point for the console application.
//

/*											
	-������ ����� � �� ������ �����, ����������� �������� �� ��������� ������ �����,
������� ����� ��������� ���� � ������� ����� � ���������� ��� ���������� � ���� ��������� ������

   	-����� �� ������� � ��������� � ���� ��������� ������ �����, �������������� ��������� ���� �����,
������� �������, �������� ������������� � �������.
*/

//													�������� ���������

#include "stdafx.h"
#include "stdafx.h"

#include "Hodor.h"


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");
	char* FileName1 = "F:\\FILES\\f.txt";
	char* FileName2 = "F:\\FILES\\g.txt";
	int Kstr = 0; // ���������� ����� � �����
	file str;
	file* Mstr = NULL; // ������ ����� �����
	student* strustro = NULL;  // ��������� ������ ������ �����
	
	
	char gr1[]="\0";
	char gr2[]="\0";
	char gr3[]="\0";
	int k=1;
	while (k!= 5) 
	{
      system("cls");
      printf("����:\n");
	  printf("1 - ������� ����\n");
	  printf("2 - ������ �����\n");
	  printf("3 - ����� �� �������\n");
	  printf("4 - �����\n");
	  printf("������� ����� ������\n");
	  scanf("%d", &k);
      switch (k) {

	    case 1:
		{
		  system("cls");
		  Kstr = open(FileName1, strustro, Mstr);
		  printf("%d", Kstr);
		}
		break;

		case 2:
		 {if (Kstr!=0)
		  {info(strustro, Kstr);
		  getch();
		  }
		 }
		break;
		
		case 3:
		{
          system("cls");
		  strcpy(str, "");
		  printf("������� ������� �������\n");
		  gets(str);
		  gets(str);
		  search(str, strustro, Mstr, Kstr);
		  getch();
		}
		break;
		
		case 4: k = 5;
		break;

		default:
		{
		  system("cls");
		  printf("��������� ���� 1 - 4");
		  Sleep(2000);
		}
	  }
	} 
	
	delete [] strustro;
	delete [] Mstr;
	return 0;
}