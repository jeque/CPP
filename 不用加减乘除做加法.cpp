//дһ������������������֮�ͣ�Ҫ���ں������ڲ���ʹ��+��-��*��/����������š�

class Solution {
public:
    int Add(int num1, int num2)
    {
        while(num2>0){
            num2--;
            num1++;
        };
        while(num2<0){
            num2++;
            num1--;
        };
        return num1;
    }
};

