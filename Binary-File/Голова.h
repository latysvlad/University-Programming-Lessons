#ifndef MyFunctionsH
#define MyFunctionsH

#pragma once

#include <conio.h>
#include <dos.h>
#include <Windows.h>
#include <locale.h>
#include <string.h>
#include <stdio.h>
#include <tchar.h>
#include <SDKDDKVer.h>


struct TLuggage {				//	Багаж 
                    char N[20];	//	Ф.И.О. пассажира 
                    int M;		//	Количество вещей 
                    int W;	//	Общий вес вещей [кг] 
                   };


void CreateLuggageFile(char* FileName, int Pb);
void BigSearch(char* FileName);
void LongSearch(char* FileName);
void PrintRezults(char* FileName);
#endif