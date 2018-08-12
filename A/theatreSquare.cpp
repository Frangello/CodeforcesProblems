#include <iostream>

int main(){
	long long n,m,a;
	long long num = 0; 
	long long num2 = 0;
	std::cin >> n >> m >> a;
	if(a == 1) {
		num =n * m;
		std::cout << num;
	}
	else{
		while(num*a < n){
			num++;
			if(n != m){
				while(num2*a < m)num2++;
			}
		else num2 = num;
		}
	std::cout << num * num2;
	}
	return 0;
}
