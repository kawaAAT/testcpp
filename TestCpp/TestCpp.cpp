#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v = { 7, 9, 1, 7, 8, 0, 9, 1, 8 };

    for (int i = 0; i < v.size(); i++) {
        int& controlNumber = v[i];
        int currentDuplicates = 0;

        for (int j = 0; j < v.size(); j++) {
            int& checkingNumber = v[j];

            if (checkingNumber == controlNumber && i != j) {
                currentDuplicates++;
            }
        }

        if (currentDuplicates == 0) {
            std::cout << controlNumber << std::endl;
        }
    }
}