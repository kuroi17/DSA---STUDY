 #include <iostream>

// Function to print an array
void printArray(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

// Function to merge two sorted subarrays
void merge(int arr[], int left, int mid, int right) {
	int i, j, k;
	int n1 = mid - left + 1;
	int n2 = right - mid;
	
	// Create temporary arrays
	int L[n1], R[n2];
	
	// Copy data to temporary arrays
	for (i = 0; i < n1; i++) {
		L[i] = arr[left + i];
	}
	for (j = 0; j < n2; j++) {
		R[j] = arr[mid + 1 + j];
	}
	
	// Merge the temporary arrays back into arr[left..right]
	i = 0;  // Initial index of first subarray
	j = 0;  // Initial index of second subarray
	k = left;  // Initial index of merged subarray
	
	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			arr[k] = L[i];
			i++;
		} else {
			arr[k] = R[j];
			j++;
		}
		k++;
	}
	
	// Copy the remaining elements of L[], if any
	while (i < n1) {
		arr[k] = L[i];
		i++;
		k++;
	}
	
	// Copy the remaining elements of R[], if any
	while (j < n2) {
		arr[k] = R[j];
		j++;
		k++;
	}
}

// Merge Sort function
void mergeSort(int arr[], int left, int right) {
	if (left < right) {
		// Same as (left + right) / 2, but avoids overflow for large left and right
		int mid = left + (right - left) / 2;
		
		// Recursively sort the first and second halves
		mergeSort(arr, left, mid);
		mergeSort(arr, mid + 1, right);
		
		// Merge the sorted halves
		merge(arr, left, mid, right);
	}
}

int main() {
	int arr[] = {12, 11, 13, 5, 6, 7};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	std::cout << "Original array: ";
	printArray(arr, n);
	
	mergeSort(arr, 0, n - 1);
	
	std::cout << "Sorted array: ";
	printArray(arr, n);
	
	return 0;
}
