#include <iostream>
#include <cstdint>

using namespace std;

int main() {
    // 1 byte has 8 bits

    printf("size of int: %ld bits\n", sizeof(int)*8);

    printf("size of long int: %ld bits\n", sizeof(long int)*8);
    printf("size of long long int: %ld bits\n", sizeof(long long int)*8);


    printf("size of  16int: %ld bits\n", sizeof(int16_t)*8);
    printf("size of  32int: %ld bits\n", sizeof(int32_t)*8);
    printf("size of  64int: %ld bits\n", sizeof(int64_t)*8);

    // unsigned integers can only represent positive numbers, but they can represent a larger range of pos nums
    printf("size of uint16_t: %ld bits\n", sizeof(uint16_t)*8);
    printf("size of uint32_t: %ld bits\n", sizeof(uint32_t)*8);
    printf("size of uint64_t: %ld bits\n", sizeof(uint64_t)*8);

    return 0;

}