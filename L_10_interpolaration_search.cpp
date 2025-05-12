#include <iostream>
using namespace std;

int interpolationSearch(int array[], int n, int value) {
    int low = 0;
    int high = n - 1;

    while (low <= high && value >= array[low] && value <= array[high]) {
        if (array[low] == array[high]) {
            if (array[low] == value) return low;
            else return -1;
        }

        int probe = low + (double)(high - low) * (value - array[low]) / (array[high] - array[low]);

         cout << "probe: " << probe << endl;

        if (array[probe] == value) {
            return probe;
        } else if (array[probe] < value) {
            low = probe + 1;
        } else {
            high = probe - 1;
        }
    }

    return -1;
}

int main() {
    // interpolation search = improvement over binary search best used for "uniformly" distributed data
    // average case: O(log(log(n)))
    // worst case: O(n) for non-uniform data

    int array[] = {1, 2,4,8,16,32,64,128,256,512,1024};
    int n = sizeof(array) / sizeof(array[0]);

    int index = interpolationSearch(array, n,8);

    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
