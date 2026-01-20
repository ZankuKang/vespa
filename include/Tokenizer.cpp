//
// Created by Pere on 1/18/26.
//

#include "Tokenizer.h"
#include <regex>
#include <string>
#include "TokenType.h"
#include "WordToken.h"


Tokenizer::Tokenizer(std::string line) : line(std::move(line)) {}

void Tokenizer::tokenize()
{
	tokens.clear();
	// It's not interesting to tokenize an empty line, don't you think?
	std::regex re("(\\w+)", std::regex_constants::_S_ECMAScript | std::regex_constants::icase);
	auto first_token = std::sregex_iterator(line.begin(), line.end(), re);
	auto last_token = std::sregex_iterator();
	if (first_token != last_token)
	{
		for (std::sregex_iterator t = first_token; t != last_token; ++t)
		{
			std::smatch match = *t;
			std::string word = match.str();
			TokenType token_type;
			auto token_pair = keyword_map.find(word);
			if (token_pair != keyword_map.end())
			{
				token_type = token_pair->second;
			}
			else token_type = TokenType::IDENTIFIER;
			tokens.push_back(WordToken(token_type, word));
		}
	}
	was_tokenized = true;
}

bool Tokenizer::was_properly_tokenized() const
{
	return Tokenizer::was_tokenized;
}

const std::vector<WordToken>& Tokenizer::get_tokens() const
{
	return tokens;
}
