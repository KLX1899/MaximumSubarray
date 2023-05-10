# MaximumSubarray
This program returns the maximum sum of any subarray of the array.

We must write a function in C that takes an array of integers and the length of the array as input, and returns the maximum sum of any subarray of the array. A subarray of an array is a contiguous sequence of elements.

For example, if the input array is {1, -2, 3, 5, -3, 2}, the maximum sum of any subarray is 8, which corresponds to the subarray {3, 5}.

Your function should have the following prototype: int max_subarray_sum(int arr[], int n); where arr is a pointer to the first element of the array, and n is the number of elements in the array. Here's a test case for the max_subarray_sum function with the input array {1, -2, 3, 5, -3, 2}:

{1} (sum = 1)
{-2} (sum = -2)
{3} (sum = 3)
{5} (sum = 5)
{-3} (sum = -3)
{2} (sum = 2)
{1, -2} (sum = -1)
{-2, 3} (sum = 1)
{3, 5} (sum = 8)
{5, -3} (sum = 2)
{-3, 2} (sum = -1)
{1, -2, 3} (sum = 2)
{-2, 3, 5} (sum = 6)
{3, 5, -3} (sum = 5)
{5, -3, 2} (sum = 4)
{1, -2, 3, 5} (sum = 7)
{-2, 3, 5, -3} (sum = 3)
{3, 5, -3, 2} (sum = 7)
{1, -2, 3, 5, -3} (sum = 4)
{-2, 3, 5, -3, 2} (sum = 5)
So the answer is the maximum: - {3, 5} (sum = 8)

Note 1: Please keep in mind that we're looking for the contiguous subarray within the given array that has the largest sum. This means that the elements of the subarray must be adjacent to each other in the original array.

Note 2: A recursive implementation, along with comments and explanations, can earn bonus points.

for reading more about this and Kadane's algorithm, you can click on below link:
https://en.wikipedia.org/wiki/Maximum_subarray_problem
