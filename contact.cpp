#include<bits/stdc++.h>
using namespace std;

class Contact
{
	string firstName;
	string lastName;
	string contactNumber;
	
	public:
	
	Contact(string firstName,string lastName,string contactNumber)
	{
		this->firstName=firstName;
		this->lastName=lastName;
		this->contactNumber=contactNumber;
	}
	
	void setfirstName(string firstName)
	{
		this->firstName=firstName;
	}
	
	string getfirstName()
	{
		return firstName;
	}
	
	void setlastName(string lastName)
	{
		this->lastName=lastName;
	}
	
	string getlastName()
	{
		return lastName;
	}
	
	void setcontactNumber(string contactNumber)
	{
		this->contactNumber=contactNumber;
	}
	
	string getcontactNumber()
	{
		return contactNumber;
	}
};
