#include <iostream>

int main(){
	int d1, d2, d3;
	int distance = 0;
	std::cin >> d1 >> d2 >> d3;
	if(d1 < d2) {
		distance += d1;
		if(d1+d2 >= d3) distance+= d3;
		else if(d1+d2 < d3) distance += d1 + d2; 
		if(d1+d3 >= d2 )distance += d2;
		else if(d1+d3<d2) distance+= d1+d3;
	}
	else {
		distance+= d2;
		if(d1+d2 >= d3) distance+= d3;
		else if(d1+d2 < d3) distance += d1 + d2; 
		if(d2+d3 >= d1 )distance += d1;
		else if(d2+d3 < d1) distance+= d2+d3;
	}
	std::cout << distance << std::endl;
	return 0;
} 
