# Overloading in C++

## Aim
To study and implement types of **Overloading** in C++: **Function Overloading, Constructor Overloading, and Operator Overloading**.

## Tools Used
- Visual Studio Code  
- Programiz Online Compiler  

---

## Theory
**Overloading** in C++ allows the same function, constructor, or operator name to perform different tasks based on arguments.  
This supports **compile-time polymorphism**, improves **code readability**, and enhances **reusability**.

### Types of Overloading
1. **Function Overloading**  
   - Same function name, different parameter list (type or number).  
   - Resolved at compile time.  

2. **Constructor Overloading**  
   - Multiple constructors with varying arguments.  
   - Allows objects to be initialized in different ways.  

3. **Operator Overloading**  
   - Enables operators like `+`, `*`, `==` to work with user-defined classes.  
   - Improves intuitive usage of objects.  

---

## Programs and Algorithms

### Program 1: Constructor Overloading (Addition)
**Purpose:** Demonstrates multiple constructors for performing addition.  
**Class:** `Add` with three constructors:
- Two integers  
- Two floats  
- Three integers  

**Algorithm:**
1. Define class `Add` with overloaded constructors.  
2. Each constructor calculates and prints the sum.  
3. In `main()`, create objects with different arguments to call different constructors.  

---

### Program 2: Constructor Overloading (Interest Calculation)
**Purpose:** Constructor overloading to calculate different types of interest.  
**Class:** `Interest` with two constructors:
- Integer parameters → Simple Interest  
- Double parameters → Compound Interest  

**Algorithm:**
1. Define class `Interest` with two constructors.  
2. First constructor calculates simple interest.  
3. Second constructor calculates compound interest.  
4. In `main()`, create objects with different argument types to demonstrate both cases.  

---

### Program 3: Function Overloading
**Purpose:** Same function name handles different data types.  
**Class:** `Concat` with overloaded function `Concatenate`:  
- String parameters → joins two strings  
- Char parameters → combines characters into a string  

**Algorithm:**
1. Define class `Concat` with two `Concatenate` functions.  
2. Create an object in `main()`.  
3. Call the function with string arguments.  
4. Call again with char arguments.  
5. Display both results.  

---

### Program 4: Operator Overloading (`*` Operator)
**Purpose:** Overload `*` to compare volumes of two boxes.  
**Class:** `Box` with members `length`, `width`, `height`.  

**Algorithm:**
1. Define class `Box` with constructor and volume function.  
2. Overload `*` operator to compare volumes of two boxes.  
3. Create two `Box` objects with dimensions.  
4. Display their volumes.  
5. Compare using the overloaded operator.  

---

### Program 5: Operator Overloading (`+` Operator)
**Purpose:** Overload `+` operator to add values of two objects.  
**Class:** `Number` with member `value`.  

**Algorithm:**
1. Define class `Number` with parameterized constructor.  
2. Overload `+` operator to return sum of two objects.  
3. Define `display()` to print stored value.  
4. In `main()`, create objects and add them using `+`.  
5. Display results for all objects.  

---

## Conclusion
These programs highlight **Overloading in C++** as a form of compile-time polymorphism:
- **Constructor Overloading** → Multiple ways to initialize objects (addition, interest).  
- **Function Overloading** → Same function name for different argument types.  
- **Operator Overloading** → User-defined classes can use operators naturally.  

Overloading provides **flexibility**, improves **readability**, and ensures **reusable, intuitive code**.
