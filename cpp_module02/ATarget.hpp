#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <iostream>
# include <string>
# include "ASpell.hpp"

class ASpell;
class ATarget {
    public:
        ATarget(std::string const& type);
        virtual ~ATarget(void);
        ATarget(ATarget const& other);
        ATarget& operator=(ATarget const& other);

        std::string const& getType(void) const;

        virtual ATarget* clone(void) const = 0;

        void getHitBySpell(ASpell const& spell) const;

    protected:
        std::string     _type;
    private:
        ATarget(void);
};

#endif