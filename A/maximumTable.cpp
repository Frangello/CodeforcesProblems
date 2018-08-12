#include <iostream>

int main(){
	int n;
	std::cin >> n;
	int a[n][n];
	a[0][0] = 1;
	for(int i=1; i<n; i++){
		for(int j=1; j<n; j++){
			a[0][j] = 1;
			a[i][0] = 1;
			a[i][j] = a[i][j-1] + a[i-1][j];
		}
	}
	std::cout << a[n-1][n-1] << std::endl;
	return 0;
}
