#ifndef ATARGET_HPP
# define ATARGET_HPP

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
    protected:
        std::string type;
    
    public:
        ATarget();
        ATarget(const std::string &type);
        ATarget(const ATarget &src);
        ATarget &operator=(const ATarget &src);
        virtual ~ATarget();
        const std::string &getType(void) const;
        void getHitBySpell(const ASpell &src) const;
        virtual ATarget *clone(void) const = 0;
};

#endif