#include "ATarget.hpp"

ATarget::ATarget() {}

ATarget::ATarget(const std::string &type)
{
    this->type = type;
}

ATarget::ATarget(const ATarget &src)
{
    *this = src;
}

ATarget::~ATarget() {}

ATarget &ATarget::operator=(const ATarget &src)
{
    this->type = src.getType();
    return *this;
}

const std::string &ATarget::getType(void) const
{
    return this->type;
}

void ATarget::getHitBySpell(const ASpell &src) const
{
    std::cout << this->type << " has been " << src.getEffects() << "!" << std::endl;
}
