#include <cstdint> // for fixed-width integers
#include <iostream>

int main()
{
  std::int8_t x{65};      // initialize 8-bit integral type with value 65
  std::cout << x << '\n'; // You're probably expecting this to print 65

  // int8_t, uint8_t -- aliases for signed and unsigned char
  // int32_t alias for int
    // alias for long if int is 16 bits ie: 16 bit systems

  return 0;
}