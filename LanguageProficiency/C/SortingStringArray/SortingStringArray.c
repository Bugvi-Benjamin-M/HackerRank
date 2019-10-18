#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// #define BUBBLE_SORT
// #define SELECTION_SORT
// #define INSERTION_SORT
#define MERGE_SORT

int lexicographic_sort(const char* a, const char* b) {
    // Using built in functions
    // return strcmp(a,b) <= 0 ? 1 : 0;

    // Calculating lexographic order manually
    for(int i = 0; a[i] != '\0' && b[i] != '\0'; i++) {
        if(a[i] == b[i]) continue;
        else if(a[i] < b[i]) return 1;
        else return 0;
    }
    // To handle edge case
    return (!(strlen(a) > strlen(b)));
}

int lexicographic_sort_reverse(const char* a, const char* b) {
    // A negation of lexicographic ordering
    return !lexicographic_sort(a,b);
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    // Assuming standard ASCII
    // O(n) with two passes per string
    int chars1[128] = {0};
    int length1 = strlen(a);
    for (int i = 0; i < length1; i++)
    {
        chars1[a[i]] = 1;
    }
    int distinct1 = 0;
    for (int i = 0; i < 128; i++) distinct1 += chars1[i];
    
    int chars2[128] = {0};
    int length2 = strlen(b);
    for (int j = 0; j < length2; j++)
    {
        chars2[b[j]] = 1;
    }
    int distinct2 = 0;
    for (int j = 0; j < 128; j++) distinct2 += chars2[j];

    if(distinct1 == distinct2) return lexicographic_sort(a,b);
    else if(distinct1 > distinct2) return 0;
    else return 1;
}

int sort_by_length(const char* a, const char* b) {
    int length1 = 0;
    int length2 = 0;

    // using built in functions
    // length1 = strlen(*a);
    // length2 = strlen(*b);

    // Manually calculate length
    while(a[length1] != '\0') length1++;
    while(b[length2] != '\0') length2++;
    
    if(length1 == length2) return lexicographic_sort(a,b);
    return length1 < length2 ? 1 : 0; 
}

void swap(char **a, char **b) {
    char *temp = *a;
    *a = *b;
    *b = temp;
}

void merge(char **arr, char **aux, int start, int middle, int end, int (*cmp_func)(const char* a, const char* b)) {
    for (int k = start; k <= end; k++) aux[k] = arr[k];
    
    int i = start, j = middle+1;
    for (int k = start; k <= end; k++)
    {
        if(i > middle) arr[k] = aux[j++];
        else if(j > end) arr[k] = aux[i++];
        else if(!cmp_func(aux[i], aux[j])) arr[k] = aux[j++];
        else arr[k] = aux[i++];
    }
}

void merge_sort(char **arr, char **aux, int start, int end, int (*cmp_func)(const char* a, const char* b)) {
    if(end <= start) return;
    int middle = start + (end - start) / 2;
    merge_sort(arr, aux, start, middle, cmp_func);
    merge_sort(arr, aux, middle+1, end, cmp_func);
    merge(arr, aux, start, middle, end, cmp_func);
}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
#ifdef BUBBLE_SORT
    char *temp;
    for (int i = 0; i < len-1; i++)
    {
        for (int j = 0; j < len-1-i; j++)
        {
            if(!cmp_func(arr[j], arr[j+1])) swap(&arr[j],&arr[j+1]);
        }
    }    
#endif
#ifdef SELECTION_SORT
    for (int i = 0; i < len-1; i++)
    {
        int min_idx = i;
        for (int j = i+1; j < len; j++)
        {
            if(!cmp_func(arr[min_idx], arr[j])) swap(&arr[min_idx], &arr[j]);
        }
    }
#endif
#ifdef INSERTION_SORT
    for (int i = 0; i < len; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if(!cmp_func(arr[j-1], arr[j])) swap(&arr[j], &arr[j-1]);
        }
    }
#endif
#ifdef MERGE_SORT
    char **aux = (char**)malloc(len * sizeof(char*));
    merge_sort(arr, aux, 0, len-1, cmp_func);
#endif
}
int main() 
{
    int n;
    scanf("%d", &n);
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
  
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");
    return 0;
}