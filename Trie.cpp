#include<bits/stdc++.h>
#include "Services.cpp"
using namespace std;

class Trie: public Services
{
	public:
	vector<Contact> containsWord;
	Trie* children[26];
	
	Trie()
	{
		containsWord.clear();
		for(int i=0;i<26;i++)
		{
			children[i]=NULL;
		}
	}
	
	void insert(string name,Contact person)
	{
		int lengthOfName=name.length();
		Trie* currentNode=this;
		for(int i=0;i<lengthOfName;i++)
		{
			char currentCharacter=name[i];
			int indexOfCharacter=findIndexOfCharacterUsingCharacter(currentCharacter);
			if(currentNode->children[indexOfCharacter]==NULL)
			{
				currentNode->children[indexOfCharacter]=new Trie();
			}
			
			currentNode=currentNode->children[indexOfCharacter];
			
		}
		currentNode->containsWord.push_back(person);
	}
	
	Trie* pointerAtEndOfString(string name)
	{
		int lengthOfName=name.length();
		Trie* currentNode=this;
		for(int i=0;i<lengthOfName;i++)
		{
			char currentCharacter=name[i];
			int indexOfCharacter=findIndexOfCharacterUsingCharacter(currentCharacter);
			if(currentNode->children[indexOfCharacter]==NULL)
			{
				return NULL;
			}
			currentNode=currentNode->children[indexOfCharacter];
			
		}
		return currentNode;
	}
	
	vector<Contact> getTheContactsAtTheEndOfTheString(string name)
	{
		vector<Contact> result;
		Trie* currentNode=this;
		currentNode=currentNode->pointerAtEndOfString(name);
		if(currentNode!=NULL)
		{
			result=currentNode->containsWord;
		}
		return result;
	}
	
	vector<Contact> findAllTheContactInTheSubtree()
	{
		
	}
};