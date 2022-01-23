class Solution:
    def reverse(self, x: int) -> int:
        x = str(x)
        x = [char for char in x]
        neg=False
        if x[0]=="-":
            x=x[1:]
            neg=True
        x.reverse()
        x = ''.join(x)
        x = int(x)
        if neg:
            x*=-1
        if x >2**31 or x<-2**31:
            return 0
        return x