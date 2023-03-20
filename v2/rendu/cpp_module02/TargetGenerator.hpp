#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

#include <iostream>
#include <map>
#include "ATarget.hpp"

class TargetGenerator
{
    private:
        std::map<std::string, ATarget *> targets;
        TargetGenerator(const TargetGenerator &src);
        TargetGenerator &operator=(const TargetGenerator &src);

    public:
        TargetGenerator();
        ~TargetGenerator();
    
        void learnTargetType(ATarget *src);
        void forgetTargetType(const std::string &name);
        ATarget *createTarget(const std::string &name);

};

#endif