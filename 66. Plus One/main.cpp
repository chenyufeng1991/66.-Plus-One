//
//  main.cpp
//  66. Plus One
//
//  Created by chenyufeng on 10/4/16.
//  Copyright © 2016 chenyufeng. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

vector<int> plusOne(vector<int>& digits)
{
    for (long i = digits.size() - 1; i >= 0; i--)
    {
        if (digits[i] + 1 == 10)
        {
            digits[i] = 0;
            if (i == 0)
            {
                // 头部插入1；
                digits.insert(digits.begin(), 1);
            }
            continue;
        }
        else
        {
            digits[i] += 1;
            break;
        }
    }

    return digits;
}

int main(int argc, const char * argv[])
{
    int arr[] = {9,9,9};
    vector<int>vv(arr,arr+sizeof(arr)/sizeof(int));
    vector<int> result;
    result = plusOne(vv);

    return 0;
}




