#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <string>
# include <map>

# include "ASpell.hpp"
# include "ATarget.hpp"
class ASpell;
class ATarget;

class Warlock {
    public:
        Warlock(std::string const& name, std::string const& title);
        ~Warlock(void);

        std::string const& getName(void) const;
        std::string const& getTitle(void) const;

        void setTitle(std::string const& title);

        void introduce() const;

        void learnSpell(ASpell* spell);
        void forgetSpell(std::string spellname);
        void launchSpell(std::string spellname, ATarget const& target);

    private:
        std::string     _name;
        std::string     _title;

        std::map<std::string, ASpell*>        _spellbook;

        Warlock(void);
        Warlock(Warlock const& other);
        Warlock& operator=(Warlock const& other);
};

#endif