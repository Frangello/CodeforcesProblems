#include <iostream>

int main(){
	int m, n;
	int count = 0;
	std::cin >> m;
	std::cin >> n;
	if(m==1 && n==1) std::cout << 0 << std::endl;
	else if(m%2 == 0 && n%2==0) std::cout << (m * n/2) << std::endl;
	else if(m%2 == 1 && n%2==1) std::cout << (m * (n/2)) + (m/2 * 1) << std::endl;
	else if(m%2==0) std::cout << ((m/2) * n) << std::endl;
	else if(n%2==0) std::cout << ((n/2) * m) << std::endl;
 	return 0;
}
