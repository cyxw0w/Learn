#pragma once

enum eSubject {
	KOR = 0,
	ENG,
	MATH,

	sub_count
};

struct StudentScoreInfo {
	int _class;
	int _no;
	char _name[20];
	int _subject[sub_count];
	float _aver;
	int _rank;
};

typedef struct ScoreInfo {	
	int _subject[sub_count];
	float _aver;
	int _rank;
}SCOREINFO, *LPSCOREINFO;

typedef struct BodyInfo {
	float _height;
	float _weight;
	float _bmi;
}BODYINFO, *LPBODYINFO;

typedef struct StudentInfo {
	int _class;
	int _no;
	char _name[20];
	SCOREINFO _scores;
	BODYINFO _body;
	struct StudentInfo* _prevRank;
	struct StudentInfo* _nextRank;
}STUDENTINFO, *LPSTUDENTINFO;