// CodingPractice.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <map>
#include <iostream>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int MostFreqInt(vector<int> input)
{
	map<int, int> hash;
	int mostfreq = 0;
	int max = 0;
	for (int i = 0; i < input.size(); i++) hash[input[i]]++;
	for (auto const& entry : hash)
	{
		//cout << entry.first << " " << entry.second << endl;
		if (entry.second > max)
		{
			max	= entry.second;
			mostfreq = entry.first;
		}
	}
	return mostfreq;
}

bool ArrayRotated(vector<int>& x, vector<int>& y)
{
	if (x.size() != y.size()) return false;
	vector<int> z = x;
	z.insert(z.end(), x.begin(), x.end());

	auto search = find(z.begin(), z.end(), y[0]);
	if (search == z.end()) return false;
	
	for (vector<int>::iterator it = y.begin(); it != y.end(); ++it)
	{
		if (*it != *search) return false;
		else ++search;
	}

	return true;
	//return std::includes(z.begin(),z.end(),x.begin(),x.end());
}



int main()
{
	static const int arr[] = {1,2,1,1,1,1,2,2,3,1,41,2,25,2,3};
	static const int arr2[] = {3,1,41,2,25,2,3,1,2,1,1,1,1,2,2,};
	vector<int> vec(arr, arr + sizeof(arr) / sizeof(arr[0]));
	vector<int> vec2(arr2, arr2 + sizeof(arr2) / sizeof(arr2[0]));

	cout << "MostFrequentInt: " << MostFreqInt(vec) << endl;
	cout << "Array Rotated: " << ArrayRotated(vec, vec2) << endl;

	char c;
	cin >> c;
    return 0;
}

