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
	printf("��� : %.2f\n", avg /= 6.f);*/
	
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

	/*�л����� �Է��ϼ��� :
1�� �л� ����:
---
n�� �л� ���� :

##�� �л��� ����� ##.##���Դϴ�.
�ְ� ������ ##���̰�, #��° �л��Ԥ���.*/

	int num = 0;
	int* score = 0;
	if (score == 0) {
		score = (int*)malloc(sizeof(int) * 4);
	}
	float avg = .0f;
	int max = 0, maxN = 0;

	printf("�л����� �Է��ϼ��� : ");
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++) {
		printf("%d�� �л� ���� : ",i);
		scanf_s("%d", score + i);
		if (max < *(score + i)) {
			max = *(score + i);
			maxN = i;
		}
		avg += *(score + i);
	}

	printf("%d�� �л��� ����� %.2f���Դϴ�.\n", num, avg /= num);
	printf("�ְ� ������ %d���̰�, %d��° �л��Դϴ�.\n", max, maxN);

	if (score != 0) {
		free(score);
		score = 0;
	}

	system("pause");
	return 0;
}