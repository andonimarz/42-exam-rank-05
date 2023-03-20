#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook()
{
    std::map<std::string, ASpell *>::iterator begin = this->spells.begin();
    std::map<std::string, ASpell *>::iterator end = this->spells.end();
    
    while (begin != end)
    {
        delete begin->second;
        begin++;
    }
    this->spells.clear();
}

void SpellBook::learnSpell(ASpell *src)
{
    if (src)
        this->spells.insert(std::pair<std::string, ASpell *>(src->getName(), src->clone()));
}

void SpellBook::forgetSpell(const std::string &name)
{
    if (this->spells.find(name) != this->spells.end())
        delete this->spells[name];
    this->spells.erase(name);
}

ASpell *SpellBook::createSpell(const std::string &name)
{
    if (this->spells.find(name) != this->spells.end())
        return this->spells[name]->clone();
    return NULL;
}
