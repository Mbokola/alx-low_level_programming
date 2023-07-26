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
                    shortest_row = row.index(1)
                    longest_row = (index + 1) - shortest_row
    return 2 * (longest_row + count)
