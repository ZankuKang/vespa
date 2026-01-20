//
// Created by pere on 1/18/26.
//

#ifndef VESPA_WORDTOKEN_H
#define VESPA_WORDTOKEN_H
#include <string>
#include <iostream>
#include "TokenType.h"

class WordToken
{
	public:
	explicit WordToken(TokenType type, std::string lexeme);
	[[nodiscard]] TokenType getType() const;
	[[nodiscard]] std::string getLexeme() const;

	private:
	TokenType type;
	std::string lexeme;
};

std::ostream& operator<<(std::ostream& os, const WordToken& token);

#endif //VESPA_WORDTOKEN_H