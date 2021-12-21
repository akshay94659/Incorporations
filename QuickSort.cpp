#include<bits/stdc++.h>

int
Partition (int A[], int start, int end)
{
  int pivot = A[end];
  int pindex = start;
  int temp;
  for (int i = start; i < end; i++)
    {
      if (A[i] <= pivot)
	{
	  temp = A[i];
	  A[i] = A[pindex];
	  A[pindex] = temp;
	  pindex++;
	}
    }
  temp = A[pindex];
  A[pindex] = pivot;
  A[end] = temp;
  return pindex;
}

void
QuickSort (int *A, int start, int end)
{
  if (start < end)
    {
      int partitionIndex = Partition (A, start, end);
      QuickSort (A, start, partitionIndex - 1);
      QuickSort (A, partitionIndex + 1, end);
    }
}

int
main ()
{
  int A[] = { 7, 6, 5, 4, 3, 2, 1, 0 };
  std::cout << "Before Sorting" << std::endl;
  for (int i = 0; i < 8; i++)
    {
      std::cout << A[i] << " ";
    }
  std::cout << std::endl;

  QuickSort (A, 0, 7);

  std::cout << "After Sorting" << std::endl;
  for (int i = 0; i < 8; i++)
    {
      std::cout << A[i] << " ";
    }

  return 0;
}
