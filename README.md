**Contact Manager**

This is a simple contact manager program written in C++. It allows the user to store, search, and delete contacts.

**Files**

The project consists of the following files:

- **Contact.cpp**: This file contains the **Contact** class, which represents a single contact with a first name, last name, and contact number. It has member functions for getting and setting the first name, last name, and contact number, as well as for printing the contact.
- **Contact.h**: This is the header file for the **Contact** class. It declares the **Contact** class and its member functions.
- **Services.cpp**: This file contains the **Services** class, which provides various utility functions used by the program. It has functions for checking the validity of a contact number and name, converting a character to lowercase, finding the index of a character, and checking if two characters are the same in a case-insensitive manner. It also has a function for checking if a string is a prefix of another string.
- **Services.h**: This is the header file for the **Services** class. It declares the **Services** class and its member functions.
- **main.cpp**: This is the main file for the program. It contains the main function and the user interface for the contact manager.

**Building and Running**

To build and run the program, follow these steps:

1. Install a C++ compiler, such as GCC or Clang.
1. Navigate to the directory containing the project files.
1. Run the following command to compile the program:

---
      g++ -o main main.cpp Contact.cpp Services.cpp
---      

4. Run the following command to execute the program:

---

      ./main
---       

**Usage**

When the program starts, it will display a menu with the following options:

1. Add a new contact
1. Search for a contact
1. Delete a contact
1. Quit

Choose one of the options by entering the corresponding number and pressing enter. The program will then perform the chosen action.

To add a new contact, enter the first name, last name, and contact number when prompted. The contact number must be a 10-digit string consisting only of digits.

To search for a contact, enter a search pattern when prompted. The program will display any contacts whose first name, last name, or contact number starts with the search pattern.

To delete a contact, enter the contact number of the contact to delete when prompted. The program will delete the contact if it exists.

To quit the program, choose the "Quit" option from the menu.

**Notes**

- The program is case-insensitive when comparing names and contact numbers.
- The program does not save the contacts to disk. They are only stored in memory and are lost when the program exits.

