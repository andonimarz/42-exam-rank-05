#include "Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title) : name(name), title(title)
{
    std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
    std::map<std::string, ASpell *>::iterator begin = this->spells.begin();
    std::map<std::string, ASpell *>::iterator end = this->spells.end();
    
    while (begin != end)
    {
        delete begin->second;
        begin++;
    }

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
    if (src)
        this->spells.insert(std::pair<std::string, ASpell *>(src->getName(), src->clone()));
}

void Warlock::forgetSpell(std::string name)
{
    if (this->spells.find(name) != this->spells.end())
        delete this->spells[name];
    this->spells.erase(name);
}

void Warlock::launchSpell(std::string name, const ATarget &src)
{
    if (this->spells.find(name) != this->spells.end())
        this->spells[name]->launch(src);
}
