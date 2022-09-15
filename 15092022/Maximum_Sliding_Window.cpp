#include <iostream>
#include <deque>
#include <vector>

using namespace std;

int main()
{

    int size, sub;
    cin >> size;
    cin >> sub;
    vector<int> array(size);
    for (auto &i : array)
    {
        cin >> i;
    }
    deque<int> dq;
    vector<int> finalarray;

    // Pushing the first 3 inputs
    for (int i = 0; i < sub; i++)
    {
        // Checking if the deque is empty or if the current value in hand is greater then the element on back of dqueue
        while (!dq.empty() && array[dq.back()] < array[i])
        {
            // If elements on left is small then pop it
            dq.pop_back();
        }
        // Pushing inputs in left side
        dq.push_back(i);
    }
    // Pushing the first highest value present on right
    finalarray.push_back(array[dq.front()]);

    // Checking for rest of the array
    for (int i = sub; i < size; i++)
    {
        // If the right value is passed and no longer in the given window then pop it
        if (dq.front() == i - sub)
        {
            dq.pop_front();
        }
        // Now like previously pop the elements in left if it is smaller than the element in hand
        while (!dq.empty() && array[dq.back()] < array[i])
        {
            dq.pop_back();
        }
        // Pushing the value to right
        dq.push_back(i);
        // Sending the right most element to answer
        finalarray.push_back(array[dq.front()]);
    }

    for (auto i : finalarray)
    {
        cout << i << " ";
    }
    return 0;
}