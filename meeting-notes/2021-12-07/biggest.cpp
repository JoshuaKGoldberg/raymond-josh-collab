// size is N
// O notation is O(N), because it's one loop and an if statement
//   - loop costs N because it does an operation for each item,
//       and there are N items
//   - if costs 1 because it's a constant time operation
// O(N) * O(1) = O(N * 1) = O(N)
int get_biggest_member(int[] array, int size)
{
    int biggest = array[0];

    for (int i = 1; i < size; ++i) // O(N) cost
    {
        // if (array[i] > biggest) // O(1) cost
        //     biggest = array[i];

        if (array[i] > biggest) // O(1) cost
        {
            biggest = array[i];
            cout << "Biggest is now " < biggest << "\n";
        }
    }

    return biggest;
}
