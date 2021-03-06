#include "Person.h"

struct ImplementPerson:cppcomponents::implement_runtime_class<ImplementPerson,Person_rt>
{

    std::string name_;

    ImplementPerson(){}
    ImplementPerson(std::string name):name_(std::move(name)){}
    std::string GetName(){return name_;}
    void SetName(std::string s){name_ = s;}

};

CPPCOMPONENTS_REGISTER(ImplementPerson)

CPPCOMPONENTS_DEFINE_FACTORY()


