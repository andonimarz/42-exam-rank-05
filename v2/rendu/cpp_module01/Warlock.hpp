#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>
#include <map>
#include "ATarget.hpp"
#include "ASpell.hpp"

class Warlock
{
    private:
        std::string name;
        std::string title;
        std::map<std::string, ASpell *> spells;
        Warlock();
        Warlock(const Warlock &src);
        Warlock &operator=(const Warlock &src);

    public:
        Warlock(const std::string &name, const std::string &title);
        ~Warlock();
        const std::string &getName(void) const;
        const std::string &getTitle(void) const;
        void setTitle(const std::string &title);
        void introduce(void) const;
    
        void learnSpell(ASpell *src);
        void forgetSpell(std::string name);
        void launchSpell(std::string name, const ATarget &src);

};

#endif