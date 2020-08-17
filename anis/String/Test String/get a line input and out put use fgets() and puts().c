
#include <stdio.h>
int main()
{
    char a[30];
    fgets(a,sizeof(a),stdin);
    puts(a);
    return 0;
}
