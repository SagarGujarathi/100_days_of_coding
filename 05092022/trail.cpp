if (s == 0)
{
    return -1;
}
long long sum = 0;
int start = 0;
for (int i = 0; i <= n; i++)
{
    sum += arr[i];
    while (sum > s)
    {
        sum = sum - arr[start];
        start++;
    }
    if (sum == s)
        return { start + 1, i + 1 }
    return { -1 }
}