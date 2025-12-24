class Solution:
    def maximumSwap(self, num: int) -> int:
        digits = list(str(num))
        last = {int(d): i for i, d in enumerate(digits)}

        for i, d in enumerate(digits):
            for x in range(9, int(d), -1):
                if x in last and last[x] > i:
                    j = last[x]
                    digits[i], digits[j] = digits[j], digits[i]
                    return int("".join(digits))

        return num
