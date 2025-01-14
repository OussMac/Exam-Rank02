
typedef struct  s_point
{
    int x;
    int y;
}   t_point;


void    fill(char **tab, t_point size, t_point begin, char target)
{
    int x_max = size.x;
    int y_max = size.y;

    int t_x = begin.x;
    int t_y = begin.y;


    // checking for out of bounds or is not target character
    if (t_x < 0 || t_y < 0 || t_x >= x_max || t_y >= y_max || tab[t_y][t_x] != target)
        return;
    
    //replace if the bounds check is valid
    tab[t_y][t_x] = 'F';

    //check neigbers --> up down left right

    // right
    fill (tab, size, (t_point){begin.x + 1 , begin.y}, target);
    // left
    fill (tab, size, (t_point){begin.x - 1 , begin.y}, target);
    // up
    fill (tab, size, (t_point){begin.x , begin.y - 1}, target);
    // down
    fill (tab, size, (t_point){begin.x , begin.y + 1}, target);

}

void    flood_fill(char **tab, t_point size, t_point begin)

{
    fill(tab, size, begin, tab[begin.y][begin.x]);
}

// #include <stdlib.h>
// #include <stdio.h>

// char** make_area(char** zone, t_point size)
// {
// 	char** new;

// 	new = malloc(sizeof(char*) * size.y);
// 	for (int i = 0; i < size.y; ++i)
// 	{
// 		new[i] = malloc(size.x + 1);
// 		for (int j = 0; j < size.x; ++j)
// 			new[i][j] = zone[i][j];
// 		new[i][size.x] = '\0';
// 	}

// 	return new;
// }

// int main(void)
// {
// 	t_point size = {8, 5};
// 	char *zone[] = {
// 		"11111111",
// 		"10001001",
// 		"10010001",
// 		"10110001",
// 		"11100001",
// 	};

// 	char**  area = make_area(zone, size);
// 	for (int i = 0; i < size.y; ++i)
// 		printf("%s\n", area[i]);
// 	printf("\n");

// 	t_point begin = {7, 4};
// 	flood_fill(area, size, begin);
// 	for (int i = 0; i < size.y; ++i)
// 		printf("%s\n", area[i]);
// 	return (0);
// }