#include "Collection.h"  // class implemented
using namespace std;

// File scope starts here 

/////////////////////////////// PUBLIC ///////////////////////////////////////

//============================= LIFECYCLE ====================================

// Collection Default + Overloaded Constructor
Collection::Collection(int e1, int e2, int e3, int e4, int e5, int e6, int e7, int e8, int e9, int e10)  {
	this->SetCollection(e1, e2, e3, e4, e5, e6, e7, e8, e9, e10);
}
// end Collection constructor


//============================= OPERATIONS ===================================

// function that adds integer elements to the Collection.
void Collection::AddElement(int aElement) {
	if (this->GetNoOfElements() < 10) {
		if (aElement != INT_MIN) {
			this->mElements[this->GetNoOfElements()] = aElement;
			this->mNoOfElements++;
		}
	}
	else
		cout << "Cannot add. Collection is full." << endl;
}
// end function AddElement

// function that searches for an element from the Collection.
bool Collection::SearchElement(int aElement) {
	for (int i = 0; i < this->GetNoOfElements(); i++) {
		if (this->mElements[i] == aElement)
			return true;
	}
	return false;
}
// end function SearchElement

// function that searches for duplicate of an element from the Collection.
bool Collection::SearchDuplicate(int aElement) {
	if (this->SearchElement(aElement)) {
		for (int i = 0; i < this->GetNoOfElements(); i++) {
			if (this->mElements[i] == aElement) {
				for (int j = i + 1; j < this->GetNoOfElements(); j++)
					if (this->mElements[j] == aElement)
						return true;
			}
		}
		return false;
	}
	return false;
}
// end function SearchDuplicate

// function that deletes an element from the Collection.
bool Collection::DeleteElement(int aElement) {
	if (this->SearchElement(aElement)) {
		for (int i = 0; i < this->GetNoOfElements(); i++) {
			if (this->mElements[i] == aElement) {
				this->mNoOfElements--;
				for (int j = i; j < this->GetNoOfElements(); j++)
					this->mElements[j] = this->mElements[j + 1];
				return true;
			}		
		}
	}
	else
		return false;
}
// end function DeleteElement

// function that prints the Collection.
void Collection::DisplayCollection()const {
	for (int i = 0; i < this->GetNoOfElements(); i++) {
		cout << this->mElements[i];
		if (i + 1 != this->GetNoOfElements())
			cout << ", ";
	}
	cout << endl;
}


//============================= ACESS      ===================================

// function that sets Collection
void Collection::SetCollection(int e1, int e2, int e3, int e4, int e5, int e6, int e7, int e8, int e9, int e10) {
	if (e1 == INT_MIN) {
		this->mNoOfElements = 0;
		e1 = e2 = e3 = e4 = e5 = e6 = e7 = e8 = e9 = e10 = 0;
	}
	else if (e2 == INT_MIN) {
		this->mNoOfElements = 1;
		e2 = e3 = e4 = e5 = e6 = e7 = e8 = e9 = e10 = 0;
	}
	else if (e3 == INT_MIN) {
		this->mNoOfElements = 2;
		e3 = e4 = e5 = e6 = e7 = e8 = e9 = e10 = 0;
	}
	else if (e4 == INT_MIN) {
		this->mNoOfElements = 3;
		e4 = e5 = e6 = e7 = e8 = e9 = e10 = 0;
	}
	else if (e5 == INT_MIN) {
		this->mNoOfElements = 4;
		e5 = e6 = e7 = e8 = e9 = e10 = 0;
	}
	else if (e6 == INT_MIN) {
		this->mNoOfElements = 5;
		e6 = e7 = e8 = e9 = e10 = 0;
	}
	else if (e7 == INT_MIN) {
		this->mNoOfElements = 6;
		e7 = e8 = e9 = e10 = 0;
	}
	else if (e8 == INT_MIN) {
		this->mNoOfElements = 7;
		e8 = e9 = e10 = 0;
	}
	else if (e9 == INT_MIN) {
		this->mNoOfElements = 8;
		e9 = e10 = 0;
	}
	else if (e10 == INT_MIN) {
		this->mNoOfElements = 9;
		e10 = 0;
	}
	else
		this->mNoOfElements = 10;
	this->mElements[0] = e1;
	this->mElements[1] = e2;
	this->mElements[2] = e3;
	this->mElements[3] = e4;
	this->mElements[4] = e5;
	this->mElements[5] = e6;
	this->mElements[6] = e7;
	this->mElements[7] = e8;
	this->mElements[8] = e8;
	this->mElements[9] = e10;
}
// end function SetCollection

// Overloaded function that sets Collection
void Collection::SetCollection(const Collection& aCollection) {
	this->mNoOfElements = aCollection.GetNoOfElements();
	for (int i = 0; i < aCollection.GetNoOfElements(); i++)
		this->mElements[i] = aCollection.mElements[i];
}
// end function SetCollection

// function that gets No. of elements
int Collection::GetNoOfElements() const {
	return this->mNoOfElements;
}
// end function GetNoOfElements

// function that gets the Collection
const Collection& Collection::GetCollection()const {
	return *this;
}
// end function GetCollection