// Function to calculate GCD
int getGCD(int a, int b) {
    if (b == 0)
        return a;
    return getGCD(b, a % b);
}

// Function to calculate LCM
int getLCM(int a, int b) {
    return (a * b) / getGCD(a, b);
}

int getTotalX(vector<int> a, vector<int> b) {
    int result = 0;
    
    // Get LCM of elements of a
    int lcm = a[0];
    for (int i = 1; i < a.size(); ++i) {
        lcm = getLCM(lcm, a[i]);
    }
    
    // Get GCD of elements of b
    int gcd = b[0];
    for (int i = 1; i < b.size(); ++i) {
        gcd = getGCD(gcd, b[i]);
    }
    
    // Count multiples of LCM that divide the GCD
    int multiple = lcm;
    while (multiple <= gcd) {
        if (gcd % multiple == 0) {
            result++;
        }
        multiple += lcm;
    }
    
    return result;
}