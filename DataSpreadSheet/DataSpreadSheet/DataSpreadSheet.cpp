// DataSpreadSheet.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <fstream>
#include <cmath>
#include <random>
#include <functional>

int main()
{
	std::ofstream file;
	file. open("Data.csv");
	std::ofstream fileTXT;
	fileTXT.open("Data.txt");
	
	std::default_random_engine gen;
	std::uniform_int_distribution<int> dis(-800, 800);
	auto dice = std::bind(dis, gen);

	int input;

	std::cin >> input;

	for (int i = 0; i < input; i++)
	{
		file << dice() << ", " << dice() << std::endl;
		fileTXT << dice() << ", " << dice() << std::endl;
	}

    return 0;
}

