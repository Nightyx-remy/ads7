//
// Created by Dawid Zalewski on 06/12/2020.
//

#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <string.h>
#include "LetterCounter.h"
#include "LangugageRecognizer.h"

void demo(){
    unsigned long counts[26] = {0};
    const char* text = "Alice in Wonderland.";
    (void)countLetters(&counts[0], text);
    printCounts(&counts[0], false, false);
}

unsigned long* processFile(const char* fileName) {

    unsigned long * counts = calloc(sizeof(unsigned long[ALPHABET_SIZE]), sizeof(unsigned long));

    FILE* fp = fopen(fileName, "r");
    unsigned long sum = 0;
    if (fp) {
        char buffer[1024];
        while (fgets(buffer, sizeof(buffer), fp)) {
            sum += countLetters(&counts[0], buffer);
        }
        printf("In total counted %ld letters.\n", sum);
    }
    return counts;
}

int main(){
}
