// 01.cpp : Defines the entry point for the console application.
//

/*											
	-ÑÏÈÑÎÊ ÃÐÓÏÏ – ïî äàííûì ôàéëà, ñîäåðæàùåãî ñâåäåíèÿ ïî ñòóäåíòàì ðàçíûõ ãðóïï,
ñîçäàòü íîâûé òåêñòîâûé ôàéë ñ èìåíàìè ãðóïï è îòîáðàçèòü åãî ñîäåðæèìîå â îêíå ðåäàêòîðà òåêñòà

   	-ÂÛÁÎÐ ÏÎ ÔÀÌÈËÈÈ – çàãðóçèòü â îêíî ðåäàêòîðà ñòðîêè ôàéëà, ïðåäñòàâëÿþùèå ñòóäåíòîâ âñåõ ãðóïï,
èìåþùèõ ôàìèëèþ, çàäàííóþ ïîëüçîâàòåëåì â äèàëîãå.
*/

//													ÎÑÍÎÂÍÀß ÏÐÎÃÐÀÌÌÀ

#include "stdafx.h"
#include "stdafx.h"

#include "Hodor.h"


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");
	char* FileName1 = "F:\\FILES\\f.txt";
	char* FileName2 = "F:\\FILES\\g.txt";
	int Kstr = 0; // êîëè÷åñòâî ñòðîê â ôàéëå
	file str;
	file* Mstr = NULL; // ìàññèâ ñòðîê ôàéëà
	student* strustro = NULL;  // ñòðóêòóðà êàæäîé ñòðîêè ôàéëà
	
	
	char gr1[]="\0";
	char gr2[]="\0";
	char gr3[]="\0";
	int k=1;
	while (k!= 5) 
	{
      system("cls");
      printf("Ìåíþ:\n");
	  printf("1 - Îòêðûòü ôàéë\n");
	  printf("2 - Ñïèñîê ãðóïï\n");
	  printf("3 - Ïîèñê ïî ôàìèëèè\n");
	  printf("4 - Âûõîä\n");
	  printf("Ââåäèòå íîìåð ïóíêòà\n");
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
		  printf("Ââåäèòå èñêîìóþ ôàìèëèþ\n");
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
		  printf("Ïîâòîðèòå ââîä 1 - 4");
		  Sleep(2000);
		}
	  }
	} 
	
	delete [] strustro;
	delete [] Mstr;
	return 0;
}
