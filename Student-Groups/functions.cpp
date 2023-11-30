//											ФУНКЦИИ



#include "stdafx.h"
#include "stdafx.h"
#include "Hodor.h"

int open(char* FileName1, student*& strustro, file*& Mstr)						//первая функция
{
   FILE* f;
   file str;
   int Kstr = 0; 
   if ((f = fopen(FileName1,"rt")) == NULL )
			  printf("Файл не удаётся открыть!\n");
			  else
			  { 
				puts("\n");
				Kstr = 0;
				while (!feof(f))
				{
				  Kstr++;
				  fgets(str, 60, f);
				  puts(str);
				}
                fclose(f);
			   }
			getch();
			if((f = fopen(FileName1,"rt")) == NULL )
				   printf("Файл не удаётся открыть!\n");
				else
				{
				  strustro = new student [Kstr];
				  for (int i  = 0; i < Kstr; i++)
				  {
					int N, o1, o2, o3;
					char gr[8], fam[12];
					if (fscanf(f, "%d%s%s%d%d%d", &N, gr, fam, &o1, &o2, &o3) != 6)
					{
					  printf("Ошибка чтения!");
					  break;
					}
					strustro[i].num = N;
					strcpy(strustro[i].group, gr);
					strcpy(strustro[i].surname, fam);
					strustro[i].o1 = o1;
					strustro[i].o2 = o2;
					strustro[i].o3 = o3;
				   }
				  fclose(f);
				 }
           Mstr = new file [Kstr];
		   if ((f = fopen(FileName1, "rt")) == NULL )
			       printf("Файл не удаётся открыть\n");
		      else
			  {
				  for (int i = 0; i < Kstr; i++)
					  fgets(Mstr[i], 60, f);
				  fclose(f);
		      }
		   system ("notepad.exe F:\\FILES\\f.txt");
    return Kstr;
	
}


void info(student* strustro, int Kstr )										//вторая функция
{	FILE*g; char* FileName2 = "F:\\FILES\\g.txt";
	g = fopen(FileName2,"w");
	using namespace std;
	char gr1[]="\0";
	char gr2[]="\0";
	char gr3[]="\0";

  strcpy(gr1,strustro[0].group);

  int z=0;
  for(int i = 1; i < Kstr; i++)
  {
	  if((strustro[i].group!=gr1) && (strustro[i].group!=gr2) && (strustro[i].group!=gr3) && (z==0))
	  {
		strcpy( gr2, strustro[i].group);
		 z=1;
		 i=i+1;
	  }
	  if((strustro[i].group!=gr1) && (strustro[i].group!=gr2) && (strustro[i].group!=gr3) && (z==1))
			{strcpy( gr3, strustro[i].group);
			z=2;
			}
	  if((gr1!="\0") && (gr2!="\0") && (gr3!="\0"))
		  break;
  }
	ofstream fout;
	fout.open("F:\\FILES\\g.txt");
	fout <<"Список групп из базы данных:\n";
	fout <<gr1;
	fout <<"\n";
	fout <<gr2;
	fout <<"\n";
	fout <<gr3;
	fout <<"\n";
	fout.close();
	system ("notepad.exe F:\\FILES\\g.txt");

	printf( "Группа 1: %s\nГруппа 2: %s\nГруппа 3: %s\n", gr1, gr2, gr3);
 
}
 

void search(char* str, student* strustro, file* Mstr, int Kstr)					//третья функция
{int x=0,y=0; FILE*g; char* FileName2 = "G:\\FILES\\g.txt";
	g = fopen(FileName2,"w");
	using namespace std;
	ofstream fout;
	fout.open("F:\\FILES\\g.txt");
	fout <<"ПОИСК ПО <";
	fout<<str;
	fout<<"> :\n\n";
if (strcmp(str, "")!=0) 
	{fout <<"Результаты пофамильного поиска(полное совпадение):\n\n";
		for (int i = 0; i < Kstr; i++)
		{	
			if(strcmp(strustro[i].surname, str)==0)
			{	fout <<Mstr[i];
				fout <<"\n\n";
				x=1;
			}
			
		}
		if (x==0)
				fout <<"Нет совпадений\n\n";
	 fout <<"Результаты пофамильного поиска(расширенный поиск):\n\n";
		for (int i = 0; i < Kstr; i++)
		{
			if (strstr(strustro[i].surname, str)!=0)
			{	puts(Mstr[i]);
				fout <<Mstr[i];
				fout <<"\n\n";
				y=1;
			}
			
		}
		if (y==0)
				fout <<"Нет совпадений\n\n";
	}
	fout.close();
	system ("notepad.exe F:\\FILES\\g.txt");
}
