//day one

/*
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
*/
//day two
/*
#include <iostream>  // Required for input/output

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;  // User inputs a number

    std::cout << "You entered: " << num << std::endl;
    return 0;
}
*/
//day three
/*
#include <iostream>
int main()
{
    char name[100];
    int a,b,c;
    std::cin>>name>>a>>b;
    c=a+b;
    std::cout<<"thank you "<<name<<" sum is "<<c;
}
*/
//day four
#include <iostream>
int main()
{
    int a;
    int b;
    bool x;
    std::cin >> a >> b;
    x= a<=b && b<=a;
    std::cout <<x;
}
