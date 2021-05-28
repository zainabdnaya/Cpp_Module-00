# C++Module-00
This repository Contains an Introduction to C++

# Iostream Library (Standard Input / Output Streams Library)

    cin: Standard input stream (object )
    cout: Standard output stream (object )

# Class && Constructor && destructor

    When you define a class, you define a blueprint for a data type.

    A class constructor is a special member function of a class that is executed whenever we create new objects of that class.
    A constructor will have exact same name as the class and it does not have any return type at all, not even void. 
    C onstructors can be very useful for setting initial values for certain member variables.

    A destructor is a special member function of a class that is executed 
    whenever an object of it's class goes out of scope or whenever the delete 
    expression is applied to a pointer to the object of that class.

# Class VS Struct in C++

 The only difference between a struct and class in C++ is the default accessibility 
 of member variables and methods. 
 In a struct they are public; in a class they are private.

 # getline (string) in C++
    https://www.geeksforgeeks.org/getline-string-c/
# Member function
Member functions are the functions, which have their declaration inside the class definition and works on the data members of the class. 
The definition of member functions can be inside or outside the definition of class.
        
    Exemple : 
        class x
        {
            public:
                int add()
                {
                    return a+b+c;
                };
            private:
                int a,b,c;
        };
It can be also defined outsize class like :

        Exemple:
            class Cube
            {
                public:
                int side;
                int getVolume();
            }
            int Cube :: getVolume()
                return side*side*side;

# Rand and Srand function:

The rand() function is used in C/C++ to generate random numbers in the range [0, RAND_MAX). 
The srand() function in C++ seeds the pseudo-random number generator used by the rand() function. 
The seed for rand() function is 1 by default.
It means that if no srand() is called before rand(), the rand() function behaves as if it was seeded with srand(1).
Note: A "seed" is the starting point for a sequence of pseudo-random numbers. 
    
        Exemple : "geerate  6 alphabet word"
           int main()
            {
                srand(time(0));
                int j = 0;
                int k = 0;
                for (int i = 0; i < 127; i++)
                {
                    j = rand() % 127;
                    if ((j >= 65 && j < 90) || (j >= 95 && j < 122))
                    {
                        std::cout << (char)j;
                        k++;
                    }
                    if (k == 6)
                        break;
                }
                return 0;
            }
<a href="https://www.programiz.com/cpp-programming/library-function/cstdlib/srand/">Srand</a>

# Pointers, References and Dynamic Memory Allocation
<a href="https://www3.ntu.edu.sg/home/ehchua/programming/cpp/cp4_PointerReference.html">Pointers, References and Dynamic Memory Allocation</a>

# Ressources 

    best first exemple about C++:
<br>
<a href="https://www.cplusplus.com/doc/tutorial/program_structure/">program_structur</a>
<br>
<a href="https://www.geeksforgeeks.org/getline-string-c/">Getline</a>
<br>
<a href="http://www.cplusplus.com/reference/iomanip/">Iomanip</a>
<br>
<a href="https://www.javatpoint.com/cpp-object-and-class">Iomanip</a>
<br>
<a href="https://www.geeksforgeeks.org/new-and-delete-operators-in-cpp-for-dynamic-memory/">new and delete operator</a>    
        



