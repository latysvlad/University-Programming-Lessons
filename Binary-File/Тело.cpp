/*											������� �5


       ������� �������� ���� ��������, ���������� �������� � ������ ���������. ��������� ����� ��������� ���:

     struct A {                    // ����� 
                    char N[20];  // �.�.�. ��������� 
                    int M;          //  ���������� ����� 
                    double W;   //  ����� ��� ����� [��] 
                   }

1. ����� ���������, � �������� ����� ��������� ����� ������� �� ��������� ���������� � �� ���������� �����, � �� ����.  
2. ���������� ������ ���������� � ������, ������� ������� �������� ������  ��������.
3. �������� ���� � ���������� �����������.*/






#include "������.h"

int _tmain(int argc, _TCHAR* argv[])
{
	TLuggage* Bsort = NULL; // ��������������� ������ �������� � ������
	int Pb = 0; 
	char* FileName = "F:\\������02\\Debug\\books.bin";
	setlocale(LC_ALL, "Russian");
	int k0 = 1;
	while (k0 != 6)
	{
	 system("cls");
	 printf("����\n");
	 printf("1 - ������� �������� ���� ��������, ���������� �������� � ���������\n");
	 printf("2 - ����� ��������� � ����� ������� �������\n");
	 printf("3 - ����� ��������� � ����� ������� ��������\n");
	 printf("4 - ����������� �������� ���� � ����������\n");
	 printf("5 - �����\n");
	 scanf_s("%d", &k0);
	 switch (k0)
	 {

	 case 1:
		 {
			system("cls");
			printf("������� ���������� ����������\n");
			scanf_s("%d", &Pb);
			CreateLuggageFile(FileName, Pb);
			system("cls");
			Sleep(2000);
		 }
		 break;

	 case 2:
		 {
             system("cls");
			 BigSearch(FileName);
		 }
		 break;
	
	 case 3: LongSearch(FileName);
		 break;
		
	 case 4: PrintRezults(FileName);
				
		 break;

	 case 5: k0 = 6;
		 break;

	 default:
		 {
             system("cls");
			 printf("Povtorite vvod 1 - 5");
			 Sleep(2000);
			 k0 = 1;
		 }
	 }
	}
	return 0;
}