#include <iostream>
#include <tgmath.h>

int main(){
	int num;
	std::cin >> num;
	if(num %2  == 0 && num > 2) std::cout << "YES";
	else std::cout << "NO";
	return 0;
}