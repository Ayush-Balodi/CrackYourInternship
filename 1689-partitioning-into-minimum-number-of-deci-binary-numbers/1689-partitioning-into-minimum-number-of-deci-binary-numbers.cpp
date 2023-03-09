class Solution {
public:
    int minPartitions(string n) {
        return *max_element(begin(n) , end(n))-'0';
    }
};
/*
     [2 5 4 9 1]
    1[1 1 1 1 1]
    2[1 1 1 1 0]
    3[0 1 1 1 0]
    4[0 1 1 1 0]
    5[0 1 0 1 0]
    6[0 0 0 1 0]
    7[0 0 0 1 0]
    8[0 0 0 1 0]
    9[0 0 0 1 0]
    from here we can conclude, that to be able to have the minimum number who add up to make a decibinary number will minimum to be atleast the maximum number of the string. 
*/