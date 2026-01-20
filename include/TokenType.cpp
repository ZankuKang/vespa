//
// Created by Pere on 1/20/26.
//

#include "TokenType.h"

const std::unordered_map<std::string, TokenType> keyword_map = {
    {"&&",     TokenType::AND},
    {"else",   TokenType::ELSE},
    {"false",  TokenType::FALSE},
    {"for",    TokenType::FOR},
    {"if",     TokenType::IF},
    {"null",   TokenType::IS_NULL},
    {"||",     TokenType::OR},
    {"return", TokenType::RETURN},
    {"true",   TokenType::TRUE},
    {"while",  TokenType::WHILE},
    {"u32",    TokenType::VESPA_DATATYPE}
};
