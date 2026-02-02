/*
Delete an Element from an Array

Problem: Write a C program to delete the element at a given 1-based position pos from an array of n integers. Shift remaining elements to the left.

Input:
- First line: integer n
- Second line: n space-separated integers
- Third line: integer pos (1-based position to delete)

Output:
- Print the updated array with (n-1) elements, space-separated

Example:
Input:
5
10 20 30 40 50
2

Output:
10 30 40 50

Explanation: Delete position 2 (element 20), remaining elements shift left
*/

#include <stdio.h>
void main()
{
	int n,pos,x,del;
	printf("enter no. of elements: ");
	scanf("%d",&n);
	
	int a[n];
	for (int i=0; i<n ; i++)
	{
		printf("enter element: ");
		scanf("%d",&a[i]);
	}
	
	printf("enter position to delete from: ");
	scanf("%d",&pos);
	x=pos-1;
	
	del=a[x];
	for (int i=pos ; i<n ; i++)
	{
		a[i-1]=a[i];
	}
	n--;
	
	printf("new array: ");
	for (int i=0 ; i<n ; i++)
		printf("%d",a[i]);
}
