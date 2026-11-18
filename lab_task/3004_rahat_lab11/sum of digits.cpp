

#include <iostream>
int sum(int n) {

	if (n > 0) {
		return((n % 10) + sum(n / 10));
	}
	else
		return 0;
}

int main()
{
	int n = 5724;
	std::cout << "sum of digits : " << sum(n) << std::endl;
	return 0;
}

