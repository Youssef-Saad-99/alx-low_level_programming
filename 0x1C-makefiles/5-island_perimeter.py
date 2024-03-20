#!/usr/bin/python3
""" Function returns the perimeter of the island """


def island_perimeter(grid):
    """
        Description: function returns the perimeter of the island

        Args:
            grid: is a list of list of integers

        Return:
            perimeter: The perimeter of the island
    """
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

    return perimeter
