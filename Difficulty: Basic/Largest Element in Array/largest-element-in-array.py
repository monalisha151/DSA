
from typing import List


class Solution:
    def largest(self, arr):
        # code here
        n=len(arr)
        max_val = float('-inf')
        for i in range(n):
            if arr[i]>max_val:
                max_val=arr[i]
        return max_val
        



#{ 
 # Driver Code Starts
class IntArray:

    def __init__(self) -> None:
        pass

    def Input(self, n):
        arr = [int(i) for i in input().strip().split()]  #array input
        return arr

    def Print(self, arr):
        for i in arr:
            print(i, end=" ")
        print()


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):

        arr = list(map(int, input().split()))

        obj = Solution()
        res = obj.largest(arr)

        print(res)
        print("~")

# } Driver Code Ends