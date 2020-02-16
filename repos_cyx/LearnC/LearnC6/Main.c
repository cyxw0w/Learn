#include<stdio.h>
#include<Windows.h>
#include<time.h>
#include "DefaultStructs.h"

void inputMon(FILE* pf, struct Monster* pinfo, int n);

int main() {
	srand(time(0));
	FILE* pf = 0;
	/*fopen_s(&pf, "test.txt", "w");
	fprintf(pf, "%s %d %d", "홍길동", 1, 567);
	fclose(pf);*/
	
	/*fopen_s(&pf, "test.txt", "r");
	if (pf != 0) {
		char name[20] = { 0, };
		int number = 0;
		int su = 0;

		while (feof(pf) == 0) {
			fscanf_s(pf, "%s %d %d", name, sizeof(name), &number, &su);

			printf("%s %d %d\n", name, number, su);
		}

		fclose(pf);
	}*/

	int n = 0;
	struct Monster infos[5];

	while (1) {
		printf("몬스터를 몇마리 만드시겠습니까 : ");
		scanf_s("%d", n);
		for(int i =0;i<n;i++)
			inputMon(pf, &infos, i);
		
	}

	system("pause");
	return 0;
}

void inputMon(FILE* pf, struct Monster* pinfo, int n) {
	char name[20];
	
	//입력
	printf("%d번째 몬스터 이름 : ", n + 1);
	scanf_s("%s", name, sizeof(name));
	strcpy_s(pinfo[n].name, sizeof(pinfo[n].name), name);
	
	pinfo[n].stat.att = rand() % 8 + 3;
	pinfo[n].stat.def = rand() % 5;
	pinfo[n].stat.hp = rand() % 41 + 40;
	
	//파일 입력
	fopen_s(&pf, "MonsterData.txt", "w+");

}