#pragma once
#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

typedef std::map<string, ASpell *> SpellMap;

class Warlock
{
	std::string name;
	std::string title;
	SpellMap arr;

	Warlock();
	Warlock(const Warlock &other);
	Warlock &operator=(const Warlock &other);

public:
	Warlock(const std::string &name, const std::string &title);
	~Warlock();

	const std::string &getName() const;
	const std::string &getTitle() const;

	void setTitle(const std::string &title);
	void introduce() const;

	void learnSpell(ASpell *spell);
	void forgetSpell(const std::string name);
	void launchSpell(const std::string name, const ATarget &target);
};
