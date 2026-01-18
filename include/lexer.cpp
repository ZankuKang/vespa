//
// Created by Pere on 1/18/26.
//

#include "lexer.h"
#include <fstream>
#include <iostream>

lexer::lexer(std::string filename) : filename(std::move(filename)) {}

int lexer::read_file()
{
	std::string vespa_code;
	std::ifstream source(filename);

	while (std::getline(source, vespa_code))
	{
		std::cout << vespa_code << std::endl;
	}
	source.close();
	return 0;
}


