#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int cmp(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

char* solve (int n, int* arr) {
   
    qsort(arr, n, sizeof(int), cmp);

    int alex = 0, bob = 0;
    bool turn = true; 
    
    bool used[100001] = {false};

    for(int i = 0; i < n; i++) {
        if(!used[arr[i]]) {
            if(turn)
                alex += arr[i];
            else
                bob += arr[i];

            used[arr[i]] = true;
            turn = !turn;
        }
    }

    if(alex > bob)
        return "Alex";
    else
        return "Bob";
}

int main() {
    int T;
    scanf("%d", &T);
    for(int t_i = 0; t_i < T; t_i++)
    {
        int n;
        scanf("%d", &n);

        int *arr = (int *)malloc(sizeof(int)*(n));
        for(int i = 0; i < n; i++)
            scanf("%d", &arr[i]);

        char* out_ = solve(n, arr);
        printf("%s\n", out_);

        free(arr);
    }
}