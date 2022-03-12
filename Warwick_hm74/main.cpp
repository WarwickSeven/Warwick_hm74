#include <iostream>

#define PRINT_JOE
//#define PRINT_BOB

int main()

{
#ifdef PRINT_JOE
 std::cout << "Joe" << std::endl;
#endif

#ifdef PRINT_BOB
 std::cout << "Bob" << std::endl;
#endif
 return 0;
}
