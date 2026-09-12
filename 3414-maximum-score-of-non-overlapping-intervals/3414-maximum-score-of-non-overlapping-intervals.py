
class Solution:
    def maximumWeight(self, intervals: list[list[int]]) -> list[int]:
        n = len(intervals)

        # Store:
        # (left, right, weight, original_index)
        arr = [
            (l, r, w, i)
            for i, (l, r, w) in enumerate(intervals)
        ]

        # Sort by ending position
        arr.sort(key=lambda x: x[1])

        ends = [x[1] for x in arr]

        # prev[i] = number of intervals before i that
        # can be used together with interval i.
        #
        # We need previous_r < current_l
        prev = [0] * n

        for i in range(n):
            l = arr[i][0]

            # First ending >= l
            # Everything before that has ending < l.
            prev[i] = bisect_left(ends, l, 0, i)

        # dp[i][k] = best answer using first i intervals
        # with at most k intervals.
        #
        # Store (score, tuple_of_indices)
        dp = [[(0, ()) for _ in range(5)] for _ in range(n + 1)]

        for i in range(1, n + 1):
            l, r, w, idx = arr[i - 1]

            for k in range(1, 5):

                # Don't take current interval
                best = dp[i - 1][k]

                # Take current interval
                p = prev[i - 1]

                old_score, old_indices = dp[p][k - 1]

                candidate = (
                    old_score + w,
                    tuple(sorted(old_indices + (idx,)))
                )

                # Better score, or same score + lexicographically smaller
                if candidate[0] > best[0]:
                    best = candidate
                elif candidate[0] == best[0]:
                    if candidate[1] < best[1]:
                        best = candidate

                dp[i][k] = best

        return list(dp[n][4][1])

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna