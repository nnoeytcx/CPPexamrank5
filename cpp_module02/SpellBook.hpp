#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

# include <iostream>
# include <string>
# include <map>

# include "ASpell.hpp"

class ASpell;
class SpellBook {
    public:
        SpellBook(void);
        ~SpellBook(void);

        void learnSpell(ASpell* spell);
        void forgetSpell(std::string spellname);
        ASpell* createSpell(std::string spellname);
    private:
        SpellBook(SpellBook const& other);
        SpellBook& operator=(SpellBook const& other);

        std::map<std::string, ASpell*>        _spellbook;
};

#endif