/**
* @file Source.cpp
*
* @brief This code creates Set objects and execute some
* Data members to demonstrate private inheritance.
*
* @author Saif Ullah Ijaz
*
*/
#include<iostream>
#include "Set.h"

using namespace std;

// function main begins program execution
void main() {
	Set s1, s2(12, 2, 3, 21), s3(1, 91);

	s1.DisplaySet();
	s2.DisplaySet();
	s3.DisplaySet();
	
	s1.AddMember(2);
	s1.AddMember(2);
	s1.DisplaySet();
	
	s1.DeleteMember(3);
	s1.DisplaySet();
	
	s1.DeleteMember(2);
	s1.DisplaySet();
	
	s1.SetSet(s2);
	s1.DisplaySet();
	cout << "No. of members in s1: " << s1.GetNoOfMembers() << endl;
	cout << s1.IsMember(21) << endl;

	system("pause");
}
// end main