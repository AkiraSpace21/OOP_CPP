# Aim
To study and implement the concept of classes and objects in C++, including class definition, object creation, member functions, data members, and practical applications in various programming scenarios.

# Software Used
Compiler: GNU GCC (g++)

IDE: Visual Studio Code

Operating System: Windows/Linux

# Theory
# 1. Classes and Objects
In object-oriented programming, a class is a blueprint for creating objects. It defines the properties (data members) and behaviors (member functions) that the objects will have. An object is an instance of a class.

# 2. Access Specifiers
public: Members are accessible from outside the class

private: Members are accessible only within the class (default)

protected: Members are accessible within the class and by derived classes

# 3. Member Functions
Functions defined inside a class that operate on the object's data members. They can be defined inside or outside the class.

# 4. Constructors and Destructors
Special member functions for initializing objects and cleaning up resources when objects are destroyed.

# Algorithms
# 1. Area of rectangle
Steps

    1. Start
    
    2. Define a Class Rectangle
    
    a. Declare three float variables: length, width, and area
    
    b. Create a constructor to:
    
    c. Prompt the user to enter the length of the rectangle
    
    d. Read and store the input in length
    
    e. Prompt the user to enter the width of the rectangle
    
    f. Read and store the input in width
    
    3. Define Member Function display()
    
    a. Calculate area = length × width
    
    b. Display the calculated area
    
    4. In main() Function
    
    a. Create an object rect of class Rectangle
    
    b. Call rect.display() to compute and show the area
    
    5. End

# 2. Car Details
Steps

    1. Start
    
    2. Define a Class Car
    
    a. Declare three data members:
    
    b. brand_name (string)
    
    c. price (string)
    
    d. year (integer)
    
    e. Define member functions:
    
    f. Brand_name():
     
    g. Prompt user to enter the car brand name

    h. Read and store input in brand_name
    
    i. Price():
    
    j. Prompt user to enter the car price
    
    k. Read and store input in price
    
    k. Year():
    
    l. Prompt user to enter the year the car was bought
    
    m. Read and store input in year
    
    n. display():
    
    o. Print the values of brand_name, price, and year
    
    3. In main() Function
    
    a. Create an object c of class Car
    
    b. Call c.Brand_name() to input brand name
    
    c. Call c.Price() to input price
    
    d. Call c.Year() to input year
    
    e. Call c.display() to show all car details
    
    4. End

# 3. Calculator using class
Steps

    1. Start
    
    2. Define a Class Calculator
    
    a. Declare two integer data members:
    
    b. num1 = 20
    
    c. num2 = 5
    
    d. Define member functions:
    
    e. addition():
    
    f. Calculate add = num1 + num2
    
    g. Display the result
    
    h. subtraction():
    
    i. Calculate sub = num1 - num2
    
    j. Display the result
    
    k. multiplication():
    
    l. Calculate product = num1 × num2
    
    m. Display the result
    
    n. division():
    
    o. Calculate div = num1 ÷ num2
    
    p. Display the result
    
    3. In main() Function
    
    a. Create an object calc of class Calculator
    
    b. Call calc.addition() to perform and display addition
    
    c. Call calc.subtraction() to perform and display subtraction
    
    d. Call calc.multiplication() to perform and display multiplication
    
    e. Call calc.division() to perform and display division
    
    4. End

# 4. Student details
Steps

    1. Start
    
    2. Define a Class Student
    
    a. Declare the following data members:
    
    b. name → string
    
    c. branch → string
    
    d. subject → string
    
    e. year → string (declared but not used in this code)

    f. result → float
    
    3. In main() Function
    
    a. Create an object st of class Student
    
    b. Assign values to the object's data members:
    
    c. st.name = "Tripatjot"
    
    d. st.branch = "E&TC"
    
    e. st.subject = "C++"
    
    f. st.result = 8.6
    
    4. Display the Student Details
    
    a. Print each data member using cout:
    
    b. Name
    
    c. Branch
    
    d. Subject
    
    e. Result
    
    5. End

# 5. Cube volume
Steps

    1. Start
    
    2. Define a Class Cube
    
    a. Declare three private data members:
    
    b. height = 2.0
    
    c. width = 3.0
    
    d. length = 5.0
    
    e. Define a public member function volume():
    
    f. Compute volume using the formula: volume = height × width × length
    
    g. Return the computed volume
    
    3. In main() Function
    
    a. Create an object c of class Cube
    
    b. Call the volume() function using the object: vol = c.volume()
    
    c. Display the result using cout
    
    4. End
