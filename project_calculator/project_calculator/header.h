#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning (disable : 4996)

double number1;
double number2;
char func;

double (*funcPt)(double num1, double num2);
double add(double num1, double num2);
double sub(double num1, double num2);
double mul(double num1, double num2);
//double div(double num1, double num2);
double div_remain(unsigned int num1, unsigned int num2);

int (*intfuncPt) (int num1, int num2);
int div_value(unsigned int num1, unsigned int num2);
