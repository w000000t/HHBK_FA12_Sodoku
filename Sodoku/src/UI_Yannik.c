//#include "sudoku.h"
#include <stdlib.h>
#include <stdio.h>
#include <Windows.h>
//#include "UI_Yannik.h"

//*****************************************************************************
//Name: bigWhiteSpace
//Parameter: /
//Description: Does nine Tabstops
//*****************************************************************************
void bigWhiteSpace()
{
	printf("\t\t\t\t\t\t\t\t\t");// 9 Tabstops
}

//*****************************************************************************
//Name: whiteSpace
//Parameter: /
//Description:Does one Tabstop
//*****************************************************************************
void whiteSpace()
{
	printf("\t");
}

//*****************************************************************************
//Name: quadWhiteSpace
//Parameter: /
//Description:Does four Tabstops
//*****************************************************************************
void quadWhiteSpace()
{
	printf("\t\t\t\t");
}

//*****************************************************************************
//Name: quadWhiteSpace
//Parameter: /
//Description:Does six Tabstops
//*****************************************************************************
void hexaWhiteSpace()
{
	quadWhiteSpace();
	whiteSpace();
	whiteSpace();
}

//*****************************************************************************
//Name: lineBreaks
//Parameter: /
//Description:
//*****************************************************************************
void lineBreaks()
{
	printf("\n\n");
}

//*****************************************************************************
//Name: printErrorMessage
//Parameter: /
//Description:
//*****************************************************************************
void printErrorMessage(char cError)
{
	lineBreaks();
	bigWhiteSpace();
	whiteSpace();
	printf("Es ist ein Fehler aufgetreten: %c", cError);
}

//*****************************************************************************
//Name: showStartScreen
//Parameter: /
//Description:
//*****************************************************************************
void showStartScreen(int iSelector)
{
	system("cls");
	lineBreaks();
	bigWhiteSpace();
	printf("	Sudoku");
	lineBreaks();
	bigWhiteSpace();
	printf("Schnelles Spiel");
	printSelector(1, iSelector);
	lineBreaks();
	bigWhiteSpace();
	printf(" Login");
	printSelector(2, iSelector);
	lineBreaks();
	bigWhiteSpace();
	printf("Registrieren");
	printSelector(3, iSelector);
	lineBreaks();
	bigWhiteSpace();
	printf("	Beenden");
	printSelector(4, iSelector);
	lineBreaks();
}

//*****************************************************************************
//Name: printLogin
//Parameter: /
//Description:
//*****************************************************************************
void printLogin()
{
	system("cls");
	lineBreaks();
	bigWhiteSpace();
	printf("Login");
}

//*****************************************************************************
//Name: printRegistration
//Parameter: /
//Description:
//*****************************************************************************
void printRegistration()
{
	system("cls");
	lineBreaks();
	bigWhiteSpace();
	printf("Registrierung");
}

//*****************************************************************************
//Name: printInputUsername
//Parameter: /
//Description:
//*****************************************************************************
void printInputUsername()
{
	lineBreaks();
	bigWhiteSpace();
	printf("Bitte geben sie Ihren Username ein:");
}

//*****************************************************************************
//Name: printInputPassword
//Parameter: /
//Description:
//*****************************************************************************
void printInputPassword()
{
	lineBreaks();
	bigWhiteSpace();
	printf(" Bitte geben sie Ihr Passwort ein:");
}

//*****************************************************************************
//Name: printInputPasswordRepeat
//Parameter: /
//Description:
//*****************************************************************************
void printInputPasswordRepeat()
{
	lineBreaks();
	bigWhiteSpace();
	printf("Bitte wiederholen sie das Passwort:");
}

void printSuccessMessage(char cUsername)
{
	lineBreaks();
	bigWhiteSpace();
	whiteSpace();
	printf("Ihr Username ist: %c", cUsername);
}

//*****************************************************************************
//Name: showDifficulty
//Parameter: /
//Description:
//*****************************************************************************
void showDifficulty(int iSelector)
{
	system("cls");
	lineBreaks();
	quadWhiteSpace();
	quadWhiteSpace();
	printf("    Schwierigkeitsgrad");
	lineBreaks();
	bigWhiteSpace();
	printf("  Leicht");
	printSelector(1, iSelector);
	lineBreaks();
	bigWhiteSpace();
	printf("  Mittel");
	printSelector(2, iSelector);
	lineBreaks();
	bigWhiteSpace();
	printf("  Schwer");
	printSelector(3, iSelector);
}

//*****************************************************************************
//Name: loggedInStartScreen
//Parameter: /
//Description:
//*****************************************************************************
void showLoggedInStartScreen(int iSelector)
{
	system("cls");
	lineBreaks();
	bigWhiteSpace();
	printf("  Sudoku");
	lineBreaks();
	bigWhiteSpace();
	printf("  Spielen");
	printSelector(1, iSelector);
	lineBreaks();
	bigWhiteSpace();
	printf("Bestenliste");
	printSelector(2, iSelector);
	lineBreaks();
	bigWhiteSpace();
	printf("  Regeln");
	printSelector(3, iSelector);
	lineBreaks();
	bigWhiteSpace();
	printf("  Logout");
	printSelector(4, iSelector);
	lineBreaks();
	bigWhiteSpace();
	printf("  Beenden");
	printSelector(5, iSelector);
	lineBreaks();
}

//*****************************************************************************
//Name: printFieldHorizontal
//Parameter: /
//Description:
//*****************************************************************************
void printFieldHorizontal()
{
	int iCounter = 9;
	while(iCounter > 0)
	{
		printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4");
	}

	printf("\xC5\n");
}

//*****************************************************************************
//Name: printField
//Parameter: /
//Description:
//*****************************************************************************
void printField(sudoku_field sudoku_fields[SUDOKU_FIELDS_X_AXIS][SUDOKU_FIELDS_Y_AXIS])
{

	/*sudoku_field sudoku_fields[SUDOKU_FIELDS_X_AXIS][SUDOKU_FIELDS_Y_AXIS];*/
	int i,j;

	for(i = 0; i < SUDOKU_FIELDS_X_AXIS; i++){
		hexaWhiteSpace();
		printFieldHorizontal();
		hexaWhiteSpace();
		for(j = 0; j < SUDOKU_FIELDS_Y_AXIS; j++){
			printf("\xB3  %i   ", sudoku_fields[i][j].value);
		}
		printf("\xB3\n");
	}

	hexaWhiteSpace();
	printFieldHorizontal();
	hexaWhiteSpace();
	printf("Hilfe");
	hexaWhiteSpace();
	whiteSpace();
	printf("  Beenden\n");
	hexaWhiteSpace();
	printf("F1");
	hexaWhiteSpace();
	whiteSpace();
	printf("  ESC\n");

}

void showHighscore()
{
	system("cls");
	lineBreaks();
	bigWhiteSpace();
	printf("Bestenliste\n");
}

void printSelector(int iPosition, int iSelector)
{
	if (iPosition - 1 == iSelector)
	{
		printf("\t<-");
	}
}

void showIntro()
{
	system("cls");
	printf(" .----------------.  .----------------.  .----------------.  .----------------.  .----------------.  .----------------. \n");
	printf("| .--------------. || .--------------. || .--------------. || .--------------. || .--------------. || .--------------. |\n");
	printf("| |    _______   | || | _____  _____ | || |  ________    | || |     ____     | || |  ___  ____   | || | _____  _____ | |\n");
	printf("| |   /  ___  |  | || ||_   _||_   _|| || | |_   ___ `.  | || |   .'    `.   | || | |_  ||_  _|  | || ||_   _||_   _|| |\n");
	printf("| |  |  (__ \_|  | || |  | |    | |  | || |   | |   `. \ | || |  /  .--.  \  | || |   | |_/ /    | || |  | |    | |  | |\n");
	printf("| |   '.___`-.   | || |  | '    ' |  | || |   | |    | | | || |  | |    | |  | || |   |  __'.    | || |  | '    ' |  | |\n");
	printf("| |  |`\____) |  | || |   \ `--' /   | || |  _| |___.' / | || |  \  `--'  /  | || |  _| |  \ \_  | || |   \ `--' /   | |\n");
	printf("| |  |_______.'  | || |    `.__.'    | || | |________.'  | || |   `.____.'   | || | |____||____| | || |    `.__.'    | |\n");
	printf("| |              | || |              | || |              | || |              | || |              | || |              | |\n");
	printf("| '--------------' || '--------------' || '--------------' || '--------------' || '--------------' || '--------------' |\n");
	printf(" '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  '----------------' \n");
	Sleep(5000);
}



