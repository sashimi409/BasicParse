#ifndef WORD_H
#define WORD_H

#include <iostream>
#include "../includes/Object.h"

class Word
{
	//class used for parser inheritance

    Object* Reference;
    std::string Name; 

public:
	

	friend std::ostream& operator<<(std::ostream& stream, const Word& data);



};

#endif
