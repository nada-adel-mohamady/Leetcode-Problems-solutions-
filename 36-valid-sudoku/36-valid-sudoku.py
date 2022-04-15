class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:

        letters=[]
        #validate rows 
        for i in range(0,9):
            for j in range(0,9):
                letter=board[i][j]
                if letter!=".":
                    str1=letter+" found in col "+str(j)
                    str2=letter+" found in row "+str(i)
                    str3=letter+" found in sub box "+str(int(i/3))+"-"+str(int(j/3))

                    if (str1 in letters) or (str2 in letters) or (str3 in letters):
                        return False
                    else:
                        letters.append(letter+" found in col "+str(j))
                        letters.append(letter+" found in row "+str(i))
                        letters.append(letter+" found in sub box "+str(int(i/3))+"-"+str(int(j/3)))

                         
        return True
        
        