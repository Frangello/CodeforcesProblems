#include <iostream>
#include <string>

int main(){
	int n;
	int count = 0;
	std::cin >> n;
	std::string s;
	char c;
	for(int i = 0; i < n; i++){
		int sum = 0;
		for(int j = 0; j < 3; j++){
			std::cin >> c;
			if(c == '1') sum++;
		}
		if(sum >= 2) count++;
	}
	std::cout << count << std::endl;
	return 0;
} 
