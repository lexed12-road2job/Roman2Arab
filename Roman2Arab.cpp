// Roman2Arab.cpp: определяет точку входа для приложения.
//
// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

//#include <iostream>
#include "string"
#include "map"
#include "Roman2Arab.h"

int main()
{
	MyClass R2A;

	R2A.Test(R2A.Roman2arab("III"), 3);
	R2A.Test(R2A.Roman2arab("LVIII"), 58);
	R2A.Test(R2A.Roman2arab("MCMXCIV"), 1994);

	R2A.Test(R2A.Roman2arab("XL"), 40);
	R2A.Test(R2A.Roman2arab("XC"), 90);
	R2A.Test(R2A.Roman2arab("CM"), 900);
	R2A.Test(R2A.Roman2arab("MMMCMXCIX"), 3999);

	std::cout << R2A.Roman2arab("Iffesrf") << std::endl;
	std::cout << R2A.Roman2arab("Iv") << std::endl;
	std::cout << R2A.Roman2arab("IIi") << std::endl;
	std::cout << R2A.Roman2arab("fdefae") << std::endl;
	std::cout << R2A.Roman2arab("1234") << std::endl;
	std::cout << R2A.Roman2arab("Iffesrf") << std::endl;

}

