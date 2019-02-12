#include "Set.h"  // class implemented
using namespace std;

// File scope starts here 

/////////////////////////////// PUBLIC ///////////////////////////////////////

//============================= LIFECYCLE ====================================

// Set Default + Overloaded Constructor
Set::Set(int e1, int e2, int e3, int e4, int e5, int e6, int e7, int e8, int e9, int e10) {
	this->SetSet(e1, e2, e3, e4, e5, e6, e7, e8, e9, e10);
	//this->~Set();
}
// end Set constructor


//============================= OPERATIONS ===================================

// function that adds integer member to the Set.
void Set::AddMember(int aMember) {
	if (!this->IsMember(aMember))
		this->AddElement(aMember);
}
// end function AddMember

// function that searches for a member from the Set.
bool Set::IsMember(int aMember) {
	return this->SearchElement(aMember);
}
// end function IsMember

// function that deletes a member from the Set.
bool Set::DeleteMember(int aMember) {
	return this->DeleteElement(aMember);
}
// end function DeleteMember

// function that prints the Set.
void Set::DisplaySet()const {
	this->DisplayCollection();
}


//============================= ACESS      ===================================

// function that sets the Set
void Set::SetSet(int e1, int e2, int e3, int e4, int e5, int e6, int e7, int e8, int e9, int e10) {
	this->SetCollection(e1, e2, e3, e4, e5, e6, e7, e8, e9, e10);
	
	if (this->SearchDuplicate(e1) || this->SearchDuplicate(e2) || this->SearchDuplicate(e3) || this->SearchDuplicate(e4) || this->SearchDuplicate(e5) || this->SearchDuplicate(e6) || this->SearchDuplicate(e7) || this->SearchDuplicate(e8) || this->SearchDuplicate(e9))
		this->SetCollection(0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}
// end function SetSet

// Overloaded function that sets the Set
void Set::SetSet(const Set& aSet) {
	this->SetCollection(aSet.GetCollection());
}
// end function SetSet

// function that gets No. of members
int Set::GetNoOfMembers() const {
	return this->GetNoOfElements();
}
// end function GetNoOfMembers

// function that gets the Collection
const Set& Set::GetSet()const {
	return *this;
}
// end function GetSet