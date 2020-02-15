#include<stdio.h>
#include<Windows.h>
#include<time.h>

#include "DefaultStructs.h"

void inputInfo(struct StudentScoreInfo* pinfo, char** str, int n);
void printScore(struct StudentScoreInfo* pinfo,int n);
void swapScore(struct StudentScoreInfo* pinfo);

int main() {
	srand(time(0));

	int n;
	//struct StudentScoreInfo info1;	
	////printf("����ü ũ�� = %d\n", sizeof(info1));
	//char* str = "ȫ�浿";
	//for (n = 0; str[n] != '\0'; n++) {
	//	info1._name[n] = str[n];
	//}
	//info1._name[n] = '\0';
	//printf("�̸� : %s\n", info1._name);
	//strcpy_s(info1._name, sizeof(info1._name), "ȫ�浿");

	struct StudentScoreInfo infos[3];

	char* names[] = { {"ȫ�浿"}, {"��ö��"},{"�̿���"} };
	// ������ �������� 30~100 ������ ����.
	
	//�Է�
	for (n = 0; n < sub_count; n++) 
		inputInfo(&infos, &names, n);
	
	//���	
	for (n = 0; n < sub_count; n++)
		printScore(&infos, n);


	system("pause");
	return 0;
}
void inputInfo(struct StudentScoreInfo* pinfo,char** str, int n) {
	int t = 0;
	//��
	pinfo[n]._class = 1;
	//�̸�
	strcpy_s(pinfo[n]._name, sizeof(pinfo[n]._name), str[n]);
	//��ȣ
	pinfo[n]._no = n + 1;
	//����
	for (int i = 0; i < sub_count; i++) {
		pinfo[n]._subject[i] = rand() % 71 + 30;
		t += pinfo[n]._subject[i];
	}
	//���
	pinfo[n]._aver = t / 3.0f;
}

void printScore(struct StudentScoreInfo* pinfo, int n) {	
	printf("�� = %d\n�̸� = %s\n��ȣ = %d\n���� = %d\n���� = %d\n���� = %d\n��� = %.2f\n\n",
		pinfo[n]._class,
		pinfo[n]._name, pinfo[n]._no,
		pinfo[n]._subject[KOR],
		pinfo[n]._subject[ENG],
		pinfo[n]._subject[MATH],
		pinfo[n]._aver);
}

void swapScore(struct StudentScoreInfo* pinfo) {
	struct StudentScoreInfo temp[3];
	
	float max = 0.f;
	int n, i = 0, cnt = 1, var;
	//rank
	for (n = 0; n < sub_count; n++) {		
		//ù ������ 1��
		pinfo[n]._rank = cnt;
		if (max < pinfo[n]._aver) {
			max = pinfo[n]._aver;
			//1���� �ٲ� ���
			var = pinfo[n + 1]._rank;
			pinfo[n + 1]._rank = pinfo[n]._rank;
			pinfo[n]._rank = var;
		}
	}

}