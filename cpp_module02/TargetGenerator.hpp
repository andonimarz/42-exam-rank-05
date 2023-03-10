#pragma once

#include "ATarget.hpp"
#include <map>

typedef std::map<std::string, ATarget *> TargetMap;

class TargetGenerator
{
	TargetMap arr;

	TargetGenerator(TargetGenerator const &other);
	TargetGenerator &operator=(TargetGenerator const &other);

public:
	TargetGenerator();
	~TargetGenerator();

	void learnTargetType(ATarget *target);
	void forgetTargetType(std::string const &name);
	ATarget *createTarget(std::string const &name);
};