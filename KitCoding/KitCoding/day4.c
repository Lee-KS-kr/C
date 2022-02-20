/*정수를 반복적으로 입력받아 누적하다가
0이 입력되면 입력을 중단하고 총 누적값을 출력*/
#pragma warning(disable:4996)
#include<stdio.h>
/*풀이1 정동척인 프로그램 방식
int main()
{
	int indata, sum = 0;
	printf("숫자를 입력해주세요.\n0을 입력하면 종료됩니다.\n");
	scanf("%d", &indata);
	while (indata != 0)
	{
		sum = sum + indata;
		scanf("%d", &indata);
	}
	printf("%d", sum);
	return 0;
}
*/

/*풀이2
break문이 있는 코드에서는 이런 코드도 사용가능
성능면에서 큰 차이는 없다.
int main()
{
	int indata, sum = 0;
	while (1) //조건식에 참을 넣어 영원히 돌림
	{
		scanf("%d", &indata);
		if (indata == 0) {
			break; //분기문. while블럭 탈출용도
		}
		sum += indata; //sum=sum+indata의 줄임표현
	} //+= 단축형 연산자
	printf("%d", sum);
	return 0;
}
*/

/*임의의 수를 입력 받아 계속적인 합 출력하기
상황에 따른 반복

int main()
{
	int k, s = 0;
	printf("정수를 입력하세요. 0(zero)을 입력하면 종료됩니다 : ");
	scanf("%d", &k);
	while (k != 0)
	{
		printf("지금까지 합은 %d입니다.\n", s += k);
		printf("수를 입력하세요. 0(zero)을 입력하면 종료됩니다 : ");
		scanf("%d", &k);
	}
	return 0;
}
*/

/*구구단 2단을 출력
int main()
{
	int i = 1; //i=iterator 반복자.
	while (i < 10)
	{
		printf("2 * %d = %d\n", i, 2 * i);
		i++; //1 증가 연산자. == i=i+1
	}
	return 0;
}
*/

/*10에서 1까지 1씩 감소하면서 출력
변수값을 이용한 종료조건
int main()
{
	int num = 10;
	while (num)
	{
		printf(" % 5d", num); //filed폭. 출력할 칸을 지정하는것.
		num--; //1 감소 연산자. == num=num-1
	}
	return 0;
}
*/

