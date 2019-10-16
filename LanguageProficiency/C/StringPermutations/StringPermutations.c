#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CHECK_HERE printf("I am here\n")
#define CHECK_INTVAR(X) printf("%d\n",X)

int next_permutation(int n, char **s)
{   
    // Algorithm of next permutation is defined on wikipedia
    // find largest i such that s[i] < s[i+1]
    int i = n-2;
    while(strcmp(s[i], s[i+1]) >= 0) {
        i--;
        if(i < 0) return 0; // last permutation
    }
    
    // find the largest j greater than i such that s[i] < s[j]
    int j = n-1;
    while(j > i+1 && strcmp(s[i], s[j]) >= 0) j--;
    // swap the elements s[i] and s[j]
    char *temp1 = s[i];
    char *temp2 = s[j];
    s[i] = temp2;
    s[j] = temp1;

    // reverse the sequence s[i+1] to s[n-1]
    for(int st = i+1, e = n-1; st < e; st++, e--) {
        char *temp1 = s[st];
        char *temp2 = s[e];
        s[st] = temp2;
        s[e] = temp1;
    }

    return 1;
}

int main()
{
	char **s;
	int n;
	scanf("%d", &n);
	s = calloc(n, sizeof(char*));
	for (int i = 0; i < n; i++)
	{
		s[i] = calloc(11, sizeof(char));
		scanf("%s", s[i]);
	}
	do
	{
		for (int i = 0; i < n; i++)
			printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
	} while (next_permutation(n, s));
	for (int i = 0; i < n; i++)
		free(s[i]);
	free(s);
	return 0;
}