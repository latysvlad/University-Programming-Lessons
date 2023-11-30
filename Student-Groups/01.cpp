// 01.cpp : Defines the entry point for the console application.
//

/*											
	-СПИСОК ГРУПП – по данным файла, содержащего сведения по студентам разных групп,
создать новый текстовый файл с именами групп и отобразить его содержимое в окне редактора текста

   	-ВЫБОР ПО ФАМИЛИИ – загрузить в окно редактора строки файла, представляющие студентов всех групп,
имеющих фамилию, заданную пользователем в диалоге.
*/

//													ОСНОВНАЯ ПРОГРАММА

#include "stdafx.h"
#include "stdafx.h"

#include "Hodor.h"


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");
	char* FileName1 = "F:\\FILES\\f.txt";
	char* FileName2 = "F:\\FILES\\g.txt";
	int Kstr = 0; // количество строк в файле
	file str;
	file* Mstr = NULL; // массив строк файла
	student* strustro = NULL;  // структура каждой строки файла
	
	
	char gr1[]="\0";
	char gr2[]="\0";
	char gr3[]="\0";
	int k=1;
	while (k!= 5) 
	{
      system("cls");
      printf("Меню:\n");
	  printf("1 - Открыть файл\n");
	  printf("2 - Список групп\n");
	  printf("3 - Поиск по фамилии\n");
	  printf("4 - Выход\n");
	  printf("Введите номер пункта\n");
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
		  printf("Введите искомую фамилию\n");
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
		  printf("Повторите ввод 1 - 4");
		  Sleep(2000);
		}
	  }
	} 
	
	delete [] strustro;
	delete [] Mstr;
	return 0;
}
