#include<stdio.h>
#include<math.h>
using namespace std;


int main(){
    long long int casos, guerreros, fila;
    while(scanf("%ld", & casos) == 1) {
        for(int i = 1 ; i <= casos; i++) {
            scanf("%ld", & guerreros);
            fila = (sqrt(1 + 8 * guerreros) -1)/2;
            printf("%ld\n", fila);
        }
         return 0;
    }
    return 0;
}