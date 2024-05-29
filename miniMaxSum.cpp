void miniMaxSum(vector<int> arr) {   
    long long sum = 0;
    long mini = arr[0], maxi = arr[0];
    for (int i=0; i<arr.size(); i++)
    {
        sum += arr[i];
        if(arr[i]<mini) 
        {
            mini = arr[i];
        }
        if(arr[i]>maxi)
        {
            maxi = arr[i];
        }
    }
    cout << sum-maxi << " " << sum-mini;
}
