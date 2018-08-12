#include <iostream>
#include <string>
#include <algorithm>
#include <regex>

int main(){
	std::string word;
	std::cin >> word;
	std::transform(word.begin(), word.end(),word.begin(), ::tolower);
	std::regex a ("[a | o | y| e |  u | i]+");
  	word = std::regex_replace (word,a,"");
	std::regex b ("([a-z])");
	word = std::regex_replace(word, b, ".$0");
	std::cout << word << std::endl; 
	return 0;
}
