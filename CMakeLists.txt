cmake_minimum_required(VERSION 4.0)
project(vespa)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Boost REQUIRED)

include_directories(.)

add_executable(vespa
        include/Lexer.cpp
        include/Lexer.h
        main.cpp
        include/Tokenizer.cpp
        include/Tokenizer.h
        include/TokenType.h
        include/WordToken.cpp
        include/WordToken.h
        include/TokenType.cpp)

target_include_directories(vespa PRIVATE
        ${Boost_INCLUDE_DIRS}
        ${CMAKE_CURRENT_SOURCE_DIR}
)