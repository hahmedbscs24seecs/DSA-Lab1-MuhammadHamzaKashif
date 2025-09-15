#include <iostream>
#include <vector>
using namespace std;

void printArr(vector<int> arr)
{
    cout << "{ ";
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << "}" << endl;
}

vector<int> findInd(vector<int> arr, int key)
{
    vector<int> res;
    for (int i = 0; i < arr.size(); i++)
        if (arr[i] == key)
            res.push_back(i);
    return res;
}

int strfind(string haystack, string needle) {
        int n = haystack.length() - needle.length();
        int k = needle.length();

        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j < k; j++)
            {
                if (haystack[i+j] != needle[j])
                    break;
                if (j == k-1)
                    return i;
            }
        }
        return -1;
    }

int main() {
    // cout << "Welcome to DSA Lab 1!" << endl;
    // cout << "arr= {1, 2, 2, 3, 2, 4} key= 2 res= ";
    // printArr(findInd({1, 2, 2, 3, 2, 4}, 2));
    // cout << "arr= {1, 2, 2, 3, 2, 4} key= 6 res= ";
    // printArr(findInd({1, 2, 2, 3, 2, 4}, 6));
    // cout << "arr= { } key= 2 res= ";
    // printArr(findInd({}, 2));


    cout << "string= \"LchuKiaHaal\" pattern= \"Lchu\" ind= " << strfind("LchuKiaHaal", "Lchu") << endl;
    cout << "string= \"KiaHaalLchu\" pattern= \"Lchu\" ind= " << strfind("KiaHaalLchu", "Lchu") << endl;
    cout << "string= \"KiaHaal\" pattern= \"Lchu\" ind= " << strfind("KiaHaal", "Lchu") << endl;
    cout << "string= \"LchuKiaHaal\" pattern= \"\" ind= " << strfind("LchuKiaHaal", "") << endl;

    return 0;
}

