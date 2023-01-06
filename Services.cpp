#include<bits/stdc++.h>
#include "Contact.cpp"
using namespace std;


// This class provides Services used at various places in code
class Services
{
	public:
	
	// This function helps in checking the validity of the phone number
	// In case of any error , the function prints it on the screen
	bool checkValidContactNumber(string contactNumber)
	{
		for(auto x:contactNumber)
		{
			if(!(x>='0' and x<='9')) 
			{
				//cout<<"ERROR: Contact number can only have digits\n";
				return false;
			}
		}
		if(contactNumber.length()!=10)
		{
			//cout<<"ERROR: Contact number should be of length 10\n";
			return false;
		}
		return true;
	}
	
	// Valid name only contains lowercase and uppercase character
	bool checkValidName(string Name)
	{
		for(char character:Name)
		{
			if(!((character>='A' and character<='Z') or (character>='a' and character<='z')))
			{
				//cout<<"ERROR: The Name should only contain Alphabets\n";
				return false;
			}
		}
		return true;
	}
	
	
	// this function is used to convert a uppercase character in lowercase
	char convertToLowerCase(char character)
	{
		if(character>='A' and character<='Z')
		{
			character+=32;
		}
		return character;
	}
	
	int findIndexOfCharacterUsingCharacter(char character)
	{
		character=convertToLowerCase(character);
		if(character>='a' and character<='z')
		{
			return character-'a';
		}
		return character-'0';
	}
	
	
	// This function is used to check whether 2 characters are same irrespective of the case
	bool CheckIfCharactersAreSameInCaseInsensitive(char firstCharacter,char secondCharacter)
	{
		// convert both the characters in lowercase
		firstCharacter=convertToLowerCase(firstCharacter);
		secondCharacter=convertToLowerCase(secondCharacter);
		return firstCharacter==secondCharacter;
	}
	
	// This function is used to check if a string is prefix of other
	bool checkIfTheStringsHaveSamePrefix(string firstString,string secondString)
	{
		if(firstString.length()==0 or secondString.length()==0)
		{
			return true;
		}
		if(firstString.length()>secondString.length())
		{
			return false;
		}
		
		int lengthToCheck=min(firstString.length(),secondString.length());
		bool stringsHaveSamePrefix=true;
		for(int i=0;i<lengthToCheck;i++)
		{
			if(!CheckIfCharactersAreSameInCaseInsensitive(firstString[i],secondString[i]))
			{
				stringsHaveSamePrefix=false;
				break;
			}
		}
		return stringsHaveSamePrefix;
	}
	
	// This function helps in checking if a contact is prefix of other contact 
	// and matches the search pattern
	bool isTheContactMatchingPrefix(Contact contact,Contact prefixContact)
	{
		string firstName=contact.getfirstName();
		string lastName=contact.getlastName();
		string contactNumber=contact.getcontactNumber();
		
		string firstNamePrefix=prefixContact.getfirstName();
		string lastNamePrefix=prefixContact.getlastName();
		string contactNumberPrefix=prefixContact.getcontactNumber();

		return (checkIfTheStringsHaveSamePrefix(firstNamePrefix,firstName) and checkIfTheStringsHaveSamePrefix(lastNamePrefix,lastName)
		and checkIfTheStringsHaveSamePrefix(contactNumberPrefix,contactNumber));
	}
	
	bool areEqual(string firstString,string secondString)
	{
		return (firstString==secondString or firstString=="" or secondString=="");
	}
	
	bool isTheContactMatching(Contact contact,Contact ContactToCheck)
	{
		string firstName=contact.getfirstName();
		string lastName=contact.getlastName();
		string contactNumber=contact.getcontactNumber();
		
		string firstNameToCheck=ContactToCheck.getfirstName();
		string lastNameToCheck=ContactToCheck.getlastName();
		string contactNumberToCheck=ContactToCheck.getcontactNumber();

		return (areEqual(firstName,firstNameToCheck) and areEqual(lastName,lastNameToCheck) and areEqual(contactNumber,contactNumberToCheck));
	}
};
