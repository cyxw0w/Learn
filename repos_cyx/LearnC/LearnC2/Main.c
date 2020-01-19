#include<stdio.h>

#include<Windows.h>

int main() {
	
	//printf("11 %% 5 = %d\n", 11 % 5);
	//int su = 3;
	//printf("su = %d\n", su);
	//printf("su = %d\n", ++su);
	//printf("su = %d\n", su++);
	//printf("su = %d\n", su);
	/*printf("su = %d\n", su);
	su++;
	printf("su = %d\n", su);
	++su;
	printf("su = %d\n", su);
	su--;
	printf("su = %d\n", su);
	--su;
	printf("su = %d\n", su);
*/
/*
	printf("9 < 3 \t\t= %d\n", 9 < 3);
	printf("10 > 9 \t\t= %d\n", 10 > 9);
	printf("10 - 3 <= 7 \t= %d\n", 10 -3 <= 7);
	printf("5+6 >= 3+5 \t= %d\n", 5+6 >= 3+5);
	printf("10%3 == 1 \t= %d\n", 10%3 == 1);
	printf("128 != 32*4 \t= %d\n", 128 != 32 * 4);
*/

	//int number = 7;
	//printf("number = %d\n", number);
	//number = (number % 2 == 1) ? number + 1 : number;
	//printf("number = %d\n", number);

	//int num1 = 0, num2 = 0;
	//printf("숫자 2개를 입력하세요(## ##) : ");
	//scanf_s("%d %d", &num1, &num2);
	//printf("<결과>\n");
	//printf("num1 = %d, num2 = %d\n", num1, num2);
	//printf("(num1 - num2 > 0) && (num1 + num2 > 0) = %d\n"
	//	, (num1 - num2 > 0) && (num1 + num2 > 0));
	//printf("(num1 - num2 > 0) || (num1 + num2 > 0) = %d\n"
	//	, (num1 - num2 > 0) || (num1 + num2 > 0));
/*
	printf("false \t&& false \t= %d\n", 0 && 0);
	printf("false \t&& true \t= %d\n", 0 && 1);
	printf("true \t&& false \t= %d\n", 1 && 0);
	printf("true \t&& true \t= %d\n", 1 && 1);

	printf("false \t|| false \t= %d\n", 0 || 0);
	printf("false \t|| true \t= %d\n", 0 || 1);
	printf("true \t|| false \t= %d\n", 1 || 0);
	printf("true \t|| true \t= %d\n", 1 || 1);
*/	

	//printf("100 & 32 \t= %d\n", 100 & 32);
	//printf("100 | 50 \t= %d\n", 100 | 50);
	//printf("100 << 2 \t= %d\n", 100 << 2);
	//printf("100 >> 7 \t= %d\n", 100 >> 7);
/*
	int result = 11;
	result = result + 17;
	printf("result = %d\n", result);
	result = 11;
	result += 17;
	printf("result = %d\n", result);
	*/
	
	/*int number = 0;
	printf("아무 숫자를 입력하세요 : ");
	scanf_s(" %d", &number);
	if (number % 2 == 1)
		printf("입력하신 숫자 [%d](은)는 홀수 입니다.\n", number);
	else if (number == 0)
		printf("입력하신 숫자는 [0]입니다.");
	else
		printf("입력하신 숫자 [%d](은)는 홀수가 아닙니다.\n", number);*/

	//연습문제

	float height = .0f;
	float weight = .0f;
	float bmi = .0f;

	printf("키를 입력하세요 : ");
	scanf_s("%f", &height);
	printf("몸무게를 입력하세요 : ");
	scanf_s("%f", &weight);

	bmi = weight / ((height * 0.01) *(height * 0.01));
	printf("당신의 비만도는 %.2f입니다.\n", bmi);
	if (bmi >= 25)
		printf("당신은 비만입니다.\n");
	else
		printf("당신은 비만이 아닙니다.\n");

	//수업용 코드.
	system("pause");
	return 0;
}