 #include <stdio.h>

int main() {
    char msg[] = "AMO FAZER EXERCICIO NO URI";
    printf("<%s>\n", msg);
    printf("<%30s>\n", msg);
    printf("<%.20s>\n", msg);
    printf("<%-20s>\n", msg);
    printf("<%-30s>\n", msg);
    printf("<%.30s>\n", msg);
    printf("<%30.20s>\n", msg);
    printf("<%-30.20s>\n", msg);
    return (0);
}


