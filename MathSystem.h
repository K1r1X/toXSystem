#pragma once

#include <iostream>

using namespace std;

class MathSystem
{
private:
	int value{};

	int system{};

	void math();

	void round(string tempValueInXSystem);

	void print(string valueInXSystem);
public:
	MathSystem();
};

