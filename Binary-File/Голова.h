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


struct TLuggage {				//	����� 
                    char N[20];	//	�.�.�. ��������� 
                    int M;		//	���������� ����� 
                    int W;	//	����� ��� ����� [��] 
                   };


void CreateLuggageFile(char* FileName, int Pb);
void BigSearch(char* FileName);
void LongSearch(char* FileName);
void PrintRezults(char* FileName);
#endif