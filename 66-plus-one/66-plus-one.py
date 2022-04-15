class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        carry=1
        i = len(digits)-1
        Sum=0
        while i>=0:
            Sum=digits[i]+carry
            
            if Sum==10:
                carry=1
                digits[i]=0
            else:
                carry=0
                digits[i]=Sum
            i-=1
        if carry:
            digits.insert(0, carry)
        return digits