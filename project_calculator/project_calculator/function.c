#include "header.h"

double add(double num1, double num2)
{
	return num1 + num2;
}

double sub(double num1, double num2)
{
	return num1 - num2;
}

//double div(double num1, double num2)
//{
//	double value, remain;
//	value = num1 / num2;
//	remain = num1 % num2;
//	return value, remain;
//}

//double div(unsigned int num1, unsigned int num2)
//{
//	int value;
//	double remain;
//	value = num1 / num2;
//	remain = num1 % num2;
//	return value, remain;
//}

int div_value(unsigned int num1, unsigned int num2)
{
	return num1 / num2;
}

double div_remain(unsigned int num1, unsigned int num2)
{
	return num1 % num2;
}

double mul(double num1, double num2)
{
	return num1 * num2;
}
