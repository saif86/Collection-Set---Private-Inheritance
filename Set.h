/**  Set class private inherited from Collection class.
*
* #include "Set.h" <BR>
* -llib
*
*/
#ifndef SET_H
#define SET_H

// SYSTEM INCLUDES
#include<iostream>

// LOCAL INCLUDES
#include "Collection.h"


// Set class definition
class Set : private Collection {
public:
// LIFECYCLE
	/** Default + Overloaded constructor.
	*/
	Set(int = INT_MIN, int = INT_MIN, int = INT_MIN, int = INT_MIN, int = INT_MIN, int = INT_MIN, int = INT_MIN, int = INT_MIN, int = INT_MIN, int = INT_MIN);

	// Use compiler-generated copy constructor, assignment, and destructor.
	// Set(const Set&);
	// Set& operator=(const Set&);
	// ~Set();

// OPERATIONS
	/** function that adds integer member to the Set.
	*
	* @param aMember integer member to be added.
	*
	* @return void
	*/
	void AddMember(int aMember = INT_MIN);

	/** function that searches for a member from the Set.
	*
	* @param aMember integer member to be searched.
	*
	* @return True if found, false otherwise.
	*/
	bool IsMember(int aMember);

	/** function that deletes a member from the Set.
	*
	* @param aMember integer member to be deleted.
	*
	* @return True if deleted successfully, false otherwise.
	*/
	bool DeleteMember(int aMember);

	/** function that prints the Set.
	*
	* @param void.
	*
	* @return void.
	*/
	void DisplaySet()const;

// ACCESS
	// setters
	void SetSet(int = INT_MIN, int = INT_MIN, int = INT_MIN, int = INT_MIN, int = INT_MIN, int = INT_MIN, int = INT_MIN, int = INT_MIN, int = INT_MIN, int = INT_MIN);
	
	/**
	# @overload void SetSet(const Set&);
	*/
	void SetSet(const Set&);

	// getters
	int GetNoOfMembers() const;
	const Set& GetSet()const;
};
// end class Set
#endif  
// _SET_H_