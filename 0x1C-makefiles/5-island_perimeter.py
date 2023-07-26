#!/usr/bin/python3
""" 5-island_perimeter module """


def island_perimeter(grid):
    """ returns the perimeter of the island described in grid """
    rows = 0
    longest_row = 0
    shortest_row = -1
    count = 0
    for row in grid:
        rows += 1
        if 1 not in row:
            if not count:
                rows = 0
            continue
        if rows > count:
            count = rows
        for index, value in enumerate(row):
            if value == 1:
                if index > longest_row:
                    longest_row = index
                if index < shortest_row or shortest_row < 0:
                    shortest_row = index
    print(longest_row, shortest_row, count)
    if not shortest_row:
        longest_row += 1
    return 2 * (longest_row + count)
