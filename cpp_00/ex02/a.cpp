#include <iostream>


class A {
	int l;
	public:
	int a() const{
		return 'a';
	};
	int b() {
		l = 2;
		return 'b';
	};
};

int main() {

	const A INC;

	std::cout << INC.a() << std::endl;
	std::cout << INC.b() << std::endl;

}
