class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        st=set(jewels)
        count=0
        for x in stones:
            if x in st:
                count+=1
        return count

        