# C++ Notes

## What is C++?
- C++ is a cross-platform programming language used to create high-performance applications.
- Developed by **Bjarne Stroustrup** as an extension of the C language.
- Provides a high level of control over **system resources and memory**.
- Major updates: **C++11, C++14, C++17, C++20, and C++23**.

## Difference between C and C++
- **C++ is an extension of C**, so both have similar syntax.
- **Main difference:** C++ supports **classes and objects**, while C does not (C is procedural, C++ is object-oriented).

---

## Basic C++ Program
```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello World";
    return 0;
}
```

**Output:**
```
Hello World
```

### Explanation:
- `#include<iostream>` → Includes the **input-output library** for C++.
- `using namespace std;` → Allows us to use standard library names without `std::` prefix.
- `int main()` → Entry point of the program, returns an integer.
- `cout << "Hello World";` → Prints output (see-out, `<<` is the **insertion operator**).
- `return 0;` → Indicates the program ran successfully.

---

## Printing Multiple Statements
```cpp
cout << "Hello World";
cout << "Your name,";
cout << "Have a Nice Day";
```

**Output:**
```
Hello WorldYour name,Have a Nice Day
```

(Note: Outputs without space! Use `cout << "\n";` or `cout << " "` for spacing.)

---

## Printing Numbers in C++
```cpp
#include <iostream>
using namespace std;

int main() {
    cout << 3;
    return 0;
}
```

**Output:**
```
3
```

---

## C++ Variables
- **Variables store data** in memory.
- **Common Data Types:**
  - `int` → Stores integers (e.g., `5`, `100`)
  - `double` → Stores floating-point numbers (e.g., `5.2`, `3.14`)
  - `char` → Stores a single character (e.g., `'A'`)
  - `string` → Stores text (e.g., `"Hello"`)
  - `bool` → Stores **true/false** values

### Example Program:
```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 4;
    double b = 548.52;
    float c = 45.16;
    char d = 'A';
    string e = "Hello World";
    bool f = true;

    cout << a << "\n";
    cout << b << "\n";
    cout << c << "\n";
    cout << d << "\n";
    cout << e << "\n";
    cout << f << "\n"; // True prints as 1
    return 0;
}
```

---

## Declaring Multiple Variables
- **Declare multiple variables in one line** (must be of the same type).
```cpp
int x = 5, y = 10;
cout << x + y; // Output: 15
```

---

## C++ Identifiers
**Identifiers are names** (for variables, functions, etc.) that follow these rules:
1. Can contain letters (`a-z, A-Z`), digits (`0-9`), and underscores (`_`).
2. **Cannot start with a digit**.
3. **Cannot be a keyword** (e.g., `int`, `float`).
4. **Case-sensitive** (`Age` and `age` are different).
5. No special characters (`@, #, $, etc.`).

---

## Constants (`const` Keyword)
- `const` means **unchangeable** (read-only variable).

### Example with Error:
```cpp
#include <iostream>
using namespace std;

int main() {
    const int myNum = 15;
    myNum = 10; // ERROR! Cannot change a constant
    cout << myNum;
    return 0;
}
```

**Error Output:**
```
error: assignment of read-only variable 'myNum'
```

- **Fix:** Declare the variable correctly and do not try to change it after initialization.

### Correct Usage:
```cpp
const int a = 6;
cout << a; // Works fine
```

---

## Summary:
- **C++ extends C with Object-Oriented Programming.**
- `cout` prints output, `cin` takes input.
- **Data types:** `int`, `double`, `char`, `string`, `bool`.
- **Constants (`const`)** prevent variable modification.
- **Identifiers** must follow naming rules.

---


