/**  Collection class to define a collection 
* of integers in a C++ code.
*
* #include "Collection.h" <BR>
* -llib
*
*/
#ifndef COLLECTION_H
#define COLLECTION_H

// SYSTEM INCLUDES
#include<iostream>


// Collection class definition
class Collection {
public:
// LIFECYCLE
	/** Default + Overloaded constructor.
	*/
	Collection(int = INT_MIN, int = INT_MIN, int = INT_MIN, int = INT_MIN, int = INT_MIN, int = INT_MIN, int = INT_MIN, int = INT_MIN, int = INT_MIN, int = INT_MIN);

	// Use compiler-generated copy constructor, assignment, and destructor.
	// Collection(const Collection&);
	// Collection& operator=(const Collection&);
	// ~Collection();

// OPERATIONS
	/** function that adds integer elements to the Collection.
	*
	* @param aElement integer element to be added.
	*
	* @return void
	*/
	void AddElement(int aElement = INT_MIN);

	/** function that searches for an element from the Collection.
	*
	* @param aElement integer element to be searched.
	*
	* @return True if found, false otherwise.
	*/
	bool SearchElement(int aElement);

	/** function that searches for duplicate of an element from the Collection.
	*
	* @param aElement integer element to be searched for repitition.
	*
	* @return True if duplicate found, false otherwise.
	*/
	bool SearchDuplicate(int aElement);

	/** function that deletes an element from the Collection.
	*
	* @param aElement integer element to be deleted.
	*
	* @return True if deleted successfully, false otherwise.
	*/
	bool DeleteElement(int aElement);

	/** function that prints the Collection.
	*
	* @param void.
	*
	* @return void.
	*/
	void DisplayCollection()const;

// ACCESS
	// setters
	void SetCollection(int = INT_MIN, int = INT_MIN, int = INT_MIN, int = INT_MIN, int = INT_MIN, int = INT_MIN, int = INT_MIN, int = INT_MIN, int = INT_MIN, int = INT_MIN);
	
	/**
	# @overload void SetCollection(int []);
	*/
	void SetCollection(const Collection&);

	// getters
	int GetNoOfElements() const;
	const Collection& GetCollection()const;


private:
// DATA MEMBERS
	int mElements[10];
	int mNoOfElements;
};
// end class Collection
#endif  
// _COLLECTION_H_