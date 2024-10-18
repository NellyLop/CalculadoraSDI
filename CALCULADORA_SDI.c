#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define RESET_COLOR "\x1b[0m"
#define AZUL_T "\x1b[34m"
#define ROJO_T "\x1b[31m"
#define MAGENTA_T  "\x1b[35m"
#define MAGENTA_F  "\x1b[45m"
#define VERDE_T        "\x1b[32m"
#define CYAN_T     "\x1b[36m"
#define AMARILLO_T "\x1b[33m"
#define VERDE_F        "\x1b[42m"
#define CYAN_F     "\x1b[46m"
void gotoxy(int x, int y)
{
    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hcon, dwPos);
}
void margen()
{
	gotoxy(42,3);printf(VERDE_T"~~ INFORM%cTICA SA DE CV ~~"RESET_COLOR,181);
	gotoxy(46,6);printf(AMARILLO_T"Calculadora de SDI"RESET_COLOR);
	gotoxy(17,6);printf(MAGENTA_F"15/12/2023"RESET_COLOR);
    int x, y;
    x = 15;
    gotoxy(x, 1);
    printf(MAGENTA_T "%c", 201);
    gotoxy(x, 28);
    printf("%c", 200);
    // agregar margen al menú
    for (x = 16; x <= 90; x++)
    {
        gotoxy(x, 1);
        printf(MAGENTA_T "%c", 205);
        gotoxy(x, 28);
        printf("%c", 205);
    }
    for (y = 2; y <= 27; y++)
    {
        gotoxy(15, y);
        printf(MAGENTA_T "%c", 186);
        gotoxy(91, y);
        printf("%c", 186);
    }
    gotoxy(91, 1);
    printf(MAGENTA_T "%c", 187);
    gotoxy(91, 28);
    printf("%c", 188);
    x = 27;
    gotoxy(x, 2);
    printf("%c", 201);
    gotoxy(x, 4);
    printf("%c", 200);

    for (x = 28; x <= 83; x++)
    {
        gotoxy(x, 2);
        printf(MAGENTA_T "%c", 205);
        gotoxy(x, 4);
        printf("%c", 205);
    }

    gotoxy(27, 3);
    printf(MAGENTA_T "%c", 186);
    gotoxy(84, 3);
    printf("%c", 186);
    gotoxy(84, 2);
    printf("%c", 187);
    gotoxy(84, 4);
    printf("%c" RESET_COLOR, 188);
   
}
void proceso(int metodo,float sueldo, int time,float Aguinaldo)
{
	int DiasA, vacaciones;
	float primaV,PVD;
	int diasV;
	float SDI;
	float FI;
	int res;
	do{
		margen();
	gotoxy(23,10);printf(CYAN_T"Seleccione el m%ctodo: "RESET_COLOR"[   ]",130);
	gotoxy(25,12);printf("1. Prestaciones fijas");
	gotoxy(25,14);printf("2. Prestaciones variables");
	gotoxy(47,10);scanf("%d",&metodo);
	system("cls");
	if (metodo==1)
	{
	margen();
	DiasA=15;
	primaV=0.25;
	gotoxy(46,8);printf(ROJO_T"Prestaciones fijas"RESET_COLOR);
	gotoxy(23,10);printf(CYAN_T"Ingrese el sueldo diario: "RESET_COLOR"$ ");
	scanf("%f",&sueldo);
	gotoxy(23,12);printf(CYAN_T"Ingrese los a%cos laborados: "RESET_COLOR,164);
	scanf("%d",&time);
	if(time==1)
	{
		diasV=12;
		Aguinaldo=(DiasA*sueldo)/365;
		PVD=(diasV*sueldo*primaV)/365;
		SDI=sueldo+Aguinaldo+PVD;
		FI=SDI/sueldo;
	}
	if(time==2)
	{
		diasV=14;
		Aguinaldo=(DiasA*sueldo)/365;
		PVD=(diasV*sueldo*primaV)/365;
		SDI=sueldo+Aguinaldo+PVD;
		FI=SDI/sueldo;
	}
		if(time==3)
	{
		diasV=16;
		Aguinaldo=(DiasA*sueldo)/365;
		PVD=(diasV*sueldo*primaV)/365;
		SDI=sueldo+Aguinaldo+PVD;
		FI=SDI/sueldo;
	}
		if(time==4)
	{
		diasV=18;
		Aguinaldo=(DiasA*sueldo)/365;
		PVD=(diasV*sueldo*primaV)/365;
		SDI=sueldo+Aguinaldo+PVD;
		FI=SDI/sueldo;
	}
		if(time==5)
	{
		diasV=20;
		Aguinaldo=(DiasA*sueldo)/365;
		PVD=(diasV*sueldo*primaV)/365;
		SDI=sueldo+Aguinaldo+PVD;
		FI=SDI/sueldo;
	}
		if(time>=6 && time <=10)
	{
		diasV=22;
		Aguinaldo=(DiasA*sueldo)/365;
		PVD=(diasV*sueldo*primaV)/365;
		SDI=sueldo+Aguinaldo+PVD;
		FI=SDI/sueldo;
	}
		if(time>=11 && time <=15)
	{
		diasV=24;
		Aguinaldo=(DiasA*sueldo)/365;
		PVD=(diasV*sueldo*primaV)/365;
		SDI=sueldo+Aguinaldo+PVD;
		FI=SDI/sueldo;
	}
		if(time>=16 && time <=20)
	{
		diasV=26;
		Aguinaldo=(DiasA*sueldo)/365;
		PVD=(diasV*sueldo*primaV)/365;
		SDI=sueldo+Aguinaldo+PVD;
		FI=SDI/sueldo;
	}
		if(time>=21 && time <=25)
	{
		diasV=28;
		Aguinaldo=(DiasA*sueldo)/365;
		PVD=(diasV*sueldo*primaV)/365;
		SDI=sueldo+Aguinaldo+PVD;
		FI=SDI/sueldo;
	}
		if(time>=26 && time <=30)
	{
		diasV=30;
		Aguinaldo=(DiasA*sueldo)/365;
		PVD=(diasV*sueldo*primaV)/365;
		SDI=sueldo+Aguinaldo+PVD;
		FI=SDI/sueldo;
	}
		if(time>=31 && time <=35)
	{
		diasV=32;
		Aguinaldo=(DiasA*sueldo)/365;
		PVD=(diasV*sueldo*primaV)/365;
		SDI=sueldo+Aguinaldo+PVD;
		FI=SDI/sueldo;
	}	
	}
	if (metodo==2)
	{
		margen();
		gotoxy(44,8);printf(ROJO_T"Prestaciones variables"RESET_COLOR);
		gotoxy(23,10);printf(CYAN_T"Ingrese el sueldo diario: "RESET_COLOR"$ ");
		scanf("%f",&sueldo);
		gotoxy(23,12);printf(CYAN_T"Ingrese los dias de aguinaldo: "RESET_COLOR);
		scanf("%d",&DiasA);
		gotoxy(23,14);printf(CYAN_T"Ingrese los dias de vacaciones: "RESET_COLOR);
		scanf("%d",&diasV);
		PVD=(diasV*sueldo*0.25)/365;
		Aguinaldo=(DiasA*sueldo/365);
		SDI=sueldo+PVD+Aguinaldo;
		FI=SDI/sueldo;	
	}
	gotoxy(23,16);printf(CYAN_T"Aguinaldo diario: "RESET_COLOR"$ %.2f ", Aguinaldo);
	gotoxy(23,18);printf(CYAN_T"Prima Vacacional Diaria: "RESET_COLOR"%.2f", PVD);
	gotoxy(23,20);printf(CYAN_T"Salario del trabajador(SDI fijo): "RESET_COLOR"$ %.2f", SDI);
	gotoxy(23,22);printf(CYAN_T"Factor de Integracion:"RESET_COLOR" %.4f", FI);
	gotoxy(43,25);printf(AMARILLO_T"Desea hacer otro c%clculo 1. Si / 2. No : "RESET_COLOR,160);
	scanf("%d",&res);
	system("cls");
	}while(res==1);
}
void pausa()
{
	gotoxy(40,14);printf(ROJO_T"Saliendo del programa"RESET_COLOR);
	sleep(2);
	gotoxy(40,14);printf("                       ");
	system("cls");
	
}
main()
{
	int  time,Aguinaldo;
	float sueldo;
	int metodo;
	margen();
	proceso(metodo,sueldo,time, Aguinaldo);
	gotoxy(45,26);system("pause");
	system("cls");
	pausa();
	return 0;
}
