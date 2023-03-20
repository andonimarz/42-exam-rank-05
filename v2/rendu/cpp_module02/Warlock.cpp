#include "Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title) : name(name), title(title)
{
    std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
    std::cout << this->name << ": My job here is done!" << std::endl;
}

const std::string &Warlock::getName(void) const
{
    return this->name;
}

const std::string &Warlock::getTitle(void) const
{
    return this->title;
}

void Warlock::setTitle(const std::string &title)
{
    this->title = title;
}

void Warlock::introduce(void) const
{
    std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *src)
{
    this->spellbook.learnSpell(src);
}

void Warlock::forgetSpell(std::string name)
{
    this->spellbook.forgetSpell(name);
}

void Warlock::launchSpell(std::string name, const ATarget &src)
{
    ASpell *spell = this->spellbook.createSpell(name);

    if (spell)
    {
        spell->launch(src);
        delete spell;
    }
}
