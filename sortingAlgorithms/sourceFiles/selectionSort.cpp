//
// Created by Samik Biswas on 07-09-2019.
//

void selectionSort(int *arr, int num) {

    int temp = 0, j = 0, k = 0;

    for (int i = 0; i < (num - 1); ++i) {
        j = k = i;

        while (j < num) {

            if (arr[j] < arr[k]) {
                k = j;
            }
            j++;
        }

        temp = arr[i];
        arr[i] = arr[k];
        arr[k] = temp;

    }

}
