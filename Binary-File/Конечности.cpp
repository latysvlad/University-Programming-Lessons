#include "������.h"

void CreateLuggageFile(char* FileName, int Pb)				//������� �������� �����
{
   FILE* f;
   TLuggage* B = NULL; 
   if ((fopen_s(&f, FileName, "wb")) != NULL )
   {
      printf("���� ��� ������!\n");
	  Sleep(2000);
   }
   else
   {
	 fwrite(&Pb, sizeof(int), 1, f);
	 B = new TLuggage [Pb];
	 for (int i = 0; i < Pb; i++)
	  {
		system("cls");
		printf("������� ��� ��������� %d\n", i + 1);
		gets_s(B[i].N);
	    gets_s(B[i].N);
		printf("������� ���������� ����� %d\n", i + 1);
		scanf_s("%d", &B[i].M);
		printf("������� ����� ��� ����� %d\n", i + 1);
		scanf_s("%d", &B[i].W);
		fwrite(&B[i], sizeof(TLuggage), 1, f);
		printf("���� ������� ������");
	  }
	 fclose(f);
	 delete [] B;
   }
}

void BigSearch(char* FileName)								//������� ������ ��������� � ������� �������
{
  FILE* f;
  int Pb;
  TLuggage* B = NULL; 
  bool* MF = NULL; 
  if ((fopen_s(&f, FileName, "rb")) != NULL)
  {
	printf("���� �� ������ �������!\n");
	Sleep(2000);
  }
  else
  {
	system("cls");
    fread(&Pb, sizeof(int), 1, f);
	printf("�������� � ����� �������� � ������ �������:\n");
	if (Pb > 0) 
	{
	  B = new TLuggage [Pb];
	  MF = new bool [Pb];
	  for (int i = 0; i < Pb; i++) MF[i] = false;
	  for (int i = 0; i < Pb; i++) fread(&B[i], sizeof(TLuggage), 1, f);
	  int max=0;
	  int p=1;
	  for (int i = 1; i < Pb; i++)
	  {
		 
			if((B[i].M>B[max].M)&&(B[i].W>B[max].W))
				max=i;
	  }
	  if (max==0)
		  {for (int i = 1; i < Pb; i++)
			{
					if((B[0].M<=B[i].M)||(B[0].W<=B[i].W))
						p=0;
			}
		  if(p==0)
			  printf("��� ���������������� �������� ������\n");
		  else puts(B[0].N);
		  }
	  else puts(B[max].N);



			
	 }
	 else printf("���� �� ��������");

  Sleep(2000);
  delete [] B;
  delete [] MF;
  fclose(f);
  }
}

void LongSearch(char* FileName)										//������� ������ ��������� � ���������� ��������
{
  int i, j;
  char* fam;
  char tmp[20];

  FILE* f;
  int Pb;
  TLuggage* B = NULL;
  system("cls");
  if ((fopen_s(&f, FileName, "rb")) != NULL)
  {
	 printf("���� �� ������ �������!\n");
	 Sleep(2000);
  }
  else
  {	  printf("����� ��������� � �������� ������� ��������:\n");
	  fread(&Pb, sizeof(int), 1, f);
	  B = new TLuggage [Pb];
	  for (int i = 0; i < Pb; i++) 
      fread(&B[i], sizeof(TLuggage), 1, f);
	  strcpy_s(tmp, B[0].N);
	  fam = strtok(tmp, " ");
	  unsigned max = strlen(fam);
	  int i_max = 0;
	  for (j = 1; j < Pb; j++)
		{
			strcpy_s(tmp, B[j].N);
			fam = strtok(tmp, " ");
			if (strlen(fam) > max)
			{
				max = strlen(fam);
				i_max = j;
			}
		}
  printf("%d\n", i_max+1);
  Sleep(2000);
  delete [] B;
  fclose(f);
 }
}

void PrintRezults(char* FileName)									//������� ������ ����������
{
  FILE* f;
  int Pb;
  TLuggage* B = NULL; 
  system("cls");
  printf("		�������� ����:\n\n");
  printf(" �		 ���    ����� �����    ��� �����\n"); 
  if ((fopen_s(&f, FileName, "rb")) != NULL)
  {
	printf("���� �� ������ �������!\n");
	Sleep(2000);
  }
  else
  {
     fread(&Pb, sizeof(int), 1, f);
	 B = new TLuggage [Pb];
	 for (int i = 0; i < Pb; i++)
	 {
		fread(&B[i], sizeof(TLuggage), 1, f);
		printf("%2d", i + 1);
		printf("%20s", B[i].N);
		printf("%7d", B[i].M);
	    printf("%15d\n", B[i].W);
	 }
printf("\n");


//����� ������ ������
	 FILE* f;
  int Pb;
  TLuggage* B = NULL; 
  bool* MF = NULL; 
  if ((fopen_s(&f, FileName, "rb")) != NULL)
  {
	printf("���� �� ������ �������!\n");
	Sleep(2000);
  }
  else
  {
    fread(&Pb, sizeof(int), 1, f);
	printf("�������� � ����� �������� � ������ �������:\n");
	if (Pb > 0) 
	{
	  B = new TLuggage [Pb];
	  MF = new bool [Pb];
	  for (int i = 0; i < Pb; i++) MF[i] = false;
	  for (int i = 0; i < Pb; i++) fread(&B[i], sizeof(TLuggage), 1, f);
	  int max=0;
	  int p=1;
	  for (int i = 1; i < Pb; i++)
	  {
			if((B[i].M>B[max].M)&&(B[i].W>B[max].W))
				max=i;

	  }
	  if (max==0)
		  {for (int i = 1; i < Pb; i++)
			{
					if((B[0].M<=B[i].M)||(B[0].W<=B[i].W))
						p=0;
			}
		  if(p==0)
			  printf("��� ���������������� �������� ������\n");
		  else puts(B[0].N);
		  }
	  else puts(B[max].N);



			
	 }
	 else printf("���� �� ��������");
printf("\n");


 //����� ������ �������
	 int i, j;
  char* fam;
  char tmp[20];
  FILE* f;
  int Pb;
  TLuggage* B = NULL;
  if ((fopen_s(&f, FileName, "rb")) != NULL)
  {
	 printf("���� �� ������ �������!\n");
	 Sleep(2000);
  }
  else
  {	  printf("����� ��������� � �������� ������� ��������:\n");
	  fread(&Pb, sizeof(int), 1, f);
	  B = new TLuggage [Pb];
	  for (int i = 0; i < Pb; i++) 
      fread(&B[i], sizeof(TLuggage), 1, f);
	  strcpy_s(tmp, B[0].N);
	  fam = strtok(tmp, " ");
	  unsigned max = strlen(fam);
	  int i_max = 1;
	  for (j = 1; j < Pb; j++)
		{
			strcpy_s(tmp, B[j].N);
			fam = strtok(tmp, " ");
			if (strlen(fam) > max)
			{
				max = strlen(fam);
				i_max = j;
			}
		}
  printf("%d\n", i_max+1);
  }
  }
  _getch();
	  fclose(f);
	  delete [] B;
  }
}
