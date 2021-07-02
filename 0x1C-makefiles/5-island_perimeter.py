#!/usr/bin/python3
''' Function that calculates the perimeter of an island '''


def island_perimeter(grid):
    ''' Calculates the perimeter '''
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if (grid[i][j] == 1):
                if i - 1 <= 0:
                    perimeter += 1
                elif grid[i - 1][j] == 0:
                    perimeter += 1

                if i + 1 >= len(grid):
                    perimeter += 1
                elif grid[i + 1][j] == 0:
                    perimeter += 1

                if j - 1 <= 0:
                    perimeter += 1
                elif grid[i][j - 1] == 0:
                    perimeter += 1

                if j + 1 >= len (grid[i]):
                    perimeter += 1
                elif grid[i][j + 1] == 0:
                    perimeter += 1

    return perimeter
