class Solution:
    def findMinArrowShots(self, points: List[List[int]]) -> int:
        # sort the points by the end coordinate
        points.sort(key = lambda x: x[1])
        arrow_count = 1
        current_start, current_end = points[0][0], points[0][1]
        
        # iterate through the remaining points
        for start, end in points[1:]:
            # if the start coordinate of the current point is after the end coordinate of the current interval,
            # increment arrow_count by 1 and update current_start and current_end
            if start > current_end:
                arrow_count += 1
                current_start, current_end = start, end
        
        return arrow_count