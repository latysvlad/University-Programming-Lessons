// 										Хедер файл


#ifndef Hodor_H
#define Hodor_H

#include <Windows.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <fstream>

struct student 
{
	int num;
	char group[8];
	char surname[12];
	int o1, o2, o3;
};


typedef char file[60];

int open(char* FileName1, student *& strustro, file*& Mstr);
void info(student* strustro, int Kstr);
void search(char* str, student* strustro, file* Mstr, int Kstr);	

#endif
