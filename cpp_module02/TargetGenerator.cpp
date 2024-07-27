#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(void)
{

}
TargetGenerator::~TargetGenerator(void)
{
    std::map<std::string, ATarget*>::iterator it = this->_targetBook.begin();
    while (it != this->_targetBook.end())
    {
        delete it->second;
        it++;
    }
}

void TargetGenerator::learnTargetType(ATarget* target)
{
    if (target != NULL)
        this->_targetBook[target->getType()] = target->clone();
}
void TargetGenerator::forgetTargetType(std::string const &targetname)
{
    if (this->_targetBook.find(targetname) != this->_targetBook.end())
        this->_targetBook.erase(targetname);
}
ATarget* TargetGenerator::createTarget(std::string const &targetname)
{
    if (this->_targetBook.find(targetname) != this->_targetBook.end())
        return (this->_targetBook[targetname]->clone());
    else
        return (NULL);
}