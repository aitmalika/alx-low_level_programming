#!/usr/bin/python3
"""define an island perimeter measuring function"""


def island_perimeter(grid):
    """return the perimiter of an island

    this grid represent water by 0 and land by 1

    arg:
        grid (list): A list of list of integer representing an island
    return:
        this perimeter of this island defined in grid
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
