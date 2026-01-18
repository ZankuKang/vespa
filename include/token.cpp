//
// Created by Pere on 1/18/26.
//

#include "token.h"

token::token(std::string line) : line(std::move(line)) {}

void token::tokenize()
{
	// It's not interesting to tokenize an empty line, don't you think?
	if (line != "\n")
	{
		boost::char_separator<char> separator(" ");
		tokens.emplace(line, separator);
		was_tokenized = true;
	}
}

bool token::was_properly_tokenized() const
{
	return token::was_tokenized;
}

boost::tokenizer<boost::char_separator<char>>& token::get_tokens()
{
	return tokens.value();
}
