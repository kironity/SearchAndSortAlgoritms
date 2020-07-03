template <class T>
void BinaryInsertionSort(T* a, int n)
{
    for (int i = 1; i < n; i++)
    {
        T x = a[i]; // ����������� �������
        72
            int left = 0; // ����� ������� ������� �������
        int right = i - 1; // ������ ������� ������� �������
        while (left <= right)
        {
            int j = (left + right) / 2; // ������ ��������
            // ���������� ������� �������
            if (x < a[j]) right = j - 1;
            else left = j + 1;
        }
        // �����: ����� ����� ������� (left>right)
        // �������� ��������, ������������� ������ ����� �������
        for (int k = i - 1; k >= left; k--)
            a[k + 1] = a[k];
        a[left] = x;
    }
}