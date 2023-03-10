#include "SpellBook.hpp"

SpellBook::~SpellBook()
{
	for (SpellMap::iterator it = arr.begin(); it != arr.end(); it++)
		delete it->second;
	arr.clear();
}

void SpellBook::learnSpell(ASpell *spell)
{
	if (!spell)
		return;
	arr.insert(std::make_pair(spell->getName(), spell->clone()));
}

void SpellBook::forgetSpell(std::string const &spell_name)
{
	if(arr.find(spell_name) == arr.end())
		return;
	delete arr.at(spell_name);
	arr.erase(spell_name);
}

ASpell *SpellBook::createSpell(std::string const &spell_name)
{
	if(arr.find(spell_name) == arr.end())
		return NULL;
	return arr.at(spell_name);
}
