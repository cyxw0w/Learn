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