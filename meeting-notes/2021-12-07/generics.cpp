// Every instance of Box may have a different T,
// but for that single instance, the T is consistent.
// ---
// For example, if we create a new Box<string>, its T will be string,
// which means its value is type string, and its get() returns string.
class Box<T>
{
    // This is not generic.
    // This is always an int.
    int times_changed;

    // This is generic. You can change the data type of T!
    T value; // T is the data type

    // This says anybody outside the class is allowed to use these
    public:

    // Constructor to create a new instance of the class
    Box(T original) // first time is "Josh" for a T of string
    {
        this.times_changed = 0;
        this.value = original;
    }

    // A public function available on the class
    T get()
    {
        return this.value;
    }

    // Another public function available on the class
    void update(T newValue)
    {
        this.times_changed++;
        this.value = newValue;
    }
}

// ...

int main()
{
    // T would be string
    Box<string> myNameBox("Josh"); // call constructor

    // call methods on the class
    myNameBox.update("Raymond"); // known to take in string (T)
    string name = myNameBox.get(); // known to return string (T)

    // different instance, can have a different T
    Box<double> myDoubleBox(123.456);
    myDoubleBox.update(789.012); // T is double
}
