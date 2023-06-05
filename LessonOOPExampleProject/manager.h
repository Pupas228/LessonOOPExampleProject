#pragma once
#include "group.h"
#include "Human.h"

class Manager {
public:
	static calculate_avg_age(Human** humans, int size);
	static float calcStudentsAvgAge(Group group);
	static float calcStudentsAvgMark(Group group);
	static Student findBestStudent(Group group);
	static Student findWorstStudent(Group group);
};