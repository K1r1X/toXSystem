#include "MathSystem.h"
#include <string>

using namespace std;

void MathSystem::math()
{
	string tempValueInXSystem{};

	while (true)
	{
		if (value == 1)
		{
			tempValueInXSystem += '1';

			break;
		}

		if (value > (value / system) * system)
		{
			tempValueInXSystem += '1';
		}
		else
		{
			tempValueInXSystem += '0';
		}

		value = value / system;
	}

	round(tempValueInXSystem);
}

void MathSystem::round(string tempValueInXSystem)
{
	string valueInXSystem{};

	for (int i = tempValueInXSystem.length(); i > -1; i--)
	{
		valueInXSystem += tempValueInXSystem[i];
	}

	print(valueInXSystem);
}

void MathSystem::print(string valueInXSystem)
{
	cout << valueInXSystem << endl;
}

MathSystem::MathSystem()
{
	cout << "Enter value: ";
	cin >> value;

	cout << endl;

	cout << "Enter system: ";
	cin >> system;

	math();
}
