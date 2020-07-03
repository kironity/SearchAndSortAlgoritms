template <class T>
void StraightSelectionSort(T* a, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        T min = a[i];
        int ixMin = i;
        for (int k = i + 1; k < n; k++)
        {
            if (a[k] < min)
            {
                min = a[k];
                ixMin = k;
            }
        }
        a[ixMin] = a[i];
        a[i] = min;
    }
}