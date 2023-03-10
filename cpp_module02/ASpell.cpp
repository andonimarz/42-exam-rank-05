#include "ASpell.hpp"

ASpell::ASpell() {}

ASpell::ASpell(const ASpell &ref) : name(ref.name), effects(ref.effects) {};

ASpell &ASpell::operator=(const ASpell &ref)
{
	name = ref.name;
	effects = ref.effects;
	return *this;
}

ASpell::ASpell(const std::string &name, const std::string &effects) : name(name), effects(effects) {}

ASpell::~ASpell() {}

const std::string &ASpell::getName() const
{
	return name;
}

const std::string &ASpell::getEffects() const
{
	return effects;
}

void ASpell::launch(ATarget const &target) const
{
	target.getHitBySpell(*this);
}