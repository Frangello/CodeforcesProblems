#include <iostream>

int main(){
	int lenght;
	std::string str;
	std::cin >> lenght >> str;
	for(int i = 0; i < -1; i++){
		if(str[i]=='1' && str[i+1]=='0') str.erase (i,2);
		else if(str[i]=='0' && str[i+1]=='1') str.erase (i,2);
	}
	std::cout <<
