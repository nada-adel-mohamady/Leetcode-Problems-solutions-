class Solution:
    def addBinary(self, a: str, b: str) -> str:
        decimal_a = int(a,2) 
        decimal_b = int(b,2) 
        decimal_res=decimal_a+decimal_b
        bin_res=bin(decimal_res)
        return str(bin_res[2::])