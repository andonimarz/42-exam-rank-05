#ifndef ASPELL_HPP
# define ASPELL_HPP

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
    protected:
        std::string name;
        std::string effects;

    public:
        ASpell();
        ASpell(const std::string &name, const std::string &effects);
        ASpell(const ASpell &src);
        ASpell &operator=(const ASpell &src);
        virtual ~ASpell();
    
        const std::string &getName(void) const;
        const std::string &getEffects(void) const;
        void launch(const ATarget &src);
        virtual ASpell *clone(void) const = 0;
};

#endif