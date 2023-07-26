#!/usr/bin/python3
"""solution for the
island perimeter interview
question"""


def island_perimeter(grid):
    """function that calculates the
    of a island given the grid
    """
    per = 0
    for i in range(0, len(grid)):
        for j in range(0, len(grid[i])):
            if grid[i][j] == 1:
                per += 4
                if i > 0 and grid[i - 1][j] == 1:
                    per -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    per -= 2
    return per
