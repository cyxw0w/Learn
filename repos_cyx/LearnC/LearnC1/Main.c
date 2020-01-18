#include<stdio.h>	//헤더

#include<Windows.h>		//수업용 헤더.

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

	char szStr[100] = { 0, };
	int number;
	printf("이름과 나이를 입력하세요(이름 나이) : ");
	scanf_s("%s %d", szStr, sizeof(szStr), &number);
	printf("당신의 이름은 [%s]님 입니다. \n나이는 %d세 입니다.", szStr, number);




	system("pause");	//수업용 코드.
	return 0;
}