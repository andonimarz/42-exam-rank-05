#include "Fwoosh.hpp"

Fwoosh::Fwoosh()
{
    this->name = "Fwoosh";
    this->effects = "fwooshed";
}

Fwoosh::~Fwoosh() {}

ASpell *Fwoosh::clone(void) const
{
    return new Fwoosh();
}
