#!/usr/bin/python3
""" Defines function island_perim..."""


def island_perimeter(grid):
    """
        Finde perimeter in an island
    """
    v = set()

    def dfs(i, j):
        """
        dfs algorithm to find the perimitre and stores the visited island
        """
        if i >= len(grid) or j >= len(grid[0]) or \
           i < 0 or j < 0 or grid[i][j] == 0:
            return 1

        if (i, j) in v:
            return 0

        v.add((i, j))
        perm = dfs(i, j + 1)
        perm += dfs(i + 1, j)
        perm += dfs(i, j - 1)
        perm += dfs(i - 1, j)
        return perm

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j]:
                return (dfs(i, j))
