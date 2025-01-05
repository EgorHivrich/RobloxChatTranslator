#ifndef __PARSER_HPP__
#define __PARSER_HPP__

#include <vector>
#include <string>

struct Token {
    std::string _value;

    enum class TokenKind { 
        Dash, DoubleDash, Argument
    } _kind;

    Token(TokenKind kind, const std::string& value)
      : _kind(kind), _value(value) { }
};

class ArgumentParser {
public:
    ArgumentParser(const std::string& text)
      : _text(text) { }

    std::vector<std::string> parse(void); 

private:
    std::string _text;
};

#endif // parser.hpp