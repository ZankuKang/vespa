//
// Created by Pere on 1/18/26.
//
#include <include/lexer.h>
#include <iostream>


int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		std::cerr << "Usage: lexer [filename]" << std::endl;
		return 1;
	}

	std::string filename = argv[1];
	auto vespa_lexer = lexer(filename);
	auto result = vespa_lexer.read_file();
	std::cout << "The result of reading the file is : " << result << std::endl;
}