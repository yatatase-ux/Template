#include <iostream>

int max_int(int a, int b)
{
	return a > b ? a : b;
}

long max_long(long a, long b)
{
	return a > b ? a : b;
}

float max_float(float a, float b)
{
	return a > b ? a : b;
}

template<class T>
T max(T a, T b)
{
	return a > b ? a : b;
}

template<class T>
void max_out(T a, T b)
{
	T n = (a > b) ? a : b;

	std::cout << "max: " << n << std::endl;
}

//----------------------------------------------------------------------------------

template<typename T, std::size_t N>
class StaticArray
{
	T data[N];

public:
	constexpr T& operator[](std::size_t i) { return data[i]; }
	constexpr const T& operator[](std::size_t i) const { return data[i]; }
	constexpr std::size_t size() const { return N; }
};

//-----------------------------------------------------------------------------------
// テンプレートの特殊化
template<typename T> struct IsPointer {
	static constexpr bool value = false;
};

template<typename U> struct IsPointer<U*> {
	static constexpr bool value = true;
};

struct NoPointer : IsPointer<int> {

};

//-----------------------------------------------------------------------------------
// 演習①：配列型を判定する(期待する結果：0, 1, 1)
template<typename T> struct IsArray {
	static constexpr bool value = false;
};

template<typename U, std::size_t N> struct IsArray<U[N]> {
	static constexpr bool value = true;
};

//-----------------------------------------------------------------------------------
// 演習②：const型を判定する(期待する結果：0, 1, 0, 1)


//===================================================================================
int main()
{

//	int a = 20;
//	int b = 21;
//	float c = 10.1f;
//	float d = 10.2f;
//
//	//std::cout << "max: " << max_int(a, b) << std::endl;
//	//std::cout << "max: " << max_long(a, b) << std::endl;
//	//std::cout << "max: " << max_float(a, b) << std::endl;
//
//	std::cout << "max: " << max(a, b) << std::endl;
//	std::cout << "max: " << max(c, d) << std::endl;
//
//	std::cout << std::endl;
//
//	max_out(a, b);
//	max_out(c, d);

//-------------------------------------------------------------------------------

	//StaticArray<int, 3> data;

	//for (auto i = 0; i < data.size(); i++)
	//{
	//	data[i] = i;
	//}

	//for(int i = 0; i < 550; i++)
	//{
	//	std::cout << i << " : " <<  data[i] << std::endl;
	//}

//------------------------------------------------------------------------------

	//std::cout << IsPointer<int>::value << std::endl;
	//std::cout << IsPointer<int*>::value << std::endl;
	//std::cout << IsPointer<float>::value << std::endl;
	//std::cout << IsPointer<float*>::value << std::endl;
	//std::cout << NoPointer::value << std::endl;

//------------------------------------------------------------------------------

	std::cout << IsArray<int>::value << std::endl;
	std::cout << IsArray<int[10]>::value << std::endl;
	std::cout << IsArray<float[5]>::value << std::endl;

} 


/*
・テンプレート…型や定数をパラメータ化して、コンパイル時に実体化する仕組み
*/