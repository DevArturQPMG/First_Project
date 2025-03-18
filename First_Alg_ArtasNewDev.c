#include<stdio.h>

int main() {
    int valor;

    printf("Digite um número inteiro: ");
    scanf("%d", &valor);

    if (valor > 15) {
        printf("O número %d é maior que 15.\n", valor);
    } else {
        printf("O número %d não é maior que 15.\n", valor);
    }

    return 0;
}
"configurations": [
    {
        "name": "Win32",
        "includePath": [
            "${workspaceFolder}/**",
            "C:/MinGW/include"
        ],
        "defines": [
            "_DEBUG",
            "UNICODE",
            "_UNICODE"
        ],
        "windowsSdkVersion": "10.0.19041.0",
        "compilerPath": "C:/MinGW/bin/gcc.exe",
        "cStandard": "c11",
        "cppStandard": "c++17",
        "intelliSenseMode": "windows-gcc-x64"
    }
],
"version": 4
}