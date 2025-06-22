// Bug Identification :
// Incorrect: int max;
// Correct: int max = arr[0];

// Incorrect Behaviour:
// The function may return incorrect results because max is not initialized and holds a garbage value.

// Corrected code:
int findMax(int arr[], int n) 
{
    int max = arr[0];
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] > max) 
        {
            max = arr[i];
        }
    }
    return max;
}
