# libsimc
Simple C Library - inspired by SGLIB and STL

# Goals
* To implement my own __limited__ version of the C++ STL, as well as, any other algorithms, data structures or functions for C.
* Make The library easy to use, robust, and safe.

# Files
## <functions.h>
### map()
Will iterate through an int array and execute a user defined function on each element.
### reduce()
Iterates through and reduces the array to a single integer using a user defined function.
### sort()
Sorts an array using the quicksort algorithm.
### filter()
**_WILL BE IMPLEMENTED..._**
### all_of()
Iterates through an array and checks to see if all of the elements pass a boolean test.
### any_of()
Iterates through an array and checks to see if any of the elememts pass a boolean test.
### iota()
create an array of sequential values.  

## <array.h>
### array_create()
Creates an array data structure for the user.
### array_delete()
Deallocates the array.
### array_length()
Gets the length of an array.
### array_print()
Will print an array in a clean fashion. (Mostly for debugging)
### array_get()
Given an index, will return a pointer to the data stored there.
### array_append()
Appends data to the end of an array, and realloc's memory before.
### array_get_new()
Jump to the place in memory, copy data at that memory location, store in new place in memory.
### array_insert()
Insert data into the array and update memory space.
### array_remove()
Remove data index based and store in user defined pointer.
### array_pop()
Same as array_remove(), but for the last element.
### array_get_head()
Simply return the pointer to the head of the data.
### array_iterate()
Iterate through the array and call a user defined function on each element.  
It can store a value to a pointer depending on what the function returns.


(quicksort, hashtable, ~~sorted~~?? array coming soon..)
