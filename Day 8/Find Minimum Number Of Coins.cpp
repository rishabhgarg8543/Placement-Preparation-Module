int findMinimumCoins(int amount)
{
    // Write your code here
    int arr[9] = {1, 2, 5, 10, 20, 50, 100, 500, 1000};
    int ans = 0;

    for (int i = 8; i >= 0; i--)
    {
        ans = ans + amount / arr[i];
        amount = amount % arr[i];
    }
    return ans;
}
