#include<stdio.h>

#include<Windows.h>

#include<time.h>

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

		////연습문제

	//float height = .0f;
		//float weight = .0f;
		//float bmi = .0f;
		//printf("키를 입력하세요 : ");
		//scanf_s("%f", &height);
		//printf("몸무게를 입력하세요 : ");
		//scanf_s("%f", &weight);
		//bmi = weight / ((height * 0.01) *(height * 0.01));
		//printf("당신의 비만도는 %.2f입니다.\n", bmi);
		//if (bmi >= 25)
		//	printf("당신은 비만입니다.\n");
		//else
		//	printf("당신은 비만이 아닙니다.\n");

	/*int select = 0;
		printf("1. 안녕하세요.\n2. 또 만났네요.\n3. 안녕히가세요.\n번호를 입력하세요: ");
		scanf_s("%d", &select);
		switch (select) {
		case 1:
			printf("당신은 상대에게 [안녕하세요.]하고 인사했다.\n");
			break;
		case 2:
			printf("당신은 상대에게 [또 만났네요.]하고 인사했다.\n");
			break;
		case 3:
			printf("당신은 상대에게 [안녕히가세요.]하고 인사했다.\n");
			break;
		default:
			printf("번호를 잘못 입력하셨습니다!!!\n");
			break;
		}*/

	//int score = 0;
		//printf("당신의 점수를 입력하세요(55~100) :");
		//scanf_s("%d", &score);
		//if (score > 100|| score < 0) {
		//	printf("그런 점수는 없습니다.\n");
		//}
		//else{
		//	switch (score / 10) {
		//	case 9:
		//		printf("A학점입니다.\n");
		//		break;
		//	case 8:
		//		printf("B학점입니다.\n");
		//		break;
		//	case 7:
		//		printf("C학점입니다.\n");
		//		break;
		//	case 6:
		//		printf("D학점입니다.\n");
		//		break;		
		//	default:
		//		printf("F학점입니다.\n");
		//	}
		//}

	/*srand(time(0));
		int number = 0, n;
		number = rand() % 20 + 1;
		for (n = 0; n < number; n++) {
			printf("n = %d\n", n + 1);
		}*/

	//(시작하는 정수에서 마지막 더하는 정수까지의 총합을 구하세요)

	/*int num1 = 0, num2 = 0, sum = 0;
	printf("시작하는 정수를 입력하세요 :");
	scanf_s("%d", &num1);
	printf("마지막으로 더하는 정수를 입력하세요 :");
	scanf_s("%d", &num2);
	for (int i = num1; i <= num2; i++) {
		sum += i;
	}
	printf("%d ~ %d의 총합 = %d\n", num1, num2, sum);
*/

//srand(time(0));
//printf("%d\n", time(0));
//printf("%d\n", rand());
//
//	int count = 5;
//	while (count-- > 0) {
//		printf("카운트 : %d초!!\n", count);
//	}
//	printf("바~아~ㄹ~사~아~~~~~~!!!\n");

	//반복횟수를 입력하세요 : 
	//반복 문자열을 입력하세요 :
	
	/*int num = 0;
	char str[100] = { 0, };	
	printf("반복횟수를 입력하세요 : ");
	scanf_s("%d", &num);
	printf("반복 문자열을 입력하세요 : ");
	scanf_s("%s", str,sizeof(str));

	while (num > 0) {
		printf("%s", str);
		num--;
	}
	printf("\n");
*/

	/*int num = 0;
	printf("반복횟수를 입력하세요 :");
	scanf_s("%d", &num);
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < 4; j++) {
			printf("*");
		}
		printf("\n");
	}*/

	/*int num = 0;
	printf("반복횟수를 입력하세요 :");
	scanf_s("%d", &num);
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < i+1; j++) {
			printf("*");
		}
		printf("\n");
	}*/
	
	int stopNumber = 0, n;
	printf("1~100중의 수중 출력을 멈출 수를 입력하세요 : ");
	scanf_s("%d", &stopNumber);
	for (n = 1; n < 100; n++) {
		if (n % 2 == 1)
			continue;
		printf("n=%d\n", n);

		if (n == stopNumber)
			break;
	}


	//수업용 코드.
	system("pause");
	return 0;
}