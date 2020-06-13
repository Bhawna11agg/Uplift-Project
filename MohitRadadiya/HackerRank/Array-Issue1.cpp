int Solution::firstMissingPositive(vector &A) {
    sort(A.begin(), A.end());
    int c = 1;
    for (auto const& i : A)
    {
        if (i<1)
        continue;
        else if (i==c)
        {
           ++c;
           continue;
        }
        else
        break;
    }
    return c;
}
