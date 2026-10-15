#include "holiday.h"

#include <array>

namespace KimYeonjin2693058
{
    void printHolidayArray(const holiday a[], const int n)
    {
        for (int i = 0; i < n; ++i)
            std::cout << a[i];
        std::cout << std::endl;
    }
}

int main()
{
    const int n{4};
    using namespace KimYeonjin2693058;
    holiday a[n];
    a[0] = holiday{"Christmas", dayOfYear{12, 25}, false};
    a[1].setName("NewYear day");a[1].setDate(dayOfYear{1,1});a[1].setParkingEnforcement(false);
    a[2].input();
    std::cin >> std::ws >> a[3];
    printHolidayArray(a,n);

    std::array<holdiay, n> arr{};
    for (int i = 0; i < arr.size(); ++i)
        arr.auto(i) = a[i];//arr[i] = a[i];
    for (const auto& arri : arr)
        arri.print();

    return 0;
}