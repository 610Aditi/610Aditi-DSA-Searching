#include<iostream>
using namespace std;

int search(int A[], int n, int k)
{
    int group;
    cout << "Enter group size: ";
    cin >> group;

    int l = 0, r = group - 1;
    int found = 0;           // To track whether the element is found

    while (l < n)            // Loop until we have processed all elements
    {
        if (r >= n)          // If right index exceeds array size, adjust it
            r = n - 1;

        if (k <= A[r])       // If the target may be in the current group
        {
            for (int i = l; i <= r; i++)   // Linear search within the group
            {
                if (A[i] == k)
                {
                cout << "Element found at index = " << i+1 << endl;
                found = 1;                // Mark as found
                break;
                }
            }
        }

        if (found)           // If found, break the outer loop
            break;
        l += group;           // Move to the next group
        r += group;
    }

    if (!found) 
        cout << "Element not found" << endl;

    return 0;
}

int main()
{
    int A[] = {12, 23, 35, 43, 55, 62, 75, 84, 97, 105, 120, 149};
    int n = sizeof(A) / sizeof(A[0]);
    int key;

    cout << "Enter the number you want to search: ";
    cin >> key;

    search(A, n, key);

    return 0;
}
