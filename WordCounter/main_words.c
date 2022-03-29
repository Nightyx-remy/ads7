#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "Counter.h"

void processLine(counter_t* counter, char* line) {
    // TODO: How does this function work? (Activity 9)
    const char* sep = "\t” (),.;:?!\"\n'";

    char* token = strtok(line, sep);

    while (token) {
        if (strlen(token))
            increment(counter, token);
        token = strtok(NULL, sep);
    }
}

counter_t processFile(const char* fileName) {

    counter_t counter = makeCounter();

    FILE* fp = fopen(fileName, "r");

    if (fp) {
        char buffer[1024];
        while (fgets(buffer, sizeof(buffer), fp)) {
            processLine(&counter, buffer);
        }
    }
    return counter;
}


int main() {
    // TODO: your code for activity 10 goes in here
    return 0;
}
