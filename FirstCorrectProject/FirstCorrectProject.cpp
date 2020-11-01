// Learncpp.com chapter 1
#include <iostream>

int main()
{
   //Initialization = The object is given a known value at the point of definition.
   //Assignment = The object is given a known value beyond the point of definition.
   //int i = 0; != int i; i = 0; since the first is initialization. 
 
   //Prefer direct brace initialization over other initializations
   //Biggest reason is because of potential loss of data, but also works fundamentally different

   /*
    //!Don't 
    //int a(5) int b = 5 and etc.
    //int a(5.5) gives 5 as example
     
     //!Do
    int a{ 5 }; 
    int b{ 5 }; 


    std::cout << a << b;
   */


        //std::endl is used like \n. endl also flushes the stream but is slower. Also is a manipulator and not character like \n
   
   /* 
   std::cout << "Hello World!\n";
   std::cout << "Hello" << " World!" << std::endl;
   */


    //Input - notice the arrows (>><<) for input and output is different
    
    /*
    std::cout << "Give me number! \n";
    int x{};
    std::cin >> x;
    std::cout << x;
    */

    /*
    int x{ 0 };
    std::cout << "Please enter a number\n";
    std::cin >> x;
    std::cout << "Double is " << x * 2 << "\nTriple is " << x * 3;
    */

    /*
    int num1{0};
    int num2{0};
    std::cout << "Enter a number ";
    std::cin >> num1;
    std::cout << "Enter another number ";
    std::cin >> num2;
    std::cout << num1 << " + " << num2 << " is " << num1 + num2 << ".\n";
    std::cout << num1 << " - " << num2 << " is " << num1 - num2 << ".\n";
    */


    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
