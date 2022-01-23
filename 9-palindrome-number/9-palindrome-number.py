class Solution:
    def isPalindrome(self, x: int) -> bool:
        x_string=str(x)
        return x_string[::-1]==x_string
        