// ITV_LAB4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "EditDistance.h"
#include <iostream>

using namespace std;

int main()
{
	string str1 = "wrld";

	string dictionary[] = { "world", "word", "car", "cow" };
	int minEditDistance = editDistance(str1, dictionary[0]);
	int index = 0;

	for (int i = 0; i < 4; ++i) {
		int currenEditDistance = editDistance(str1, dictionary[i]);

		if (minEditDistance > currenEditDistance) {
			minEditDistance = currenEditDistance;
			index = i;
		}
	}

	cout << dictionary[index] << endl;


	cin.get();
    return 0;
}

