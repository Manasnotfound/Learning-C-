#include <iostream>
#include "Log.h"

int Multily(int a, int b)
{
	return a * b;
}

void MultiplyAndLog(int a, int b)
{
	int result = Multily(a, b);
	std::cout << "The result of multiplying " << a << " and " << b << " is: " << result << std::endl;
}

int main()
{
<<<<<<< HEAD
	MultiplyAndLog(5, 10);
	MultiplyAndLog(3, 7);
	MultiplyAndLog(5, 5);
=======
	InitLog();
	Log("Hello, World!");
>>>>>>> c8724979aa1df6a72e97911561168cba64728c6d
    std::cin.get();
}