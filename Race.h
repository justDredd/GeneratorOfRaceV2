#pragma once

#include <iostream>
#include <string>
#include <windows.h>
#include <random>
#include <chrono>
#include <fstream>
#include <set>


class Race {
public:
	Race();
	int Random(int min, int max);
	void GiveSkills();
	void GiveParam();
	void DefineCategory();
	void Output();
	void Debug();
	void GiveUlt();
	//void ExceptionHandler();
private:
	std::string name, category, ultimate;
	int requiredLvl, maxLvl, amountSkills, ultCooldown;
	std::vector<int> skillsID, usedID;
	std::vector<std::string> skillNames, skillParam, skills, skillDesc, ultimates, enemyPart, typeUlt;
};