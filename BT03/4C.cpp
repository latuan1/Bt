#include <iostream>

using namespace std;

int main()
{
    int m,n;
    cin >> m >> n;
    char domin[m][n];
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)cin >> domin[i][j];
    }
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (domin[i][j]==42)cout << "* ";
            else
            {
                int dem=0;
                for (int p=-1;p<=1;p++)
                {
                    for (int q=-1;q<=1;q++)
                    {
                        if (i+p>=0&&i+p<m&&j+q>=0&&j+q<n&&domin[i+p][j+q]==42)dem++;
                    }
                }
                cout << dem << " ";
            }
        }
        cout << endl;
    }
}
