#ifndef TARGETGenerator_HPP
# define TARGETGenerator_HPP

#include <map>

# include "ATarget.hpp"

class ATarget;

class TargetGenerator {
    public:
        TargetGenerator(void);
        ~TargetGenerator(void);

        void learnTargetType(ATarget* target);
        void forgetTargetType(std::string const &targetname);
        ATarget* createTarget(std::string const &targetname);
    private:
        std::map<std::string, ATarget*> _targetBook;
        TargetGenerator(TargetGenerator const& other);
        TargetGenerator& operator=(TargetGenerator const& other);
};

#endif