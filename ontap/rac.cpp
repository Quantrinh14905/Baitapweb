#include <iostream>
using namespace std;
int main()
{
 
int *sapXepTangDan(int arr[], int n); 
	{
    int *sortedArr = new int[n];
    for (int i = 0; i < n; i++) 
	{
        sortedArr[i] = arr[i];
    }
    for (int i = 0; i < n - 1; i++) 
	{
        for (int j = i + 1; j < n; j++) 
		{
            if (sortedArr[i] > sortedArr[j]) 
			{
                int temp = sortedArr[i];
                sortedArr[i] = sortedArr[j];
                sortedArr[j] = temp;
            }
        }
    }
	}
	return sortedArr;
}
