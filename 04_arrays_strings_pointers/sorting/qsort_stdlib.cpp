#include <iostream>
#include <cstdlib>
using namespace std;

int compareInts(const void* a, const void* b) {
    // Cast the void pointers back to the actual data type pointers
    int valA = *static_cast<const int*>(a);
    int valB = *static_cast<const int*>(b);
    
    // Return values:
    // < 0 if element A should come before element B
    //   0 if they are equivalent
    // > 0 if element A should come after element B
    if (valA < valB) return -1;
    if (valA > valB) return 1;
    return 0;
}

int main() {

    int nums[10];
    int a,b,c;

    int size = 10;

    for(a=0;a<size;a++) nums[a] = rand();

    qsort(nums, size, sizeof(int), compareInts);

    for(b=0;b<size;b++) cout << nums[b] << ' ';

    return 0;
}