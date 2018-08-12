#include <iostream>
#include <string>

int main(){
	int n;
	std::string flag = "NO";
	std::string row;
	std::cin >> n;
	std::string rows[n];
	for(int i = 0; i < n; i++){
		std::cin >> row;
		if(row[0] == 'O' && row[1] == 'O'){
			if(flag == "NO") rows[i] = "++" + row.substr(2,3);
			else rows[i] = row;
			flag = "YES";
		}
		else if(row[3]== 'O' && row[4] == 'O'){
			if(flag == "NO") rows[i] = row.substr(0,3).append("++");
			else rows[i] = row;
			flag = "YES";
		}
		else rows[i] = row;
	}
	std::cout << flag << std::endl;
	if(flag == "YES") {for(std::string r : rows) std::cout << r << std::endl;}
	return 0;
}
