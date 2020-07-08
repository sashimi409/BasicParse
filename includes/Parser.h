#ifndef PARSER_H
#define PARSER_H

#include <unordered_map>
#include <string>
#include <vector>

#include "../src/Verb.h"
#include "Object.h"
class Parser {

	std::unordered_map<std::string, Verb> Verbs;

	void Tokenize(std::string, std::vector<std::string>);
	void BuildCommand(std::vector<std::string>, std::vector<Word>);
	void RunCommand(std::vector<Word>);
    

public:
		Parser();
		void Parse(std::string);
        void Register(Object*, std::vector<std::string>);
			



};


#endif // !PARSER_H


