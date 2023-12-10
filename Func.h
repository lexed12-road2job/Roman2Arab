#pragma once

#include <iostream>
#include "string"
#include "map"
#include "exception"

class MyClass
{
public:
	MyClass();
	~MyClass();

	int Roman2arab(std::string s)
	{
		int ans = 0;
		bool correct_flag = 1;
		for (int i = 0; i < s.length(); i++)
		{
			try
			{
				m.at(s[i]);
			}
			catch (const std::exception& e)
			{
				std::cerr << "Caught: " << s[i] << "- wrong roman number" << std::endl;
			}
		}

		for (int i = 0; i < s.length(); i++)
		{
			if (correct_flag) {
				for (int i = 0; i < s.length(); i++)
				{
					if (m[s[i]] < m[s[i + 1]]) {
						ans -= m[s[i]];
					}
					else if (m[s[i]] >= m[s[i + 1]]) {
						ans += m[s[i]];
					}
					else
					{
						std::cout << "Wrong roman number" << std::endl;
						break;
					}
				}
			}
			return ans;
		}
	}
	void Test(int roman, int arab) {
		if (roman == arab)
			std::cout << arab << " OK" << std::endl;
		else
			std::cout << arab << " Error" << std::endl;
	}

private:
	std::map<char, int> m;
};

MyClass::MyClass()
{
	m['I'] = 1;
	m['V'] = 5;
	m['X'] = 10;
	m['L'] = 50;
	m['C'] = 100;
	m['D'] = 500;
	m['M'] = 1000;
}

MyClass::~MyClass()
{
}
