#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator()
{
	for (TargetMap::iterator it = arr.begin(); it != arr.end(); it++)
		delete it->second;
	arr.clear();
}

void TargetGenerator::learnTargetType(ATarget *target)
{
	if (!target)
		return;
	arr.insert(std::make_pair(target->getType(), target->clone()));
}

void TargetGenerator::forgetTargetType(const std::string &target_name)
{
	if(arr.find(target_name) == arr.end())
		return;
	delete arr.at(target_name);
	arr.erase(target_name);
}

ATarget *TargetGenerator::createTarget(const std::string &target_name)
{
	if(arr.find(target_name) == arr.end())
		return NULL;
	return arr.at(target_name);
}
