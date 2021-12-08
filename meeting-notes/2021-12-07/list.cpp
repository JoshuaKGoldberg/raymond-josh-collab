// 0 1 0 0 0 0 1 1 0 0 0 1
//         ^
//         your variable is here

//   ..C...E...D......A.....B

// List<T> contains some number of Node<T>s
// Its contents are linked together because:
// its contents are nodes, and each node has a pointer to the next node
class List<T>
{
    Node<T>* head; // term for the first thing in the list
    Node<T>* tail; // term for the last thing in the list
    int size;

    // ...
}

// because they both use generics, this is allowed:
// Vector<List<Vector<List<string>>>>

// Benefits of a list:
// * You don't need to have sequential space reserved for it
//     array needs sequential memory, which can be tough at large sizes
//     list can be broken apart, in any order, doesn't matter
// * Lists have O(1) insertion time
//     insertion: inserting an item in the middle
//     array and vector insertions are O(N)

// [ 'a', 'b', 'c' ]
// insert 'x' at index 1
// [ 'a', 'x', 'b', 'c' ]



// Singly linked: only has a "link" to the next node
class Node<T>
{
    T value;
    Node<T>* next;

    public:

    Node<T>(T value, Node<T>* next)
    {
        this.value = value;
        this.next = next;
    }
}


// Double linked: also has a pointer to the previous
// advantage: you can iterate forward and back!
// disadvantage: a little more expensive to store & update
class DLNode<T>
{
    T value;
    Node<T>* next;
    Node<T>* previous;

    public:

    Node<T>(T value, Node<T>* next, Node<T>* previous)
    {
        this.value = value;
        this.next = next;
        this.previous = previous;
    }
}

/*

A -------> B
           |
           |
           v
           C
          /
         /
 E <--- D

insertion change: you just change the pointers,
which is O(1)

A          B
  \      / |
    \  /   |
     X     v
           C
          /
         /
 E <--- D


*/
