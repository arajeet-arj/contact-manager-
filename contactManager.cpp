#include<bits/stdc++.h>
#include "Trie.cpp"
using namespace std;


class contactManager:public Trie
{
	Trie* rootOfTrieOnFirstName;
	Trie* rootOfTrieOnLastName;
	Trie* rootOfTrieOnContactNumber;
	set<vector<string>> checkDistinct;
	vector<Contact> result;
	
	public:
	
	contactManager()
	{
		rootOfTrieOnFirstName=new Trie();
		rootOfTrieOnLastName=new Trie();
		rootOfTrieOnContactNumber=new Trie();
	}
	
	// this function is used to add a new contact in contact list
	void addContact(string firstName,string lastName,string contactNumber)
	{
		vector<string> personDetails={firstName,lastName,contactNumber};
		if(!checkValidContactNumber(contactNumber) or !checkValidName(firstName) or !checkValidName(lastName) or firstName.length()==0 or checkDistinct.find(personDetails)!=checkDistinct.end())
		{
			return;
		}
		Contact person=Contact(firstName,lastName,contactNumber);
		checkDistinct.insert(personDetails);
		rootOfTrieOnFirstName->insert(firstName,person);
		rootOfTrieOnLastName->insert(lastName,person);
		rootOfTrieOnContactNumber->insert(contactNumber,person);
	}
	
	// This is a helper function that will help in the searching process
	void searchInSubtree(Trie* node,Contact prefixContact)
	{
		for(auto contactDetails:node->containsWord)
		{
			if(isTheContactMatchingPrefix(contactDetails,prefixContact))
			{
				result.push_back(contactDetails);
			}
		}
		for(int i=0;i<26;i++)
		{
			if(node->children[i]!=NULL)
			{
				searchInSubtree(node->children[i],prefixContact);
			}
		}
	}
	
	// first we will locate the first name up to prefix and then we will find all the name under that subtree
	vector<Contact> searchContactByPrefix(string firstNamePrefix,string lastNamePrefix,string contactNumberPrefix)
	{
		result.clear();
		Trie* node=rootOfTrieOnFirstName->pointerAtEndOfString(firstNamePrefix);
		if(node==NULL)
		{
			return result;
		}
		// now we have got the node from which we can apply dfs to find
		// all the person satisifying the condition
		
		Contact prefixContact=Contact(firstNamePrefix,lastNamePrefix,contactNumberPrefix);
		searchInSubtree(node,prefixContact);
		return result;
	}
	
	vector<Contact> searchContactByExactName(string firstName,string lastName,string contactNumber)
	{
		if(firstName=="" and lastName=="" and contactNumber=="")
		{
			return searchContactByPrefix(firstName,lastName,contactNumber);
		}
		result.clear();
		vector<Contact> contactsToCheck;
		if(firstName!="")
		{
			contactsToCheck=rootOfTrieOnFirstName->getTheContactsAtTheEndOfTheString(firstName);
		}
		else if(lastName!="")
		{
			contactsToCheck=rootOfTrieOnLastName->getTheContactsAtTheEndOfTheString(lastName);
		}
		else 
		{
			contactsToCheck=rootOfTrieOnContactNumber->getTheContactsAtTheEndOfTheString(contactNumber);
		}
		
		Contact desiredContact=Contact(firstName,lastName,contactNumber);
		for(auto contactDetails:contactsToCheck)
		{
			if(isTheContactMatching(contactDetails,desiredContact))
			{
				result.push_back(contactDetails);
			}
		}
		return result;
	}
};
