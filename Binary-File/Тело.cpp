/*											ВАРИАНТ №5


       Создать бинарный файл структур, содержащих сведения о багаже пассажира. Структура имеет следующий вид:

     struct A {                    // Багаж 
                    char N[20];  // Ф.И.О. пассажира 
                    int M;          //  Количество вещей 
                    double W;   //  Общий вес вещей [кг] 
                   }

1. Найти пассажира, у которого багаж превышает багаж каждого из остальных пассажиров и по количеству вещей, и по весу.  
2. Определить номера пассажиров в списке, фамилии которых являются самыми  длинными.
3. Исходный файл и результаты распечатать.*/






#include "Голова.h"

int _tmain(int argc, _TCHAR* argv[])
{
	TLuggage* Bsort = NULL; // отсортированный массив сведений о книгах
	int Pb = 0; 
	char* FileName = "F:\\ЛабРаб02\\Debug\\books.bin";
	setlocale(LC_ALL, "Russian");
	int k0 = 1;
	while (k0 != 6)
	{
	 system("cls");
	 printf("МЕНЮ\n");
	 printf("1 - Создать бинарный файл структур, содержащих сведения о студентах\n");
	 printf("2 - Найти пассажира с самым большим багажом\n");
	 printf("3 - Найти пассажира с самой длинной фамилией\n");
	 printf("4 - Распечатать исходный файл и результаты\n");
	 printf("5 - Выход\n");
	 scanf_s("%d", &k0);
	 switch (k0)
	 {

	 case 1:
		 {
			system("cls");
			printf("Введите количество пассажиров\n");
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