#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, m, res;
	char c[20][20];
    cin>>n>>m;
    for (int i = 1; i <= n; i++) 
	{
        for (int j = 1; j <= m; j++) 
		{
            cin >> c[i][j];            
        }
    }
    for (int x = 1; x <= n; x++) 
	{
        for (int y = 1;y <= m; y++)
		{
            int r = 0;
            while (c[x + r][y] == 'G' && c[x - r][y] == 'G' && c[x][y + r] == 'G' && c[x][y - r] == 'G') 
			{
                c[x + r][y] = c[x - r][y] = c[x][y + r] = c[x][y - r] = 'g';
                for (int i = 1; i <= n; i++) 
				{
                    for (int j = 1; j <= m; j++)
					{
                        int R = 0;
                        while (c[i + R][j] == 'G' && c[i- R][j] == 'G' && c[i][j + R] == 'G' && c[i][j - R] == 'G')
						{
                            res = max(res, (1 + 4 * r) * (1 + 4 * R));
                            R++;
                        }
                    }
                }
                r++;
            }
            r = 0;
            while (c[x + r][y] == 'g' && c[x - r][y] == 'g' && c[x][y + r] == 'g' && c[x][y - r] == 'g') 
			{
                c[x + r][y] = c[x - r][y] = c[x][y + r] = c[x][y - r] = 'G';
                r++;
            }
        }
    }
    cout << res << endl;
    return 0;
}
