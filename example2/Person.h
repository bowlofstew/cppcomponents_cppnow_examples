#include <cppcomponents/cppcomponents.hpp>


struct IPerson:cppcomponents::define_interface<cppcomponents::uuid<0x6c365014,0x1bf9,0x4af8,0x863b,0x07a4bdf69c46 >>
{
	std::string GetName();
	void SetName(std::string);

	CPPCOMPONENTS_CONSTRUCT(IPerson,GetName,SetName)


};

struct IPersonFactory:cppcomponents::define_interface<cppcomponents::uuid<0xfe3c8f2e, 0xad9c, 0x4e2e, 0xb38f, 0xc77ea47bb31d>>
{

       cppcomponents::use<cppcomponents::InterfaceUnknown> Create();
       cppcomponents::use<cppcomponents::InterfaceUnknown> CreateWithName(std::string name);
       CPPCOMPONENTS_CONSTRUCT(IPersonFactory,Create, CreateWithName)


};

inline const char* PersonId(){return "Person!Person";}
typedef cppcomponents::runtime_class<PersonId,cppcomponents::object_interfaces<IPerson>,cppcomponents::factory_interface<IPersonFactory>> Person_rt;
typedef cppcomponents::use_runtime_class<Person_rt> Person;


