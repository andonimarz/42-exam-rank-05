#include "ASpell.hpp"

ASpell::ASpell() {}

ASpell::ASpell(const std::string &name, const std::string &effects)
{
    this->name = name;
    this->effects = effects;
}

ASpell::ASpell(const ASpell &src)
{
    *this = src;
}

ASpell &ASpell::operator=(const ASpell &src)
{
    this->name = src.getName();
    this->effects = src.getEffects();
    return *this;
}

ASpell::~ASpell() {}

const std::string &ASpell::getName(void) const
{
    return this->name;
}

const std::string &ASpell::getEffects(void) const
{
    return this->effects;
}

void ASpell::launch(const ATarget &src)
{
    src.getHitBySpell(*this);
}
