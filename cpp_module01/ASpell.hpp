#pragma once
#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
private:
	std::string name;
	std::string effects;

public:
	ASpell();
	ASpell(const ASpell &ref);
	ASpell &operator=(const ASpell &ref);
	ASpell(const std::string &name, const std::string &effects);
	virtual ~ASpell();

	const std::string &getName() const;
	const std::string &getEffects() const;

	void launch(const ATarget &target) const;

	virtual ASpell *clone() const = 0;
};

