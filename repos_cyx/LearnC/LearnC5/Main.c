#include<stdio.h>
#include<Windows.h>
#include<time.h>

#include "DefaultStructs.h"

void inputInfo(struct StudentScoreInfo* pinfo, char** str, int n);
void printScore(struct StudentScoreInfo* pinfo,int n);
void swapScore(struct StudentScoreInfo* pinfo);

void input(struct StudentInfo* pinfo, char** str, int n);
void randRk(struct StudentInfo* pinfo, int n);
void inputBodyinfo(struct StudentInfo* pinfo, int n);
void output(struct StudentInfo* pinfo, int n);
void outputRank(struct StudentInfo* pinfo, int n);

void ShowInfo(struct StudentInfo* pinfo);
LPSTUDENTINFO FindRank(int find, LPSTUDENTINFO pStudent, int count);
void ShuffleRank(LPSTUDENTINFO pStudent, int count);

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

	//struct StudentScoreInfo infos[3];
	//
	//char* names[] = { {"ȫ�浿"}, {"��ö��"},{"�̿���"} };
	// ������ �������� 30~100 ������ ����.
	//
	//�Է�
	//for (n = 0; n < sub_count; n++) 
	//	inputInfo(&infos, &names, n);
	//
	//���	
	//for (n = 0; n < sub_count; n++)
	//	printScore(&infos, n);

	//�־��� �̸�
	char* names[] = { {"ȫ�浿"}, {"��ö��"},{"�̿���"}
		, {"���ö"}, {"���ؿ�"}, {"������"}, {"������"}
		, {"���α�"}, {"�̺���"}, {"������"}, NULL };
	STUDENTINFO Infos[10] = { 0, };
	LPSTUDENTINFO first = 0;
	//�Է�
	for (n = 0; names[n] != NULL; n++) {
		input(&Infos, &names, n);
		inputBodyinfo(&Infos, n);

		LPSTUDENTINFO pInfo = Infos + n;
		pInfo->_no = n + 1;
		pInfo->_scores._rank = n + 1;
	}

	//���� ����
	ShuffleRank(Infos, 10);

	//��ũ �ɱ�
	for (n = 0; n < 10; n++) {
		LPSTUDENTINFO pInfo = Infos + n;
		pInfo->_prevRank = FindRank(pInfo->_scores._rank - 1, Infos, 10);
		pInfo->_nextRank = FindRank(pInfo->_scores._rank + 1, Infos, 10);
	}

	//��ȣ ���
	for (n = 0; n < 10; n++) {
		ShowInfo(&Infos[n]);
		printf("\n");
	}

	printf("===================================================================\n\n");
	//���� ���
	for (n = 0; n < 10; n++ ) {
		if (1 == Infos[n]._scores._rank)
			first = &Infos[n];
	}
	while (first != 0) {
		ShowInfo(first);
		first = first->_nextRank;
		printf("\n");
	}

	//���
	//for (int i = 0; i < n; i++);
		//output(&Infos, i);
	
	//for (n = 0; n < 10; n++);
		//outputRank(&Infos, n);

	system("pause");
	return 0;
}

//StudentScoreInfo
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

//ScoreInfo
//�켱 ������ ���� ���� 
void input(struct StudentInfo* pinfo, char** str, int n) {
	int t = 0;
	//��
	pinfo[n]._class = 1;
	//�̸�
	strcpy_s(pinfo[n]._name, sizeof(pinfo[n]._name), str[n]);
	//��ȣ
	pinfo[n]._no = n + 1;
	//����
	for (int i = 0; i < sub_count; i++) {
		pinfo[n]._scores._subject[i] = rand() % 71 + 30;
		t += pinfo[n]._scores._subject[i];
	}
	//���
	pinfo[n]._scores._aver = t / 3.0f;	
}
//���������ҽ�, �ٸ� ������ ��ġ�� �ʰ� ����
//�� ��ũ�� ���������� �˻��Ͽ� �ߺ���ũ üũ
//�ߺ����� �ʴ� ���� ���ؼ� ��������� �Լ��� ȣ��, ��ũ����
//n�� ���� ������ ��ũ ��ġ�� ������ 0~n���� �˻�?
void randRk(struct StudentInfo* pinfo, int n) {
	for (int i = 0; i < n; i++) {
		;
	}


	if (pinfo[n]._prevRank == NULL) {		
		pinfo[n]._scores._rank = rand() % 11 + 1;
	}
	else if (pinfo[n]._prevRank == pinfo[n]._scores._rank)
		randRk(&pinfo[n], n);
	
	
	
}

void inputBodyinfo(struct StudentInfo* pinfo, int n) {
	//Ű�� ������ ���� �Է� �� bmi���
	pinfo[n]._body._height = rand() % 31 + 150.f;
	pinfo[n]._body._weight = rand() % 41 + 30.f;

	pinfo[n]._body._bmi = pinfo[n]._body._weight / (pinfo[n]._body._height * pinfo[n]._body._height *0.0001);
}

void output(struct StudentInfo* pinfo, int n) {
	printf("�� = %d\n��ȣ = %d\n�̸� = %s\n���� = %.2f\n������ = %.2f\nBMI = %.2f\n���� = %d\n���� = %d\n���� = %d\n��� = %.2f\n\n",
		pinfo[n]._class,
		pinfo[n]._no,
		pinfo[n]._name,
		pinfo[n]._body._height,
		pinfo[n]._body._weight,
		pinfo[n]._body._bmi,
		pinfo[n]._scores._subject[KOR],
		pinfo[n]._scores._subject[ENG],
		pinfo[n]._scores._subject[MATH],
		pinfo[n]._scores._aver);
}

void outputRank(struct StudentInfo* pinfo, int n) {
	printf("��ȣ = %d\n�̸� = %s\n���� = %d��\n",
		pinfo[n]._no,
		pinfo[n]._name,
		pinfo[n]._scores._rank);
}

void ShowInfo(struct StudentInfo* pinfo) {
	printf("��ȣ = %d\n�̸� = %s\n���� = %d��\n",
		pinfo->_no,
		pinfo->_name,
		pinfo->_scores._rank);
}

LPSTUDENTINFO FindRank(int find, LPSTUDENTINFO pStudent, int count) {
	int n = 0;
	for (n = 0; n < count; n++) {
		if (find == pStudent[n]._scores._rank)
			return &pStudent[n];		
	}
	return 0;
}
void ShuffleRank(LPSTUDENTINFO pStudent, int count) {
	int n = 0;
	for (n = 0; n < count; n++) {
		int idx = rand() % count;
		int t = pStudent[n]._scores._rank;
		pStudent[n]._scores._rank = pStudent[idx]._scores._rank;
		pStudent[idx]._scores._rank = t;
	}
}
