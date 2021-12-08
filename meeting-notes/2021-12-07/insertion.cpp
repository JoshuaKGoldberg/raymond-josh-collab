int main()
{
    char[] letters[5];

    // start: [ 'a', 'b', 'c', null, null ]
    letters[0] = 'a';
    letters[1] = 'b';
    letters[2] = 'c';

    // insert 'x' into position 1
    // goal: [ 'a', 'x', 'b', 'c', null ]

    // Manual steps:
    // first: move the other one over
    letters[3] = letters[2];
    letters[2] = letters[1];
    letters[1] = 'x'; // ...but where does 'b' go :(

    // Semi-automated steps would be a for loop
    // for (int i = insertion_position; i < size; ...)
    // ... can you imagine if it's position 2 in size 9001??
}
