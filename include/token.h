//
// Created by Pere on 1/18/26.
//

#ifndef VESPA_TOKEN_H
#define VESPA_TOKEN_H
#include <boost/tokenizer.hpp>
#include <string>
#include <optional>

class token
{
	public:
		explicit token(std::string line);
		void tokenize();
		[[nodiscard]] bool was_properly_tokenized() const;
		boost::tokenizer<boost::char_separator<char>>& get_tokens();

	private:
		std::string line;
		bool was_tokenized = false;
		std::optional<boost::tokenizer<boost::char_separator<char>>> tokens;
};


#endif //VESPA_TOKEN_H