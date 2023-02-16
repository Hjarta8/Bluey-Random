#include <iostream>
#include <random>
#include <cstdlib>

int main() {
    // URLs for every episode of Bluey on Disney Plus
    std::string urls[] = {
        "https://www.disneyplus.com/video/f2f6e257-6f53-47dc-b5d5-d24c5e194e8a", // Episode 1 - The Magic Xylophone
        "https://www.disneyplus.com/video/cdc991c9-21f8-4223-bd94-0b0e57ceba8a", // Episode 2 - Hospital
        "https://www.disneyplus.com/video/b86d6d26-c6ca-4a7b-9ec9-1ef08292c76f", // Episode 3 - Keepy Uppy
        "https://www.disneyplus.com/video/9c9fc1d9-6c01-4e72-9474-4a4b4a50e7e4", // Episode 4 - Daddy Robot
        "https://www.disneyplus.com/video/13d0f72f-811e-40aa-b9cc-9f06e720f16b", // Episode 5 - BBQ
        // Add more URLs for the remaining Bluey episodes here
    };

    // Set up random number generator
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(0, sizeof(urls) / sizeof(*urls) - 1);
    // Note: sizeof(urls) returns the total size of the urls array in bytes,
    // and sizeof(*urls) returns the size of each element in the array.
    // Dividing the former by the latter gives us the number of elements in the array.

    // Generate a random index into the urls array
    int random_index = dist(gen);

    // Open the Disney Plus webpage for the randomly selected episode
    std::system(("start " + urls[random_index]).c_str());

    return 0;
}
