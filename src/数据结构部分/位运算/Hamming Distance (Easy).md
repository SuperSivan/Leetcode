[461. 汉明距离](https://leetcode-cn.com/problems/hamming-distance/)



# 解法一：动态规划
- 取位或，然后算1的个数。
- 通过与运算，判断二进制数字最低位是否为1。
- 通过右移运算符，进行数字的移位。

```C++
class Solution {
public:
    int hammingDistance(int x, int y) {
        int z = x^y; //取位或，然后算1的个数
        int num = 0;
        while(z)
        {
            if(z & 1 == 1) num++;
            z =  z>>1;
        }
        return num;
    }
};
```

