//
// Created by pere on 1/18/26.
//

#include "WordToken.h"

WordToken::WordToken(TokenType type, std::string lexeme) : type(type), lexeme(std::move(lexeme)) {}

TokenType WordToken::getType() const
{
	return type;
}

std::string WordToken::getLexeme() const
{
	return lexeme;
}

std::ostream& operator<<(std::ostream& os, const WordToken& token)
{
	return os << "Token(" << static_cast<int>(token.getType()) << ", " << token.getLexeme() << ")" ;
}