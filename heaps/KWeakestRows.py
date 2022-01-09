class Solution:
    def sum_Row(self,rw):
        sum = 0
        for i in rw[1]:
            sum+=i
        return sum
    def kWeakestRows(self, mat: List[List[int]], k: int) -> List[int]:
        ls = []
        obj = list(enumerate(mat))
        obj.sort(key=self.sum_Row)
        for i in range(k):
            ls.append(obj[i][0])
        return ls