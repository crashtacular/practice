// CodingPractice.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <map>
#include <iostream>
#include <vector>
#include <iostream>

using namespace std;

int MostFreqInt(std::vector<int> input)
{
	map<int, int> hash;
	int mostfreq = 0;
	int max = 0;
	for (int i = 0; i < input.size(); i++)
	{
		hash[input[i]]++;

	}
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



int main()
{
	static const int arr[] = {1,2,1,1,1,1,2,2,3,1,41,2,25,2,3};
	vector<int> vec(arr, arr + sizeof(arr) / sizeof(arr[0]));

	cout << "MostFrequentInt: " << MostFreqInt(vec) << endl;
	char c;
	cin >> c;
    return 0;
}

