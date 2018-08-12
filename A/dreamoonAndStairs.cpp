#include <iostream>

int main(){
	int n, m;
	int steps = -1;
	std::cin >> n >> m;
	for(int i = 1; i <= n; i++){
		if(i% m == 0){
			if(i * 2 >= n){steps = i; break;}
		}
	}
	std::cout << steps << std::endl;
	return 0;
}
