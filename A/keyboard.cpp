#include <iostream>
#include <algorithm>

int main(){
	char dir;
	std::string answer;
	std::string input;
	std::string a = " qwertyuiop asdfghjkl; zxcvbnm,./ ";
	std::cin >> dir;
	std::cin >> input;
	for(char c : input){
		if(dir == 'R'){
			int i = a.find(c);
			if(a[i-1] != ' ') answer +=a[i-1];
			else answer+=a[i];
		}
		else{
			int i = a.find(c);
			if(a[i+1] != ' ') answer+=a[i+1];
			else answer+=a[i];
		}
	}
	std::cout << answer << std::endl;
	return 0;
}
