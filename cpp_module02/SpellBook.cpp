#include "SpellBook.hpp"

SpellBook::SpellBook(void)
{

}
SpellBook::~SpellBook(void)
{

}

void SpellBook::learnSpell(ASpell* spell)
{
    if (spell != NULL)
        this->_spellbook[spell->getName()] = spell->clone();
}
void SpellBook::forgetSpell(std::string spellname)
{
    if (this->_spellbook.find(spellname) != this->_spellbook.end())
        this->_spellbook.erase(spellname);
}
ASpell* SpellBook::createSpell(std::string spellname)
{
    if (this->_spellbook.find(spellname) != this->_spellbook.end())
        return (this->_spellbook[spellname]->clone());
    else
        return (NULL);
}