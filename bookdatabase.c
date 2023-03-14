#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * My personal c program library project on the side 
 */
typedef struct {
    char title[50];
    char author[50];
    int year;
} Book;

void swap(Book* a, Book* b) {
    Book temp = *a;
    *a = *b;
    *b = temp;
}

int partition(Book arr[], int low, int high) {
    char pivot[50];
    strcpy(pivot, arr[high].title);

    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (strcmp(arr[j].title, pivot) < 0) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(Book arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    Book library[10] = {
        {"The Great Gatsby", "F. Scott Fitzgerald", 1925},
        {"To Kill a Mockingbird", "Harper Lee", 1960},
        {"1984", "George Orwell", 1949},
        {"Pride and Prejudice", "Jane Austen", 1813},
        {"The Catcher in the Rye", "J.D. Salinger", 1951},
        {"Animal Farm", "George Orwell", 1945},
        {"Brave New World", "Aldous Huxley", 1932},
        {"The Lord of the Rings", "J.R.R. Tolkien", 1954},
        {"One Hundred Years of Solitude", "Gabriel Garcia Marquez", 1967},
        {"Wuthering Heights", "Emily Bronte", 1847}
    };

    int n = sizeof(library) / sizeof(library[0]);

    quickSort(library, 0, n - 1);

    printf("Index:  Title                                              Author                         Year\n");
    printf("-------------------------------------------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%2d:     %-50s %-30s %d\n", i, library[i].title, library[i].author, library[i].year);
    }

    char choice;
    printf("Do you want to upload more books? (y/n): ");
    scanf(" %c", &choice);

    while (choice == 'y') {
        char new_title[50];
        char new_author[50];
        int new_year;

        printf("Enter the details of the book:\n");
        printf("Title: ");
        scanf(" %[^\n]", new_title);
        printf("Author: ");
        scanf(" %[^\n]", new_author);
        printf("Year: ");
        scanf("%d", &new_year);

        Book new_book = {new_title, new_author, new_year};
        library[n] = new_book;
        n++;

        quickSort(library, 0, n - 1);

        printf("Index:  Title                                              Author                         Year\n");
        printf("-------------------------------------------------------------------------------------------\n");
        for (int i = 0; i < n; i++) {
            printf("%2d:     %-50s %-30s %d\n", i, library[i].title, library[i].author, library[i].year);
        }

        printf("Do you want to upload more books? (y/n): ");
        scanf(" %c", &choice);
    }

    return 0;
}
