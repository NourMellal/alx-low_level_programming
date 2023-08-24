#!/usr/bin/python3
""" Define island perimetre function"""


def island_perimeter(grid):
    """
    Calculate the perimeter of an island in the grid using DFS.
    """
    rows = len(grid)
    cols = len(grid[0])
    v = set()

    def dfs(i, j):
        """
        dfs algorithm to find the perimitre and stores the visited island
        """
        if i < 0 or i >= rows or j < 0 or j >= cols or grid[i][j] == 0:
            return 1

        if (i, j) in v:
            return 0

        v.add((i, j))
        perimeter = 0

        perimeter += dfs(i, j + 1)
        perimeter += dfs(i + 1, j)
        perimeter += dfs(i, j - 1)
        perimeter += dfs(i - 1, j)

        return perimeter

    total_perimeter = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                total_perimeter += dfs(i, j)

    return total_perimeter
