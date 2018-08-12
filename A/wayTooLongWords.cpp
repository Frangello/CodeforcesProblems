#include <iostream>

int main(){
	int n;
	std::string word;
	std::string  newWord;
	std::cin >> n;
	for(int i = 0; i < n; i++){
		std::cin >> word;
		if(word.size() > 10){
			newWord = word.front() +std::to_string(word.size() -2) + word.back();
		}
		else newWord = word; 
		std::cout  << newWord << std::endl;
	}

	return 0;
}
