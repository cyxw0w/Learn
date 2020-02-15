#include<stdio.h>
#include<Windows.h>
#include<time.h>

//선언부
void ShowGreetingsText();
float GetRandomScore();
int CompareInteger(int A, int B);
int GetSum(int start, int end);
int SelectProgram();
void InputNum(int*, int*);
int InputMin();
int InputMax();

int GetIntegerFromInput(char explain[]);

void ChangeValue(int* val);

void SwapValue(int* a, int* b);

int GetAvgFromSum(int* start, int* end, float* avg);

void malValue(int** , int);

int StringCompare(const char* str1, const char* str2);
int GetStringCount(const char* str);
void CountDown(int count);

int main() {

	srand(time(0));

	//ShowGreetingsText();
	//printf("Random Score = %1.2f\n", GetRandomScore());
	/*int a = 11, b = 24;
	int check = CompareInteger(a,b);
	if (check == 0)
		printf("%d 와 %d은(는) 같습니다.\n",a,b);
	else if(check == 1)
		printf("%d이(가) %d보다 큽니다.\n", a, b);
	else if(check == -1)
		printf("%d이(가) %d보다 작습니다.\n", a, b);*/
	//int n, t = 0;
	//int min = 0, max = 0;
	//while (1) {		
	//	/*printf("1. 프로그램 시작.\n2. 종료.\n번호를 고르세요 : ");
	//	scanf_s("%d", &select);
	//	if (select != 1)
	//		break;*/ 
	//	if (SelectProgram())
	//		break;
	//
	//	/*printf("시작 숫자를 입력하세요 : ");
	//	scanf_s("%d", &min);
	//	printf("끝나는 숫자를 입력하세요 : ");
	//	scanf_s("%d", &max);*/
	//	/*InputNum(&min, &max); */
	//	/*printf("시작 숫자를 입력하세요 : ");
	//	min = InputMin();
	//	printf("끝나는 숫자를 입력하세요 : ");
	//	max = InputMax();*/
	//	min = GetIntegerFromInput("시작 숫자를 입력하세요 : ");
	//	max = GetIntegerFromInput("끝나는 숫자를 입력하세요 : ");
	//
	//	/*for (n = min; n <= max; n++)
	//		t += n;*/
	//
	//	t = GetSum(min, max);
	//
	//	printf("%d부터 %d까지의 전체 합은 [%d]입니다.\n", min, max, t);
	//
	//	system("pause");
	//	system("cls");
	//}

	/*int number = 14;
	printf("number = %d\n", number);
	ChangeValue(&number);
	printf("number = %d\n", number);*/
	
	/*int numA = 10, numB = 20;
	printf("numA = %d, numB = %d\n", numA, numB);
	SwapValue(&numA, &numB);
	printf("numA = %d, numB = %d\n", numA, numB);*/	

	/*int n, t = 0, min = 0, max = 0;
	float avg = 0.f;	
	while (1) {				 
		if (SelectProgram())
			break;
			
		InputNum(&min, &max); 

		t = GetAvgFromSum(&min, &max, &avg);
	
		printf("%d부터 %d까지의 전체 합은 [%d]입니다.\n", min, max, t);
		printf("%d부터 %d까지의 전체 평균은 [%.2f]입니다.\n", min, max, avg);
	
		system("pause");
		system("cls");
	}*/

	
	//int* ages = 0;
	////함수로 동적 할당.
	//
	//int cnt = 0;
	//cnt = GetIntegerFromInput("몇 명의 나이를 저장 하시겠습니까 : ");
	//
	//malValue(&ages, cnt);
	//
	//printf("ages address = %u\n", ages);
	//
	//if (ages != 0) {
	//	free(ages);
	//	ages = 0;
	//}

	//int result = StringCompare("안녕하세요.", "안녕하세요.");
	//printf("result = %d\n", result);

	CountDown(3);

	system("pause");
	return 0;
}

//정의부
void ShowGreetingsText() {
	int rd = rand() % 3;

	switch (rd) {
	case 0:
		printf("안녕~, 반가워~\n");
		break;
	case 1:
		printf("안녕~, 지겨워~\n");
		break;
	case 2:
		printf("가버려~, 다시 보지 말자!\n");
		break;		
	}
}

float GetRandomScore() {
	return (((rand() % 100) * 100) + (rand() % 100)) / 100.0f;	
}
//A와 B의 값을 배교해서 같으면 0, A가 크면 1, B가 크면 -1을 반환한다.
int CompareInteger(int A, int B) {
	if (A == B)
		return 0;
	else if (A > B)
		return 1;
	else
		return -1;
}

int GetSum(int start, int end) {
	int t = 0, n;
	for (n = start; n <= end; n++)
		t += n;

	return t;
}

int SelectProgram() {
	int select = 0;
	printf("1. 프로그램 시작.\n2. 종료.\n번호를 고르세요 : ");
	scanf_s("%d", &select);
	if (select != 1)
		return 1;

	return 0;
}

void InputNum(int* min, int* max) {
	printf("시작 숫자를 입력하세요 : ");
	scanf_s("%d", min);
	printf("끝나는 숫자를 입력하세요 : ");
	scanf_s("%d", max);	
}
int InputMin() {
	int min = 0;
	scanf_s("%d", &min);
	return min;
}
int InputMax() {
	int max = 0;
	scanf_s("%d", &max);
	return max;
}

int GetIntegerFromInput(char explain[]) {
	int result = 0;
	printf(explain);
	scanf_s("%d", &result);

	return result;
}

void ChangeValue(int* val) {
	printf("val = %d\n", *val);
	*val = 100;
	printf("val = %d\n", *val);
}

void SwapValue(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int GetAvgFromSum(int* start, int* end, float* avg) {
	int t = 0, n;
	for (n = *start; n <= *end; n++)
		t += n;
	*avg = (float)t / (*end - *start +1);

	return t;
}

void malValue(int ** num, int n) {
	*num = (int*)malloc(sizeof(int)* n);
}

int GetStringCount(const char* str) {
	int i = 0, cnt = 0;
	for (i = 0; str[i] != NULL; i++) {
		cnt++;
	}

	return cnt;
}

// 두개의 문자열을 받아 반환값이 0이면 같은 문자, 0이 아니면 다른 문자.
int StringCompare(const char* str1, const char* str2) {
	int result = 0;
	if (GetStringCount(str1) != GetStringCount(str2))
		result = 1;
	else {
		int cnt = GetStringCount(str1), n;
		for (n = 0; n < cnt; n++) {
			if (str1[n] != str2[n]) {
				result = 1;
				break;
			}
		}
	}

	return result;
}

void CountDown(int count) {
	if (count <= 0) {
		printf("발사! \n");
		return;
	}
	printf("발사 %d초 전!\n", count);
	CountDown(count - 1);
}