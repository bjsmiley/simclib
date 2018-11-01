#ifndef _ARRAY_H
#define _ARRAY_H
/*
 * 
 */
typedef struct Array* array_t;

/*
*  array_create - creates an array_t datatype
*  @data: a pointer to that data that will be manipulated
*  @length: the number of elements alreadt in an array
*  @data_size: the size of data stored in this array (ex: sizeof(int))
* 
*  malloc space for a new array_t and correctly passes new values
*  into the struct depending on what the user passes into the function
* 
*  returns: a typedef pointer to thr Array struct, or NULL if invalid input
*/
array_t array_create(void* data, unsigned int length, unsigned int data_size, int fflag);

/*
* array_delete - Deallocate a given array
* @array: the array to delete
* 
* free's the array if it is empty
* 
* returns: 1 if successful, 0 otherwise
*/
int array_delete(array_t array);

/*
* array_length - get the length of a given array
* @array: the array to get the length from
* 
* return the length of the array
*/
int array_length(array_t array);

/*
* array_print - print the array
* @array: the array to print
* 
* iterate through the array and cast the data, then print
* 
* return: Void 
*/
void array_print(array_t array);

/*
 * array_get - get the value at an index
 * @array - the array
 * @index - the index where the value is stored
 * 
 * Iterates through @array until it reaches the index
 * 
 *  return: a pointer to the data, or NULL if unable to get
 */
void* array_get(array_t array, unsigned int index);


/*
* array_get_new - get the value at an index and copy it into new memory
* @array: array data structure
* @index: the index where the data wanted is stored
* 
* Jump to the place in memory where index is stored and
* copy data at that memory location to a new place in memory.
* 
* return: a pointer to the new copy of the data, else, NULL
*/
void* array_get_new(array_t array, unsigned int index);


/* 
* array_append - append to the end of an array
* @array: the array to append to
* @data: the new data to be stored
* 
* make space for the new data then insert it at the address
* 
* return: -1 if there and is error, otherwise, 0
*/
int array_append(array_t array, void* data);


/*
 * array_insert - insert data into the array
 * @array: array data structure
 * @index: index of location for new data
 * 
 * Shift memory and data, then save @data to its new place in memory.
 * 
 */
int array_insert(array_t array, unsigned int index, void* data);


/*
* array_remove - remove data from an array and store it elsewhere
* @array: array data structure
* @index: position of data to remove
* @data: address of a pointer to store the removed data (can be null)
* 
* if @data is not null, save the value (from a different address) to @data. Next,
* update the array to reflect the changed value locations and reduce the memory
* so there is no waste. 
* 
* WARNING: this function mallocs space with array_get_new() so free your pointer
*          when/if you are done with is
* 
* return: 0 if successful, -1 otherwise
*/
int array_remove(array_t array, unsigned int index, void** data);


/*
* array_pop - remove the last element and store it
* @array: array data structure
* @data: a pointer to the address of where to store the value
* 
* If @data is not null, save the data value (with a different address) to @data.
* realloc space for the data in @array and update member variable.
* 
* WARNING: this function mallocs space with array_get_new() so free your pointer
*          when/if you are done with it.
* 
* return: 0 if successful, -1 otherwise
*/
int array_pop(array_t array, void** data);


/*
* array_get_head - get the head of data
* @array: array data structure
* 
* check for valid input first.
* 
* return: the data head of @array, or NULL
*/
void* array_get_head( array_t array );


// completely incorrect. will update soon.
array_t array_overwrite_data( array_t array, void* data, unsigned int length, unsigned int data_size, int fflag );

#endif 