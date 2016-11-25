//Vectors are sequence containers that have dynamic size.
/*vector<int> a;                                       // empty vector of ints
vector<int> b (5, 10);                                // five ints with value 10
vector<int> c (b.begin(),b.end());                     // iterating through second
vector<int> d (c); */

/*Some of the member functions of vectors are:
1. at(): Returns the reference to the element at a particular position (can also be done using ‘[ ]’ operator). Its time complexity is O(1).
2. back(): Returns the reference to the last element. Its time complexity is O(1).
3. begin(): Returns an iterator pointing to the first element of the vector. Its time complexity is O(1).
4. clear(): Deletes all the elements from the vector and assign an empty vector. Its time complexity is O(N) where N is the size of the vector.
5. empty(): Returns a boolean value, true if the vector is empty and false if the vector is not empty. Its time complexity is O(1).
6. end(): Returns an iterator pointing to a position which is next to the last element of the vector. Its time complexity is O(1).
7. erase(): Deletes a single element or a range of elements. Its time complexity is O(N + M) where N is the number of the elements erased and M is the number of the elements moved.
8. front(): Returns the reference to the first element. Its time complexity is O(1).
9. insert(): Inserts new elements into the vector at a particular position. ts time complexity is O(N + M) where N is the number of elements inserted and M is the number of the elements moved .
10. pop_back(): Removes the last element from the vector. Its time complexity is O(1).
11. push_back(): Inserts a new element at the end of the vector. Its time complexity is O(1).
12. resize(): Resizes the vector to the new length which can be less than or greater than the current length. Its time complexity is O(N) where N is the size of the resized vector.
13. size(): Returns the number of elements in the vector. Its time complexity is O(1).*/

void traverse(vector<int> v){
	vector <int>::iterator it;
	for(it = v.begin(); it != v.end(); ++it)	cout << *it <<  ‘ ‘;
	cout << endl;
	for(int i = 0; i < v.size(); ++i)	cout << v[i] << ‘ ‘;
	cout << endl;
}

#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector <int> v; vector <int>::iterator it;
	v.push_back(5);
	while(v.back() > 0)	v.push_back(v.back() - 1);
	
	for(it = v.begin(); it != v.end(); ++it)	cout << *it << ' ';
	cout << endl;
	
	for(int i = 0;i < v.size();++i)	cout << v.at(i) << ' ';
	cout << endl;
	
	while(!v.empty()){
		cout << v.back() << ' ';
		v.pop_back();
	}
	cout << endl;
	return 0;
}
