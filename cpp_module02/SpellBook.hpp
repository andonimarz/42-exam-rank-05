#pragma once

#include "ASpell.hpp"
#include <map>
typedef std::map<std::string, ASpell *> SpellMap;

class SpellBook
{
	SpellMap arr;

	SpellBook(SpellBook const &other);
	SpellBook &operator=(SpellBook const &other);

public:
	SpellBook() {}
	~SpellBook();

	void learnSpell(ASpell *aspell_ptr);
	void forgetSpell(std::string const &name);
	ASpell *createSpell(std::string const &name);
};