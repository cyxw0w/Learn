#pragma once

struct Stat {
	int att;
	int def;
	int hp;
};
struct Monster {
	char name[20];
	struct Stat stat;
};