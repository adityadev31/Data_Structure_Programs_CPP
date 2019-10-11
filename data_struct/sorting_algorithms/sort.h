/*
 * sort.h
 */

#ifndef SORT_H_
#define SORT_H_

#include <iostream>
#include<cstdlib>
using namespace std;

// Swapping two values.
void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void bubble_sort(int a[], int n)
{
	int temp;
	bool swap_flag;

	//Outer loop for pass or iteration
	for(int p=1; p<n ; p++)
	{
		// initialize the swap flag as false
		swap_flag = false;

		//inner loop for pairwise comparisons
		for(int k=0 ; k<n-p ; k++)
		{
			// if left is greater than right
			if(a[k] > a[k+1])
			{
				//swapping
				swap(&a[k], &a[k+1]);

				//setting flag to true
				swap_flag = true;
			}
		}
		// no swaps? array is sorted
		if(!swap_flag)
			break;
	}
}


//Insertion sort function
void insertion_sort(int a[], int n)
{
	for(int i=1 ; i<n ; i++)
	{
		int value = a[i];
		int index = i;
		while ( index > 0 && a[index -1] > value)
		{
			a[index] = a[index -1];
			index = index -1;
		}
		a[index] = value;
	}
}

// Partitioning an integer array on the basis of values at end as pivot value.
int pivot_partition(int a[], int low, int end)
{
	int index = low;
	int pivot = end;

	// Getting index of pivot.
	for(int i=low; i < end; i++)
	{
		if(a[i] < a[pivot])
		{
			swap(&a[i], &a[index]);
			index++;
		}
	}

	// Swapping value at end and at the index obtained.
	swap(&a[pivot], &a[index]);

	return index;
}

// Random selection of pivot.
int random_pivot_partition(int a[], int low, int end)
{
	int n = rand();

	// randomly choose a number in between [low, end]
	int pvt = low + n%(end-low+1);

	// Swapping pivot value and end, so pivot value will be taken as pivot while partitioning.
	swap(&a[end], &a[pvt]);

	return pivot_partition(a, low, end);
}

// Implementing QuickSort algorithm.
int quick_sort(int a[], int low, int end)
{

	if(low < end)
	{
		// Partitioning array using randomized pivot.
		int pindex = random_pivot_partition(a, low, end);

		// If you want traditional partition then
		// int pindex = pivot_partition(a, low, end);

		// Recursively implementing QuickSort.
		quick_sort(a, low, pindex-1);
		quick_sort(a, pindex+1, end);
	}
	return 0;
}

// Implementing Selection sort algorithm.
int selection_sort(int arr[], int n)
{
	// One by one move boundary of unsorted subarray
	for (int i = 0; i < n-1; i++)
	{
		// Find the minimum element in unsorted array
		int min_indx = i;
	    for (int j = i+1; j < n; j++)
	        if (arr[j] < arr[min_indx])
	                min_indx = j;

	    // Swap the found minimum element with the ith element
	    swap(&arr[min_indx], &arr[i]);
	}
	return 0;
}


#endif /* SORT_H_ */
