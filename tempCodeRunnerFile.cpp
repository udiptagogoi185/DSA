i++;
        int temp = arr[i];
        arr[i] = arr[high];
        arr[high] = temp;
        return i;