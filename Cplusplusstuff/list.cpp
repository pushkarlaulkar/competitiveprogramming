//List is a sequence container which takes constant time in inserting and removing elements. List in STL is implemented as Doubly Link List. The elements from List cannot be directly accessed. For example to access element of a particular position ,you have to iterate from a known position to that particular position.

//declaration
list <int> LI;

// here LI will have 5 int elements of value 100.
list<int> LI(5, 100)

/*Some of the member function of List:
1. begin( ): It returns an iterator pointing to the first element in list.Its time complexity is O(1). 
2. end( ): It returns an iterator referring to the theoretical element(doesn’t point to an element) which follows the last element.Its time complexity is O(1). 
3. empty( ): It returns whether the list is empty or not.It returns 1 if the list is empty otherwise returns 0.Its time complexity is O(1). 
4. assign( ): It assigns new elements to the list by replacing its current elements and change its size accordingly.It time complexity is O(N).
5. back( ): It returns reference to the last element in the list.Its time complexity is O(1). 
6. erase( ): It removes a single element or the range of element from the list.Its time complexity is O(N). 
7.front( ): It returns reference to the first element in the list.Its time complexity is O(1). 
8.push_back( ): It adds a new element at the end of the list, after its current last element. Its time complexity is O(1). 
9. push_front( ): It adds a new element at the beginning of the list, before its current first element. Its time complexity is O(1). 
10. remove( ): It removes all the elements from the list, which are equal to given element. Its time complexity is O(N). 
11. pop_back( ): It removes the last element of the list, thus reducing its size by 1. Its time complexity is O(1). 
12. pop_front( ): It removes the first element of the list, thus reducing its size by 1. Its time complexity is O(1). 
13. insert( ): It insert new elements in the list before the element on the specified position. Its time complexity is O(N). 
14. reverse ( ): It reverses the order of elements in the list. Its time complexity is O(N). 
15. size( ): It returns the number of elements in the list. Its time complexity is O(1).*/

#include <iostream>
#include <list>
using namespace std;
int main(){
	list <int> LI; list <int>::iterator it;
	//inserts elements at end of list
	LI.push_back(4); LI.push_back(5);

	//inserts elements at beginning of list
	LI.push_front(3); LI.push_front(5);

	//returns reference to first element of list
	it = LI.begin();

	//inserts 1 before first element of list
	LI.insert(it,1);

	cout<<"All elements of List LI are: " <<endl;
	for(it = LI.begin(); it != LI.end(); it++)	cout<<*it<<" ";
	cout<<endl;

	//reverse elements of list
	LI.reverse();

	cout<<"All elements of List LI are after reversing: " <<endl;
	for(it = LI.begin(); it != LI.end(); it++)	cout<<*it<<" ";
	cout<<endl;

	//removes all occurences of 5 from list
	LI.remove(5);

	cout<<"Elements after removing all occurence of 5 from List"<<endl;
	for(it = LI.begin();it != LI.end(); it++)	cout<<*it<<" ";
	cout<<endl;

	//removes last element from list
	LI.pop_back();
	//removes first element from list
	LI.pop_front();
	return 0;
}
