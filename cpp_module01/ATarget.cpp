#include "ATarget.hpp"

ATarget(){}

ATarget(const ATarget &ref) : type(ref.type) {}

ATarget &operator=(const ATarget &ref)
{
	type = ref.type;
	return *this;
}

ATarget(const std::string &type) : type(type){}


const std::string &getType() const
{
	return type;
}

void ATarget::getHitBySpell(ASpell const &spell) const
{
	std::cout << type << " has been " << spell.getEffects() << "!\n";
}