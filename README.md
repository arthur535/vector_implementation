# Vector-implementation

<hr>

Vectors in C++ are sequence containers representing arrays that can change their size during runtime. They use contiguous storage locations for their elements just as efficiently as in arrays, which means that their elements can also be accessed using offsets on regular pointers to its elements. Vectors are the dynamic arrays that are used to store data.It is different from arrays which store sequential data and are static in nature, Vectors provide more flexibility to the program. Vectors can adjust their size automatically when an element is inserted or deleted from it. Vectors are not ordered in C++. Vector elements are placed in adjacent storage and can be easily accessed and traversed across using iterators. In vectors, data is inserted at the end when we use push_back() function . Inserting an element at the end of a vector takes differential time, as sometimes there may be a need of extending the vector, but inserting the element at the beginning or at the middle takes linear time. Removing the last element takes only constant time because no resizing takes place.

---------------------------------------------------------------------
The implemented vector functions
---------------------------------------------------------------------


isEmpty () - Function says is your Vector empty or not. 

size () - Function returns the size of the Vector. 

capacity () - Function returns the capacity of the Vector. 

insert () - Function gets the index where you want to push your element and pushes it. 

push_back () - Function gets the value and pushes it into Vector. 

pop_back () - Function deletes the last element of the Vector. 

erase () - Function gets the index of element and deletes it from Vector. 

and others...

<hr>
