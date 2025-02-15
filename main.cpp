#include <sstream>
#include <iostream>
#include <string>
#include <fstream>

int main() {
	std::ifstream inFile;
	inFile.open("data.csv");

	std::string line;
	while (std::getline(inFile, line)){
		std::stringstream sline(line);
		
		std::string num1Str, num2Str, word;

		std::getline(sline, num1Str, ',');
		std::getline(sline, num2Str, ',');
		std::getline(sline, word);

		std::stringstream sum;
		int num1;
		int num2;

		sum << num1Str;
		sum >> num1;
		sum.clear();

		sum << num2Str;
		sum >> num2;

		int total = num1 + num2;
		for(int i = 0; i < total; i++){
			std::cout << word;
			if(i < total - 1){
				std::cout << " ";
			}
		}
		std::cout << std::endl;
        } 

	inFile.close();
	return 0;
}
