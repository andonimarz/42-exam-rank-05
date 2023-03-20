#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

#include <iostream>
#include <map>
#include "ATarget.hpp"
#include "ASpell.hpp"

class SpellBook
{
    private:
        std::map<std::string, ASpell *> spells;
        SpellBook(const SpellBook &src);
        SpellBook &operator=(const SpellBook &src);

    public:
        SpellBook();
        ~SpellBook();
    
        void learnSpell(ASpell *src);
        void forgetSpell(const std::string &name);
        ASpell *createSpell(const std::string &name);

};

#endif