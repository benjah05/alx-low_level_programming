#!/usr/bin/python3
"""Island perimeter"""


def island_perimeter(grid):
    """
    grid (args): list of list of integers
    Return: the perimeter of the island described in grid
    """
    length = 0
    width = 0
    for i in range(len(grid)):
        for j in range(len(grid)):
            if grid[i][j] == 1:
                length += 1
                break
    for i in range(len(grid)):
        for j in range(len(grid)):
            if grid[j][i] == 1:
                width += 1
                break
    perimeter = (length + width) * 2
    return (perimeter)
