#include <iostream>
#include <string>

int main(){
	int count = 0;
	int n;
	std::string s;
	std::cin >> n;
	for(int i = 0; i < n; i++){
		std::cin >> s;
		if(s.find("+")!=std::string::npos) count++;
		if(s.find("-")!=std::string::npos) count--;
	}
	std::cout << count << std::endl;
	return 0;
} 
