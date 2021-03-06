#include <iostream>
int main()
{
    size_t n = 0;
    std::cin >> n;

    long int *a = new long int[n];
    long int *b = new long int[n];
    for (size_t i = 0; i < n; ++i) std::cin >> a[i];
    for (size_t i = 0; i < n; ++i) std::cin >> b[i];

    size_t i0 = 0, j0 = 0, m = 0; // m - a[m] - maybe max, but m > j0

    for (size_t k = 1; k < n; ++k)
    {
        if (b[k] > b[j0]) {
            j0 = k;
            if (m <= j0 && a[m] + b[j0] > a[i0] + b[j0])
                i0 = m;
        } else if (m <= k && a[m] + b[k] > a[i0] + b[j0]) {
            i0 = m;
            j0 = k;
        }
        if (a[k] + b[k] > a[i0] + b[j0]) {
            i0 = k;
            j0 = k;
        } else if (a[k] + b[j0] > a[i0] + b[j0]) {
            if (k <= j0)
                i0 = k;
            else 
                m = k;
        }
    }

    std::cout << i0 << " " << j0 << std::endl;
    delete[] a;
    delete[] b;
    return 0;
}