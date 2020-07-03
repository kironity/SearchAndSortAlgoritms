template <class T>
void ShellSort(T* a, int n)
{
    int distance = n / 2;
    while (distance > 0)
    {
        // ���������������������, ��������� �� ���������,
        // ��������� ���� �� ����� �� distance,
        // ����������� ���������
        for (int i = distance; i < n; i++)
        {
            T x = a[i];
            int j = i - distance;
            74
                while (j >= 0 && (x < a[j]))
                {
                    a[j + distance] = a[j];
                    j -= distance;
                }
            a[j + distance] = x;
        }
        distance /= 2;
    }
}