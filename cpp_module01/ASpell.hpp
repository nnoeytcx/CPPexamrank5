#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <iostream>
# include <string>
# include "ATarget.hpp"

class ATarget;
class ASpell {
    public:
        ASpell(std::string const& name, std::string const& effects);
        virtual ~ASpell(void);
        ASpell(ASpell const& other);
        ASpell& operator=(ASpell const& other);

        std::string const& getName(void) const;
        std::string const& getEffects(void) const;

        virtual ASpell* clone(void) const = 0;

        void launch(ATarget const& target) const;

    protected:
        std::string     _name;
        std::string     _effects;
    private:
        ASpell(void);
};

#endif