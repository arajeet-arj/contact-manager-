#include<bits/stdc++.h>
#include "contactManager.cpp"

using namespace std;

signed main()
{
    contactManager obj=contactManager();
	
	// Some random data to test
	// this can be easily converted to add it directly from the input
	
	obj.addContact("Rohit","Sharma","9325372144");
	obj.addContact("Arun","Rojadiya","9876543217");
	obj.addContact("Ankit","Kumar","9378965444");
	obj.addContact("Rohitash","Kumar","1897890765");
	obj.addContact("Arunima","Kumari","7894563214");
	obj.addContact("Mohit","Raj","9876543021");
	obj.addContact("Aman","Kumar","9876543201");
	obj.addContact("Naveen","Jaat","9876453021");
	obj.addContact("Ram","Kumar","9875643021");
	obj.addContact("Virat","Kholi","8967543021");
	obj.addContact("Suresh","Raina","9876534012");
	obj.addContact("MS","Dhoni","9834567021");
	obj.addContact("Nooka","Parveen","9678543021");
	obj.addContact("Ajay","Yadav","8796543201");
	obj.addContact("Sandesh","Yadav","9995643021");
	obj.addContact("Ankita","Raana","9877777012");
	obj.addContact("Preeti","Jhara","9322342345");
	obj.addContact("Aaku","Udjjw","8799878967");
	obj.addContact("Mkini","Tive","1232679281");
	obj.addContact("Sarda","Sharma","4673892081");
	obj.addContact("Payal","Verma","3872389741");
	obj.addContact("Deepak","Sharma","2342342341");
	obj.addContact("Deepika","Sharma","2342341231");
	obj.addContact("Khushi","Singh","8799879874");
	obj.addContact("Rohit","lambha","1231230987");
	obj.addContact("Aditiya","Sharma","3458797892");
	obj.addContact("Aman","Sharma","1231235793");
	obj.addContact("Rohan","Sharma","9876543210");
	obj.addContact("Radhe","Palem","1234567893");
	obj.addContact("Subham","Yadev","2932385124");
	obj.addContact("Umakant","Sharma","123123594");
	obj.addContact("Sahil","Arora","0987654321");
	obj.addContact("Gaurav","Patel","2342342341");
	obj.addContact("Prince","Tavetiya","9879879876");
	obj.addContact("Himanshu","Yadav","3833833832");
	obj.addContact("Jekla","Grish","2312312319");
	obj.addContact("Kemal","Deep","9887987987");
	obj.addContact("A","Deep","9887987987");
	vector<Contact> contacts=obj.searchContactByPrefix("","Sharm","");
	for(auto contact:contacts)
	{
		cout<<contact.getfirstName()<<" "<<contact.getlastName()<<" "<<contact.getcontactNumber()<<"\n";
	}
}
