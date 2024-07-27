#include "Warlock.hpp"

Warlock::Warlock(std::string const& name, std::string const& title) : _name(name), _title(title)
{
    std::cout<<this->_name<<": This looks like another boring day."<<std::endl;
}
Warlock::~Warlock(void)
{
    std::map<std::string, ASpell*>::iterator it = this->_spellbook.begin();
    while (it != this->_spellbook.end())
    {
        delete it->second;
        it++;
    }
    std::cout<<this->_name<<": My job here is done!"<<std::endl;
}

std::string const& Warlock::getName(void) const
{
    return (this->_name);
}
std::string const& Warlock::getTitle(void) const
{
    return (this->_title);
}

void Warlock::setTitle(std::string const& title)
{
    this->_title = title;
}

void Warlock::introduce() const
{
    std::cout<<this->_name<<": I am "<<this->_name<<", ";
    std::cout<<this->_title<<"!"<<std::endl;
}

void Warlock::learnSpell(ASpell* spell)
{
    if (spell != NULL)
        this->_spellbook[spell->getName()] = spell->clone();
}
void Warlock::forgetSpell(std::string spellname)
{
    if (this->_spellbook.find(spellname) != this->_spellbook.end())
        this->_spellbook.erase(spellname);
}
void Warlock::launchSpell(std::string spellname, ATarget const& target)
{
    if (this->_spellbook.find(spellname) != this->_spellbook.end())
    {
        ASpell *tmp = this->_spellbook[spellname];
        if (tmp != NULL)
            tmp->launch(target);
    }
}