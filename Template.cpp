#include <iostream>
//int max_int(int a, int b)
//{
//	return a > b ? a : b;
//}
//
//long max_long(long a, long b)
//{
//	return a > b ? a : b;
//}
//
//float max_float(float a, float b)
//{
//	return a > b ? a : b;
//}

template<class T>
T max(T a, T b)
{
	return a > b ? a : b;
}

int main()
{
	float a = 10.1;
	float b = 10.2;

	//std::cout << "max: " << max_int(a, b) << std::endl;
	//std::cout << "max: " << max_long(a, b) << std::endl;
	//std::cout << "max: " << max_float(a, b) << std::endl;

	std::cout << "max: " << max(a, b) << std::endl;
	std::cout << "max: " << max(a, b) << std::endl;
	std::cout << "max: " << max(a, b) << std::endl;

} 


/*
・テンプレート…型や定数をパラメータ化して、コンパイル時に実体化する仕組み
*/