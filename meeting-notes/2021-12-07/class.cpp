// A class is a way to group contents and functionality
// Contents are members such as the current on this class
// Functionality are methods such as the get() and increment() 
class Counter
{
    // This is not generic.
    // This is always an int.
    int current;

    public:

    Counter()
    {
        this.current = 0;
    }

    int get()
    {
        return this.current;
    }

    void increment()
    {
        this.current++;
    }
}

int main()
{
    Counter counter();

    counter.increment();
    counter.increment();
    counter.increment();

    // This will print the number 3
    cout << counter.get() << "\n";
}