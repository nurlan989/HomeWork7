#include "HomeWork7.h"


int main()
{
	//Container<int> left;

	//Container<int> right = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };


	//left.Move(left, right);

	//std::cout << "left: ";
	//for (const auto element : left)
	//{
	//	std::cout << element << " ";
	//}
	//std::cout << std::endl;

	//std::cout << "right: ";
	//for (const auto element : right)
	//{
	//	std::cout << element << " ";
	//}
	//std::cout << std::endl;


	//std::cout << "size left: " << left.size() << std::endl;;
	//std::cout << "size right: " << right.size() << std::endl;

	//=======================================================================


	complexDigit a{ 12.4, 5.3 };

	complexDigit b{1.2, 2.2};

	complexDigit result = std::move(a) + std::move(b);

	complexDigit c{ 3.4, 2.8 };

	complexDigit d{ 1.1, 1.2 };


	std::cout << result << std::endl;

	std::cout << a << std::endl;

	std::cout << b << std::endl;


	result = std::move(c) - std::move(d);

	std::cout << result;
	
}