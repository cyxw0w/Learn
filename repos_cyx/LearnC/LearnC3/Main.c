#include<stdio.h>
#include<Windows.h>
#include<time.h>

int main() {
	/*int n;
	int arry[4] = { 11,22,33,44 };
	int cnt = sizeof(arry) / sizeof(int);
	
	arry[2] = 99;

	for (n = 0; n < cnt; n++)
		printf("arry[%d] = %d\n", n, arry[n]);*/

	/*srand(time(0));
	int arr[6];
	float avg = .0f;
	for (int n = 0; n < 6; n++) {
		arr[n] = rand() % 100 + 1;
		avg += arr[n];

		printf("arr[%d] = %d\n", n, arr[n]);
	}
	printf("평균 : %.2f\n", avg /= 6.f);*/
	
	/*int* pb;
	printf("pb size = [%u]byte\n", sizeof(pb));

	int a = 3;
	int * ap;
	printf("%d\n", a);
	printf("%u\n", &a);
	printf("%d\n", *&a);
	ap = &a;
	printf("%d\n", *ap);
	*ap = 20;
	printf("%d\n", a);*/

	/*int arr[5] = { 5,4,3,2,1 };
	int *pa = 0, n;

	printf("arr = %u\n", arr);
	printf("arr addr = %u\n", &arr);
	printf("arr[0] addr = %u\n", &arr[0]);
	pa = arr;

	for (n = 0; n < 5; n++) {
		//printf("arr[%d] = %d\n", n, *(arr+n));
		printf("arr[%d] = %d\n", n, pa[n]);
	}*/

	/*int n;
	int *parr = 0;
	if (parr == 0) {
		parr = (int*)malloc(sizeof(int) * 4);
	}

	for (n = 0; n < 4; n++) {
		parr[n] = n + 1;
	}
	for (n = 0; n < 4; n++) {
		printf("parr[%d] = %d\n", n, parr[n]);
	}

	if (parr != 0) {
		free(parr);
		parr = 0;
	}*/

	/*학생수를 입력하세요 :
1번 학생 점수:
---
n번 학생 점수 :

##명 학생의 평균은 ##.##점입니다.
최고 점수는 ##점이고, #번째 학생입ㄴ디ㅏ.*/

	/*int num = 0;
	int* score = 0;
	if (score == 0) {
		score = (int*)malloc(sizeof(int) * 4);
	}
	float avg = .0f;
	int max = 0, maxN = 0;

	printf("학생수를 입력하세요 : ");
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++) {
		printf("%d번 학생 점수 : ",i);
		scanf_s("%d", score + i);
		if (max < *(score + i)) {
			max = *(score + i);
			maxN = i;
		}
		avg += *(score + i);
	}

	printf("%d명 학생의 평균은 %.2f점입니다.\n", num, avg /= num);
	printf("최고 점수는 %d점이고, %d번째 학생입니다.\n", max, maxN);

	if (score != 0) {
		free(score);
		score = 0;
	}*/


	//srand(time(0));	
	//int n, m;
	//int arr2[3][4] = { 0, };
	//int** parr = arr2;
	//for (n = 0; n < 3; n++) {
	//	for (m = 0; m < 4; m++) {
	//		printf("arr2[%d][%d] = %d\n", n, m, arr2[n][m]);
	//	}
	//}
	//printf("=================\n");
	//for (n = 0; n < 12; n++) {
	//	int y = n / 4;
	//	int x = n % 4;
	//	//parr[n] = rand();
	//	//arr2[y][x] = rand();		
	//	//*(*(parr+y)+x) = rand();
	//	//parr[y][x] = rand();
	//	int * pa = (parr + y * (sizeof(int*) / sizeof(int)));
	//	pa[x] = rand();
	//}
	//for (n = 0; n < 3; n++) {
	//	for (m = 0; m < 4; m++) {
	//		printf("arr2[%d][%d] = %d\n", n, m, arr2[n][m]);
	//	}
	//}
	//printf("=================\n");

	//학교 배열을 만들어 보자(2차원).
	//학년은 행으로, 반은 열로 만들자.
	//int n, m;
	//int **school = 0;
	//srand(time(0));
	//
	////학년, 반의 생성.
	//school = (int**)malloc(sizeof(int*) * 3);
	//for (n = 0; n < 3; n++) {
	//	school[n] = (int*)malloc(sizeof(int) * 5);
	//}
	//for (n = 0; n < 3; n++) {
	//	for (m = 0; m < 5; m++) {
//
	//		int y = n / 4;
	//		int x = n % 5;
	//		//school[x] = rand();
	//		//*(school+x) = rand()%30 +1;
	//		school[n][m] = rand()%30 +1;
	//	}
	//}
	//for (n = 0; n < 3; n++) {
	//	for (m = 0; m < 5; m++) {
	//		printf("school[%d][%d] = %d\n", n, m, school[n][m]
	//			/*(*(school + n) + m)*/);
	//	}
	//}
	//
	//printf("=================\n");
//
	////학년, 반의 해지.
	//if (school != 0) {
	//	for (n = 0; n < 3; n++) {
	//		if (school[n] != 0) {
	//			free(school[n]);
	//			//free(*(school + n));
	//		}
	//	}
	//	free(school);
	//	school = 0;
	//}

	//1학년 학생들의 평균을 저장합니다.
	//한 반당 10명의 학생이 있습니다.
	//반은 몇개로 만드시겠습니까 :
	//(학생들의 평균점수는 35.00 ~ 100.00점 사이의 임의의 점수로 책정해주세요.)

	srand(time(0));
	printf("1학년 학생들의 평균을 저장합니다.\n");
	printf("한 반당 10명의 학생이 있습니다.\n");
	printf("반은 몇개로 만드시겠습니까\n");
	printf("(학생들의 평균점수는 35.00 ~ 100.00점 사이의 임의의 점수로 책정해주세요.)\n 입력 :");
	float **school = 0;//전체 학반
	float *avg = 0;//반평균
	int n = 0;	//n은 반
	
	float sum = 0.f;//반 점수합
	float totalAvg=0.f;	
	scanf_s("%d", &n);
	//동적할당
	school = (float**)malloc(sizeof(float*) * n);
	for (int i = 0; i < n; i++) {
		school[i] = (float*)malloc(sizeof(float) * 10);
	}
	if(avg ==0)
		avg = (float*)malloc(sizeof(float) * 10);

	//연산
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 10; j++) {
			school[i][j] = (float)((rand() % 6501)*0.01f)+35;			
			sum += school[i][j];
			totalAvg += school[i][j];
			printf("1학년 %d반 %d번 학생 점수 : %.2f\n", i+1, j+1, school[i][j]);
		}
		avg[i] = sum / 10;
		sum = 0.0f;
	}
	printf("================================\n");
	//평균 출력
	totalAvg /= (n * 10);
	printf("전체 평균은 %.2f입니다.\n", totalAvg);

	printf("\n================================\n");

	for (int i = 0; i < n; i++) {
		printf("%d반 평균 : %.2f점입니다.\n", i + 1, avg[i]);
	}
	//할당 해제
	if (school != 0) {
		for (int i = 0; i < n; i++) {
			if (school[i] != 0) {
				free(school[i]);					
			}
		}		
		free(school);
		school = 0;
	}
	if (avg != 0) {
		free(avg);
		avg = 0;
	}


	


	system("pause");
	return 0;
}