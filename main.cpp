#include <iostream>
#include <sstream>
#include <fstream>

int main(int argc, char** argv) {
	if (argc != 3) {
		std::cout << "Usage: cosmetify <original> <destination>";
		exit(1);
	}

	std::ifstream infile(argv[1]);
	std::stringstream buffer;
	buffer << infile.rdbuf();
	std::string str(buffer.str());
	infile.close();

	std::cout << str;

	std::ofstream outfile(argv[2]);
	outfile << str.c_str();
	outfile.close();

	return 0;

}