#pragma once
#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
	std::string type;

public:
	ATarget();
	ATarget(const ATarget &ref);
	ATarget &operator=(const ATarget &ref);
	ATarget(const std::string &type);
	virtual ~ATarget();

	const std::string &getType() const;

	void getHitBySpell(const ASpell &spell) const;

	virtual ATarget *clone() const = 0;
};

#include "ASpell.hpp"