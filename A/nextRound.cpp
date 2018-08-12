#include <iostream>

int main(){
	int n, k, score;
	int count = 0;
	int record = 0;
	std::cin >> n;
	std::cin >> k;
	for(int i = 0; i < n; i++){
		std::cin >> score;
		if(i == k-1)
			record = score;
		if(score > 0 && score >= record)
			count++;
	}
	std::cout << count;
	return 0;
}
	 
