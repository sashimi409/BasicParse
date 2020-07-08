#include <iostream>
#include "Word.h"


std::ostream& operator<<(std::ostream& stream, const Word& data)
{
	stream << data.Name;
	return stream;
}
