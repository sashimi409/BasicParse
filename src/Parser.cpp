#include <string>
#include <iostream>
#include <vector>

#include "../includes/Parser.h"
#include "Word.h"
#include "Verb.h"

Parser::Parser()
{

}

//Will split string and clean it for input
 void Parser::Tokenize(std::string input, std::vector<std::string> Tokens)
{

	 std::cout << "Tokens identified are:" << std::endl;
	 for (int i = 0; i++; i < Tokens.size())
	 {
		 std::cout << Tokens[i] << std::endl;
	 }
}

 //Will check against words available and make sure their are no problems
void Parser::BuildCommand(std::vector<std::string> Tokens, std::vector<Word> Command)
{
	std::cout << "Words identified are:" << std::endl;
	for (int i = 0; i++; i < Command.size())
	{
		std::cout << Command[i] << std::endl;
	}

};


//Will run command
//Items will invoke command function, and check for verb compatability
//will call the verb function and pass all nouns for universal words
void Parser::RunCommand(std::vector<Word> Command)
{

};


void Parser::Parse(std::string input)
{
	//Tokenize string first
	std::vector<std::string> Tokens;
	std::vector<Word> Command;
	

	Tokenize(input, Tokens);

	
	//turn tokens into executable command
	BuildCommand(Tokens, Command);
	

	//Run Command
	RunCommand(Command);


}
