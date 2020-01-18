#include<stdio.h>	//헤더

#include<Windows.h>		//수업용 헤더.

enum eTrabe {
	야수	=0,
	언데드,
	악마,
};
enum eType {
	검 = 0,
	도,
	창,
	지팡이
};

int main(void) {//실행시 제일 먼저 확인(명령어들)
	
				/*
	putchar(putchar(65)+1);		//문자 출력 후 문자 반환
	putchar('Z');
	
	puts("Hello C!!");
	puts("안녕 C언어");
	*/

	/*
	//printf는 포멧을 사용할 수 있다.(입력서식)
	printf("내 이름은 %s입니다. \n나이는 %1.3f살입니다.ㅎ \n", "조영운",3.141592);
	*/

	/*
	//getchar는 버퍼에서 한글자만 입력
	//버퍼에 글자가 남아있으면 가지고 온다.	
	putchar(getchar());
	puts("---------------------");
	putchar(getchar());
	*/
	
	//printf("%d\n", getchar());
	/*
	char szStr[10] = { 0, };
	printf("char size = %u\n", sizeof(char));
	printf("szStr size = %u\n", sizeof(szStr));
	printf("문자열을 입력하세요(10자 이내로 입력) : ");	
	gets_s(szStr, sizeof(szStr));
	printf("입력 문자열 : %s\n", szStr);
	*/
	/*
	char szStr[100] = { 0, };
	printf("문자열을 입력하세요(100자 이내로 입력) : ");
	scanf_s("%s", szStr, sizeof(szStr));
	printf("입력 문자열 : %s\n", szStr);
	*/
	/*
	char szStr[100] = { 0, };
	int number;
	printf("임의의 숫자를 입력하세요 : ");
	scanf_s("%d", &number);
	printf("입력하신 숫자 + 11는 [%d]입니다.\n", number+11);
	*/

	/*
	char szStr[100] = { 0, };
	int number;
	printf("이름과 나이를 입력하세요(이름 나이) : ");
	scanf_s("%s %d", szStr, sizeof(szStr), &number);
	printf("당신의 이름은 [%s]님 입니다. \n나이는 %d세 입니다.", szStr, number);
	*/
	/*
	연습문제
	int year;
	printf("태어난 년도를 입력하세요 : ");
	scanf_s("%d", &year);
	printf("당신의 나이는 %d세입니다.\n", 2020 - year + 1);
	*/
	/*printf("int\t:%d\n", sizeof(int));
	printf("short\t:%d\n", sizeof(short));
	printf("long\t:%d\n", sizeof(long));
	printf("long long \t:%d\n", sizeof(long long));
	printf("unsigned int\t:%d\n", sizeof(unsigned int));*/

	/*int number = 0;
	unsigned int value = number;
	printf("number = %d, value = %d\n", number, value);
	value = number = -1;
	printf("number = %d, value = %u\n", number, value);*/

	//기본적으로 상수표현시 double로 인식
	/*float pi = 0.0f;
	printf("pi = %.2f\n", pi);
	pi = pi + 3.14f;
	printf("\"pi = %1.2f\"\n", pi);*/
	/*
	char ch = 'Z';
	char str[] = "안녕하세요.";
	char* str2 = "안녕하세요2";
	printf("str = %s\n", str);
	printf("str2 = %s\n", str2);
	str2 = "반가워요";
	printf("str2 = %s\n", str2);

	//printf("ch = %c\n", ch);
	//ch = 112;
	//printf("ch = %c\n", ch);
	*/

	//enum eTrabe monsterTrabe = 야수;		//0: 야수, 1:언데드, 2: 악마
	//enum eType weaponType = 검;			//0: 검, 1: 도, 2: 창, 3: 지팡이.....

	//printf("monsterTrabe = %d\n", monsterTrabe);
	//printf("monsterTrabe = %d\n", monsterTrabe = 언데드);
	//printf("monsterTrabe = %d\n", monsterTrabe = 악마);

	//printf("weaponType = %d\n", weaponType);
	//printf("weaponType = %d\n", weaponType = 도);
	//printf("weaponType = %d\n", weaponType = 창);
	//printf("weaponType = %d\n", weaponType = 지팡이);

	//연습문제
	char name[100] = { 0, };
	float height =.0f;
	float weight =.0f;

	float bmi = .0f;
	printf("이름을 입력하세요 :");
	scanf_s("%s", name, 100);

	printf("키와 몸무게를 입력하세요(###.# ##.#) :");
	scanf_s("%f, %f", &height, &weight);
	bmi = weight / ((height*0.01)*(height*0.01));
	printf("%s님의 키는 %.1fCm이고, 몸무게는 %.1fKg입니다.\n", name, height, weight);
	printf("%s님의 비만도는 %.2f입니다.(25이상은 비만)\n", name, bmi);
	
	system("pause");	//수업용 코드.
	return 0;
}