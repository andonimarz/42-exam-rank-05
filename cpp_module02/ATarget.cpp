#include "ATarget.hpp"

ATarget::ATarget() {}

ATarget::ATarget(const ATarget &ref) : type(ref.type) {}

ATarget &ATarget::operator=(const ATarget &ref)
{
	type = ref.type;
	return *this;
}

ATarget::ATarget(const std::string &type) : type(type){}

ATarget::~ATarget() {}

const std::string &ATarget::getType() const
{
	return type;
}

void ATarget::getHitBySpell(ASpell const &spell) const
{
	std::cout << type << " has been " << spell.getEffects() << "!\n";
}