#include <iostream>

extern int sum(int, int);

int main()
{
	std::cout << "hello world" << std::endl;
	sum(1, 2);
	std::cout << "create a new branch which is named dev" << std::endl;
<<<<<<< HEAD
	std::cout << "master has a commit" << std::endl;
=======
	std::cout << "create a new branch which is named feature1" << std::endl;
	std::cout << "solve confilict" << std::endl;
>>>>>>> feature1
	return 0
}
