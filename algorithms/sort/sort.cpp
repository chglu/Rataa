#include <sort.h>

namespace Rataa {

void swap(int[] array, int i, int j)
{
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}

}
