#!/usr/bin/python3
"""Perimeter of an Island"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid
    """
    overlapped_perimeter = 0
    island = 0
    for v in range(len(grid)):
        for h in range(len(grid[v])):
            if (v != 0 and grid[v - 1][h] == 1 and grid[v][h] == 1):
                overlapped_perimeter += 2
            if (h != 0 and grid[v][h - 1] == 1 and grid[v][h] == 1):
                overlapped_perimeter += 2
            if (grid[v][h] == 1):
                island += 1
    total_island = 4 * island  # since the island is square
    perimeter = total_island - overlapped_perimeter
    return perimeter
