#include "stdafx.h"
#include "EditDistance.h"
#include <iostream>
#include <string>
#include <algorithm>

int editDistance(const std::string &str1, const std::string &str2) {
	if (str1.empty() || str2.empty())
		return str2.length() + str1.length();

	int n = str1.length();
	int m = str2.length();

	int ** a = new int*[n + 1];

	for (int i = 0; i <= n; ++i) {
		a[i] = new int[m + 1];
	}

	for (int i = 0; i <= n; ++i) {
		for (int j = 0; j <= m; ++j) {
			if (i == 0)a[i][j] = j;
			if (j == 0)a[i][j] = i;
		}
	}

	int edit = 1;

	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= m; ++j) {
			edit = str1.at(i - 1) == str2.at(j - 1) ? 0 : 1;
			a[i][j] = std::min({ a[i - 1][j] + 1, a[i][j - 1] + 1, a[i - 1][j - 1] + edit });
		}
	}

	/*for (int i = 0; i <= n; i++)
	{
	for (int j = 0; j <= m; j++)
	{
	cout << a[i][j] << " ";
	}
	cout << endl;
	}*/

	int editDistance = a[n][m];

	for (int j = 0; j <= n; ++j) {
		delete[] a[j];
	}

	delete[] a;
	return editDistance;
}

//const std::string &str1, const std::string &str2