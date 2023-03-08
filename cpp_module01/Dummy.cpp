#include "Dummy.hpp"

Dummy() : ATarget("Target Practice Dummy"){}

~Dummy(){}

virtual ATarget *clone() const
{
	return new Dummy();
}