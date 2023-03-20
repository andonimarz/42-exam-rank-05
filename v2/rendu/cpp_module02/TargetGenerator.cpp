#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator()
{
    std::map<std::string, ATarget *>::iterator begin = this->targets.begin();
    std::map<std::string, ATarget *>::iterator end = this->targets.end();
    
    while (begin != end)
    {
        delete begin->second;
        begin++;
    }
    this->targets.clear();
}

void TargetGenerator::learnTargetType(ATarget *src)
{
    if (src)
        this->targets.insert(std::pair<std::string, ATarget *>(src->getType(), src->clone()));
}

void TargetGenerator::forgetTargetType(const std::string &name)
{
    if (this->targets.find(name) != this->targets.end())
        delete this->targets[name];
    this->targets.erase(name);
}

ATarget *TargetGenerator::createTarget(const std::string &name)
{
    if (this->targets.find(name) != this->targets.end())
        return this->targets[name]->clone();
    return NULL;
}
