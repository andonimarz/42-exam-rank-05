#include "Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title) : name(name), title(title)
{
		std::cout << name << ": This looks like another boring day.\n";
}

Warlock::~Warlock()
{
	std::cout << name << ": My job here is done!\n";
	for (SpellMap::iterator it = arr.begin(); it != arr.end(); it++)
		delete it->second;
	this->arr.clear();
}

const std::string &Warlock::getName() const
{
	return name;
}

const std::string &Warlock::getTitle() const
{
	return title;
}

void Warlock::setTitle(const std::string &title)
{
	this->title = title;
}

void Warlock::introduce() const
{
	std::cout << name << ": I am " << name << ", " << title << "!\n";
}

void Warlock::learnSpell(ASpell *spell)
{
	if (!spell)
		return;
	arr.insert(std::make_pair(spell->getName(), spell->clone()));
}

void Warlock::forgetSpell(std::string spell_name)
{
	if (arr.find(spell_name) == arr.end())
		return;
	delete arr.at(spell_name);
	arr.erase(spell_name);
}

void Warlock::launchSpell(std::string spell_name, ATarget const &target)
{
	if (arr.find(spell_name) == arr.end())
		return;
	arr.at(spell_name)->launch(target);
}
