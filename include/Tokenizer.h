//
// Created by Pere on 1/18/26.
//

#ifndef VESPA_TOKEN_H
#define VESPA_TOKEN_H
#include <boost/tokenizer.hpp>
#include <string>
#include <optional>
#include "WordToken.h"
#include <vector>

#include "WordToken.h"

class Tokenizer
{
	public:
		explicit Tokenizer(std::string line);
		void tokenize();
		[[nodiscard]] bool was_properly_tokenized() const;
		const std::vector<WordToken>& get_tokens() const;

	private:
		std::string line;
		bool was_tokenized = false;
		std::vector<WordToken> tokens;
};

#endif //VESPA_TOKEN_H