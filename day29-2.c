/*Find the maximum and minimum element in an array.
*/

#include <stdio.h>

int main() {
    int n, i, max, min;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    max = min = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }
    printf("%d %d\n", max, min);
    return 0;
}
