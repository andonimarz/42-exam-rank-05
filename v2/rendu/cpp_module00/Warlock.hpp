#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>

class Warlock{
    private:
        std::string name;
        std::string title;
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

};

#endif