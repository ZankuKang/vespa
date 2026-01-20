//
// Created by Pere on 1/18/26.
//

#ifndef VESPA_TOKENTYPE_H
#define VESPA_TOKENTYPE_H

#include <unordered_map>
#include <string>

enum class TokenType
{
	LEFT_PAREN, RIGHT_PAREN, LEFT_BRACE, RIGHT_BRACE,
	COMMA, DOT, MINUS, PLUS, SEMICOLON, SLASH, STAR,

	// One or two character tokens.
	BANG, BANG_EQUAL,
	EQUAL, EQUAL_EQUAL,
	GREATER, GREATER_EQUAL,
	LESS, LESS_EQUAL,

	// Literals.
	IDENTIFIER, STRING, NUMBER,

	// Keywords.
	AND, ELSE, FALSE, FOR, IF, IS_NULL, OR,
	RETURN, TRUE, VESPA_DATATYPE, WHILE,
	VESPA_EOF
};

extern const std::unordered_map<std::string, TokenType> keyword_map;


#endif //VESPA_TOKENTYPE_H