//
// Created by Pere on 1/18/26.
//

#include "lexer.h"
#include "token.h"
#include <fstream>
#include <iostream>

lexer::lexer(std::string filename) : filename(std::move(filename))
{
}

int lexer::read_file()
{
	std::string vespa_code;
	std::ifstream source(filename);

	while (std::getline(source, vespa_code))
	{
		token tokenizer { token { vespa_code } };
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


