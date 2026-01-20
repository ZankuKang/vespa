//
// Created by Pere on 1/18/26.
//

#ifndef VESPA_LEXER_H
#define VESPA_LEXER_H
#include <string>
#include <utility>

class Lexer
{

	public:
		explicit Lexer(std::string filename);
		int read_file();

private:
	std::string filename;
};


#endif //VESPA_LEXER_H