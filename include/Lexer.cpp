//
// Created by Pere on 1/18/26.
//

#include "Lexer.h"
#include "Tokenizer.h"
#include <fstream>
#include <iostream>

Lexer::Lexer(std::string filename) : filename(std::move(filename))
{
}

int Lexer::read_file()
{
	std::string vespa_code;
	std::ifstream source(filename);

	while (std::getline(source, vespa_code))
	{
		Tokenizer tokenizer { Tokenizer { vespa_code } };
		tokenizer.tokenize();
		if (tokenizer.was_properly_tokenized())
		{
			std::cout << "Code line properly tokenized" << std::endl;
			for (const auto& t : tokenizer.get_tokens())
			{
				std::cout << t << std::endl;
			}
		}
	}
	source.close();
	return 0;
}


