#include<stdio.h>	//헤더

#include<Windows.h>		//수업용 헤더.

int main(void) {//실행시 제일 먼저 확인(명령어들)
	
				/*
	putchar(putchar(65)+1);		//문자 출력 후 문자 반환
	putchar('Z');
	
	puts("Hello C!!");
	puts("안녕 C언어");
	*/

	//printf는 포멧을 사용할 수 있다.(입력서식)
	printf("내 이름은 %s입니다. \n나이는 %1.3f살입니다.ㅎ \n", "조영운",3.141592);
	

	system("pause");	//수업용 코드.
	return 0;
}