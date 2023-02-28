#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap_words(char** words, int index_word_1, int index_word_2);
int is_bigger(char* word1, char* word2, int position);
char** sort(int num_words, char** words, int position);

int main(int argc, char **argv) {
    if(argc < 3) {
        printf("Insufficient arguments\n");
        return -1;
    }

    int position = atoi(argv[1]);
    char** sorted_words = sort(argc-2, argv+2, position);

    for(int i = 0; i < argc-2; i++) {
        printf("%s\n", *(sorted_words+i));
    }

    return 0;
}

void swap_words(char** words, int index_word_1, int index_word_2) {
   // I am using pointer arithmetic to access the elements of the words array.
    char* temp = *(words + index_word_1);
    *(words + index_word_1) = *(words + index_word_2);
    *(words + index_word_2) = temp;

}
int position) {
    return (*(pointer_word_1 + position) > *(pointer_word_2 + position));
}

char** sort(int number_words, char** words, int position) {
    for (int i = 0; i < number_words - 1; i++) {
        for (int j = 0; j < number_words - i - 1; j++) {
            if (is_bigger(*(words + j), *(words + j + 1), position)) {
                swap_words(words, j, j + 1);
            }
        }
    }
    return words;
}
