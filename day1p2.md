# C++ Day One Part Two

## Basic Input and Output

```cpp
#include<iostream> 
using namespace std; 
int main(){ 
    int x; 
    cout << "Enter the value: "; 
    cin >> x; 
    cout << x; 
}
```

```cpp
#include <iostream>
#include <string>

int main() {
    int a;
    double b;
    float c;
    char d;
    std::string e;
    bool f;

    std::cout << "Enter an int, double, float, char, string, and bool: ";
    std::cin >> a >> b >> c >> d >> e >> f;

    std::cout << "Int: " << a << "\nDouble: " << b << "\nFloat: " << c
              << "\nChar: " << d << "\nString: " << e << "\nBool: " << f << std::endl;

    return 0;
}
```

## Data Types in C++

| Data Type | Size | Description |
|-----------|------|-------------|
| Boolean   | 1 byte | Stores true or false values |
| Char      | 1 byte | Stores a single character/letter/number, or ASCII values |
| Int       | 2 or 4 bytes | Stores whole numbers, without decimals |
| Float     | 4 bytes | Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits |
| Double    | 8 bytes | Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits |

## Arithmetic Operators

| Operator | Name | Description | Example |
|----------|------|-------------|---------|
| + | Addition | Adds together two values | `x + y` |
| - | Subtraction | Subtracts one value from another | `x - y` |
| * | Multiplication | Multiplies two values | `x * y` |
| / | Division | Divides one value by another | `x / y` |
| % | Modulus | Returns the division remainder | `x % y` |
| ++ | Increment | Increases the value of a variable by 1 | `++x` |
| -- | Decrement | Decreases the value of a variable by 1 | `--x` |

## C++ Assignment Operators

```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 5;
    
    cout << "Initial value of x: " << x << endl;
    
    x += 3;
    cout << "After x += 3: " << x << endl;
    
    x -= 3;
    cout << "After x -= 3: " << x << endl;
    
    x *= 3;
    cout << "After x *= 3: " << x << endl;
    
    x /= 3;
    cout << "After x /= 3: " << x << endl;
    
    x %= 3;
    cout << "After x %= 3: " << x << endl;
    
    return 0;
}
```

## Comparison Operators

```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 5, y = 3;
    
    cout << "x == y: " << (x == y) << endl;
    cout << "x != y: " << (x != y) << endl;
    cout << "x > y: " << (x > y) << endl;
    cout << "x < y: " << (x < y) << endl;
    cout << "x >= y: " << (x >= y) << endl;
    cout << "x <= y: " << (x <= y) << endl;
    
    return 0;
}
```

| Operator | Name | Example |
|----------|------|---------|
| == | Equal to | `x == y` |
| != | Not equal to | `x != y` |
| > | Greater than | `x > y` |
| < | Less than | `x < y` |
| >= | Greater than or equal to | `x >= y` |
| <= | Less than or equal to | `x <= y` |

## Logical Operators

```cpp
#include<iostream>
using namespace std;

int main(){ 
    int x = 3; 
    int y = 5; 
    cout << (x > 3 && x < 10); 
    return 0; 
}
```

| Operator | Name        | Description                                       | Example               |
|----------|------------|---------------------------------------------------|-----------------------|
| `&&`     | Logical and | Returns true if both statements are true         | `x < 5 && x < 10`    |
| `!`      | Logical not | Reverses the result, returns false if true       | `!(x < 5 && x < 10)` |


## C++ Strings

```cpp
#include<iostream>
#include<string>
using namespace std;

int main() { 
    string a = "hello world"; 
    cout << a; 
    return 0; 
}
```

### String Length

```cpp
#include<iostream>
#include<string>
using namespace std;

int main(){ 
    string a = "SRM University"; 
    cout << a.length(); 
    return 0; 
}
```

```cpp
#include<iostream>
using namespace std;

int main(){ 
    string a = "SRM University"; 
    cout << a.size(); 
}
```

### String Access (Indexing)

```cpp
#include<iostream>
#include<string>
using namespace std;

int main(){ 
    string a = "SRM Ramapuram"; 
    cout << a[0] + a[5]; 
}
