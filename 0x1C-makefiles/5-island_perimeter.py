#!/usr/bin/python3
"""module that returns the perimeter of the island
described in the grid below:
    grid is a list of list of integers: 0 represents a water zone
    1 represents a land zone
    One cell is a square with side length 1
    Grid cells are connected horizontally/vertically (not diagonally).
    Grid is rectangular, width and height don’t exceed 100
    Grid is completely surrounded by water
"""

def island_perimeter(grid):
    """Returns the perimeter of the island described in grid.
    Args:
        grid: List of integers that represent an island
    Returns:
        Perimeter of island.
    """
    width = len(grid[0])
    height = len(grid)
    size = 0
    edges = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
            if (j > 0 and grid[i][j - 1] == 1):
                edges += 1

            if (i > 0 and grid[i - 1][j] == 1):
                edges += 1

perimeter = size * 4 - edges * 2
return (perimeter)
