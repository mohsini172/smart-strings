# smart-strings
Smart Strings:
SmartString Folder:
	This folder contain the implementation of the copied pointer string and and owned pointer string. The file String.cpp have class String which is implementation using copied pointers while in file stringOP.cpp there is class stringOP which is implementation of owned pointer. While the main file has the unit test written.

stringCOWreferenceCounting Folder:
	This folder have file stringRL.cpp which have class stringRL. This class is using String class as buffer and use a pointer and a counter for reference count. Because this file is implemented using reference count. The main file has the unit test written.

stringCOWreferenceLinking Folder:
	This folder have file stringRL.cpp which have class stringRL. This class is using String class as buffer and use a pointer and has next and previous pointer for linking the references. Since we are using reference linking that’s why we used next and previous pointers to link them. The main file has the unit test written.

