#!/usr/bin/python3
"""
5 - island Perimeter
"""

def island_perimeter(grid):
    """
    returns the perimeter of the island
    """
    width = len(grid[0]) - 1
    height = len(grid) - 1
    perimeter = 0
    count = 0

    for i in range(1, width):
        for j in range(1, height):
            if grid[i][j] == 1:
                # check adjacent cells
                if grid[i][j + 1] == 1:
                    count += 1
                if grid[i][j - 1] == 1:
                    count += 1
                if grid[i + 1][j] == 1:
                    count += 1
                if grid[i - 1][j] == 1:
                    count += 1
                # calculate perimeter of cell
                perimeter = 4 - count
                count = 0
    return perimeter
