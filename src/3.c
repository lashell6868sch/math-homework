// A function to generate a random number between 1 and 50
int get_random() {
    // Initialize a random seed using time
    srand(time(NULL));
    // Return a random integer between 1 and 50
    return rand() % 50 + 1;
}
