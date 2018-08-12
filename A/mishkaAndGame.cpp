#include <iostream>

int main(){
	int m, c, n;
	int mc = 0;
	int cc = 0;
	std::cin >> n;
	for(int i = 0; i < n; i++){
		std::cin >> m >> c;
		if(m > c) mc++;
		else if(c > m) cc++;
	}
	if(mc > cc) std::cout << "Mishka\n";
	else if(cc > mc) std::cout << "Chris\n";
	else std::cout << "Friendship is magic!^^\n";
	return 0;
}
