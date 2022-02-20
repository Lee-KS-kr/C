#include "header.h"

int main()
{
	int value;
	double remain;
	scanf("%lf%c%lf", &number1, &func, &number2);
	switch (func)
	{
	case '+':funcPt = add;
		printf("%.2lf", funcPt(number1, number2)); break;
	case '-':funcPt = sub;
		printf("%.2lf", funcPt(number1, number2)); break;
	case '*':funcPt = mul;
		printf("%.2lf", funcPt(number1, number2)); break;
		//나누기 손보셔....
	case '/':intfuncPt = div_value; funcPt = div_remain;
		printf("%d.%.2lf", intfuncPt(number1, number2), funcPt(number1, number2)); break;
	}
	return 0;
}