//Stack is a container which follows the LIFO (Last In First Out) order and the elements are inserted and deleted from one end of the container. The element which is inserted last will be extracted first.

//Declaration:
//stack <int> s;

/*Some of the member functions of Stack are: 
1. push( ): Insert element at the top of stack. Its time complexity is O(1). 
2. pop( ): removes element from top of stack. Its time complexity is O(1). 
3. top( ): access the top element of stack. Its time complexity is O(1). 
4. empty( ): checks if the stack is empty or not. Its time complexity is O(1). 
5. size( ): returns the size of stack. Its time complexity is O(1).*/

#include <iostream>
#include <stack>

using namespace std;
int main(){
	stack <int> s;  // declaration of stack

	//inserting 5 elements in stack from 0 to 4.
	for(int i = 0;i < 5; i++)	s.push(i) ;

	//Now the stack is {0, 1, 2, 3, 4}

	//size of stack s
	cout<<”Size of stack is: ” <<s.size( )<<endl;

	//accessing top element from stack, it will be the last inserted element.
	cout<<”Top element of stack is: ” <<s.top( ) <<endl ;

	//Now deleting all elements from stack 
	for(int i = 0;i < 5;i++)	s.pop();

	//Now stack is empty,so empty( ) function will return true.

	if(s.empty())	cout <<”Stack is empty.”<<endl;
		else	cout <<”Stack is Not empty.”<<endl;
	return 0;
}
