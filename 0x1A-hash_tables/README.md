![image](https://user-images.githubusercontent.com/105078661/206537314-6976d365-69cc-4c63-bcbb-1af5faf47a8b.png)

A Doubly Linked List (DLL) contains an extra pointer, typically called the previous pointer, together with the next pointer and data which are there in the singly linked list.

A doubly linked list is a type of linked list in which each node consists of 3 components:

- *prev - address of the previous node
- *data - data item
- *next - address of next node

![image](https://user-images.githubusercontent.com/105078661/206537822-d96a4e9f-0675-435d-95f5-4781efdcb2c6.png)

## The project is completed with the below data structure:

 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 

typedef struct dlistint_s

{
  
  int n;
    
  struct dlistint_s *prev;
    
  struct dlistint_s *next;

} dlistint_t;




