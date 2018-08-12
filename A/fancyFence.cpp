#include <iostream>

int main(){
	int t;
	std::cin >> t;
	int angle;
	for(int i = 0; i < t; i++){
		std::cin >> angle;
		for(int n = 3; n <= 1000000; n++){
			float a = 180.0*(n-2)/n;
			if(a == angle){
				std::cout << "YES\n";
				break;
			}
			else if(a > angle){
				std::cout << "NO\n";
				break;
			}
			
		}
	}
	return 0;
}
