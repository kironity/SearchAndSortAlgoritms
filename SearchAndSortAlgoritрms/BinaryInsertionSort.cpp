template <class T>
void BinaryInsertionSort(T* a, int n)
{
    for (int i = 1; i < n; i++)
    {
        T x = a[i]; // Вставляемый элемент
        72
            int left = 0; // Левая граница участка вставки
        int right = i - 1; // Правая граница участка вставки
        while (left <= right)
        {
            int j = (left + right) / 2; // Индекс элемента
            // посередине участка вставки
            if (x < a[j]) right = j - 1;
            else left = j + 1;
        }
        // Здесь: нашли место вставки (left>right)
        // Сдвигаем элементы, расположенные правее места вставки
        for (int k = i - 1; k >= left; k--)
            a[k + 1] = a[k];
        a[left] = x;
    }
}