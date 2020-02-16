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
	////printf("구조체 크기 = %d\n", sizeof(info1));
	//char* str = "홍길동";
	//for (n = 0; str[n] != '\0'; n++) {
	//	info1._name[n] = str[n];
	//}
	//info1._name[n] = '\0';
	//printf("이름 : %s\n", info1._name);
	//strcpy_s(info1._name, sizeof(info1._name), "홍길동");

	//struct StudentScoreInfo infos[3];
	//
	//char* names[] = { {"홍길동"}, {"김철수"},{"이영희"} };
	// 점수는 랜덤으로 30~100 임의의 점수.
	//
	//입력
	//for (n = 0; n < sub_count; n++) 
	//	inputInfo(&infos, &names, n);
	//
	//출력	
	//for (n = 0; n < sub_count; n++)
	//	printScore(&infos, n);

	//주어진 이름
	char* names[] = { {"홍길동"}, {"김철수"},{"이영희"}
		, {"김민철"}, {"송해영"}, {"박찬수"}, {"강병주"}
		, {"정민교"}, {"이병주"}, {"윤수영"}, NULL };
	STUDENTINFO Infos[10] = { 0, };
	LPSTUDENTINFO first = 0;
	//입력
	for (n = 0; names[n] != NULL; n++) {
		input(&Infos, &names, n);
		inputBodyinfo(&Infos, n);

		LPSTUDENTINFO pInfo = Infos + n;
		pInfo->_no = n + 1;
		pInfo->_scores._rank = n + 1;
	}

	//순위 섞기
	ShuffleRank(Infos, 10);

	//링크 걸기
	for (n = 0; n < 10; n++) {
		LPSTUDENTINFO pInfo = Infos + n;
		pInfo->_prevRank = FindRank(pInfo->_scores._rank - 1, Infos, 10);
		pInfo->_nextRank = FindRank(pInfo->_scores._rank + 1, Infos, 10);
	}

	//번호 출력
	for (n = 0; n < 10; n++) {
		ShowInfo(&Infos[n]);
		printf("\n");
	}

	printf("===================================================================\n\n");
	//순위 출력
	for (n = 0; n < 10; n++ ) {
		if (1 == Infos[n]._scores._rank)
			first = &Infos[n];
	}
	while (first != 0) {
		ShowInfo(first);
		first = first->_nextRank;
		printf("\n");
	}

	//출력
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
	//반
	pinfo[n]._class = 1;
	//이름
	strcpy_s(pinfo[n]._name, sizeof(pinfo[n]._name), str[n]);
	//번호
	pinfo[n]._no = n + 1;
	//점수
	for (int i = 0; i < sub_count; i++) {
		pinfo[n]._subject[i] = rand() % 71 + 30;
		t += pinfo[n]._subject[i];
	}
	//평균
	pinfo[n]._aver = t / 3.0f;
}

void printScore(struct StudentScoreInfo* pinfo, int n) {	
	printf("반 = %d\n이름 = %s\n번호 = %d\n국어 = %d\n영어 = %d\n수학 = %d\n평균 = %.2f\n\n",
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
		//첫 점수가 1등
		pinfo[n]._rank = cnt;
		if (max < pinfo[n]._aver) {
			max = pinfo[n]._aver;
			//1등이 바뀐 경우
			var = pinfo[n + 1]._rank;
			pinfo[n + 1]._rank = pinfo[n]._rank;
			pinfo[n]._rank = var;
		}
	}

}

//ScoreInfo
//우선 임의의 랜덤 석자 
void input(struct StudentInfo* pinfo, char** str, int n) {
	int t = 0;
	//반
	pinfo[n]._class = 1;
	//이름
	strcpy_s(pinfo[n]._name, sizeof(pinfo[n]._name), str[n]);
	//번호
	pinfo[n]._no = n + 1;
	//점수
	for (int i = 0; i < sub_count; i++) {
		pinfo[n]._scores._subject[i] = rand() % 71 + 30;
		t += pinfo[n]._scores._subject[i];
	}
	//평균
	pinfo[n]._scores._aver = t / 3.0f;	
}
//순위지정할시, 다른 순위랑 겹치지 않게 지정
//전 랭크를 순차적으로 검색하여 중복랭크 체크
//중복되지 않는 수에 한해서 재귀적으로 함수를 호출, 랭크지정
//n은 현재 지정할 랭크 위치기 때문에 0~n까지 검색?
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
	//키와 몸무게 랜덤 입력 후 bmi계산
	pinfo[n]._body._height = rand() % 31 + 150.f;
	pinfo[n]._body._weight = rand() % 41 + 30.f;

	pinfo[n]._body._bmi = pinfo[n]._body._weight / (pinfo[n]._body._height * pinfo[n]._body._height *0.0001);
}

void output(struct StudentInfo* pinfo, int n) {
	printf("반 = %d\n번호 = %d\n이름 = %s\n신장 = %.2f\n몸무게 = %.2f\nBMI = %.2f\n국어 = %d\n영어 = %d\n수학 = %d\n평균 = %.2f\n\n",
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
	printf("번호 = %d\n이름 = %s\n석자 = %d등\n",
		pinfo[n]._no,
		pinfo[n]._name,
		pinfo[n]._scores._rank);
}

void ShowInfo(struct StudentInfo* pinfo) {
	printf("번호 = %d\n이름 = %s\n석자 = %d등\n",
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
