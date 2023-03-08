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
	ASpell(){};
	ASpell(const ASpell &ref) : name(ref.name), effects(ref.effects){};
	ASpell &operator=(const ASpell &ref)
	{
		name = ref.name;
		effects = ref.effects;
		return *this;
	};
	ASpell(const std::string &name, const std::string &effects) : name(name), effects(effects) {}
	virtual ~ASpell(){};

	const std::string &getName() const { return name; };
	const std::string &getEffects() const { return effects; };

	void launch(const ATarget &target) const;

	virtual ASpell *clone() const = 0;
};

