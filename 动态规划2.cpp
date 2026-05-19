#include <iostream>
using namespace std;

int main() {
    char arr[100];
    int lian, yue, ri;
    
    scanf("%s", arr);  // 读取日期字符串，如"20240502"02/03/04
    
    // 将字符转换为数字：字符'0'的ASCII码是48，所以要减去'0'
    lian = (arr[0] - '0') * 10 + (arr[1] - '0');  // 年（前两位）
    yue = (arr[3] - '0') * 10 + (arr[4] - '0');   // 月
    ri = (arr[6] - '0') * 10 + (arr[7] - '0');    // 日（索引应该是6,7）
    
    printf("%d年", lian);
    printf("%d月", yue);
    printf("%d日", ri);
    
    return 0;
}
