class Solution:
    def equalSubstring(self, s: str, t: str, maxCost: int) -> int:
        cost= [abs(ord(s[i]) - ord(t[i])) for i in range(len(s))]

        i = 0
        curr_cst = 0
        max_len = 0

        for j in range(len(s)):
            curr_cst += cost[j]

            if curr_cst > maxCost:
                curr_cst -= cost[i]
                i+=1
            max_len = max(max_len, j-i+1)
        return max_len