#include <iostream>

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
	MultiplyAndLog(5, 10);
	MultiplyAndLog(3, 7);
	MultiplyAndLog(5, 5);
    std::cin.get();
}