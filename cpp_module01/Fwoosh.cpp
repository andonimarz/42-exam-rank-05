#include "Fwoosh.hpp"

Fwoosh() : ASpell("Fwoosh", "fwooshed"){}
~Fwoosh(){}

virtual ASpell *clone() const
{
	return new Fwoosh();
}