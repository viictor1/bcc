#include <stdio.h>

void writeArray(const char* filepath, int n, const int* v) {
    FILE* file = fopen(filepath, "wb");

    if (file == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return;
    }
    fwrite(v, sizeof(int), n, file);

    fclose(file);

    printf("Conteúdo gravado com sucesso no arquivo '%s'.\n", filepath);
}

int main() {
    int v[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    writeArray("dados.bin", 10, v);

    return 0;
}
