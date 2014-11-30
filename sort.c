void straightInsertionSort(int *array, int n)
{
    int i, j;
    for (i = 1; i<n; i++)
    {
        for (j=i; j>0 && (array[j-1]>array[j]);j--) {
            swap(array[j],array[j-1]);
        }
    }
}

void binaryInsertionSort(int *array, int n); // fill in later

void bubbleSort(int* array, int n) //exchange sort
{
    int i, j, swapped;
    for (i=0; i<n; ++i) {
        swapped = 0;
        for (j=n-1; j>i; --j) {
            if (array[j]<array[j+1]) {
                swapped = 1;
                swap(array[j],array[j+1]);
            }
        }
        if (swapped==0) {
            break;
        }
    }
}

void quickSort(int *a, int left, int right)
{
    if (right > left)
    {
        int p = left + (right - left)/2;
        int pivot = a[p];
        swap(a, p, right);
        int i=left;
        int j=right-1;
        
        while (i<j) {
            while (a[i]<pivot) {
                i++;
            }
            while (a[j]>pivot) {
                j--;
            }
            if (i<j) {
                swap(i++,j--);
            }
        }
        if (a[i] >pivot) {
            swap(a, i, right);
        }
        quickSort(a, left, i-1);
        quickSort(a, i+1, right);
    }
}


void straightSelectionSort(int *a, int n)
{
    int i, j, max;
    for (i=n-1; i>0; --i) {
        max = 0;
        for (j=0; j<=i; ++j) {
            if (a[j] >a[max]) {
                max = j;
            }
        }
        if (max !=i) {
            swap(a,max,i);
        }
    }
}






