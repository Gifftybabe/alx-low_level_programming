![image](https://user-images.githubusercontent.com/105078661/211069673-ddbab9e6-aa0a-49a0-941b-0f2e3dd970e5.png)

A Hash Table in C/C++ (Associative array) is a data structure that maps keys to values. This uses a hash function to compute indexes for a key.

Based on the Hash Table index, we can store the value at the appropriate location.

If two different keys get the same index, we need to use other data structures (buckets) to account for these collisions.

The whole benefit of using a Hash Table is due to it’s very fast access time. While there can be a collision, if we choose a very good hash function, this chance is almost zero.

So, on average, the time complexity is a constant O(1) access time. This is called Amortized Time Complexity.

The C++ STL (Standard Template Library) has the std::unordered_map() data structure which implements all these hash table functions.

However, knowing how to construct a hash table from scratch is a crucial skill, and that is indeed what we aim to show you.

Let us understand more about the implementation details.

Any Hash Table implementation has the following three components:

- A good Hash function to map keys to values
- A Hash Table Data Structure that supports insert, search and delete operations.
- A Data Structure to account for collision of keys

![image](https://user-images.githubusercontent.com/105078661/211072243-bb62fc8b-7e53-4c61-aafa-3a2e3256b698.png)

## The project is completed with the below data structure:

/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;




