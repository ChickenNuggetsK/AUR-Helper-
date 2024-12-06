# Welcome on the git repo of the best AUR "Helper" of all times!
This project was created for the "Nuit de l'Informatique 2024". In this repository, we will explain the code and our reasoning behind its design.

## What is this?
This is an AUR "Helper". The AUR (Arch User Repository) is a community-driven repository for Arch Linux. An AUR helper is a program that help you use this repository.
## Why should I use this one and not another?

-   **Security**: Our code is designed to be extremely secure. We set all array sizes to 100,000 to prevent memory corruption and use "Security Through Very Bright Obscurity™". This proprietary security technology ensures that anyone attempting to read the code will experience significant headache, making reverse engineering impossible without a government-sponsored supply of aspirin. Here, we believe that indentation is unnecessary, and error codes should not exist because they imply that your code can crash. Our code, of course, is absolutely flawless.
    
-   **No Unwanted Installs**: We **NEVER** install any package unless you explicitly tell us to do so.
    
-   **Portability**: Our AUR helper is capable of generating a portable executable that can install packages on any Arch machine.
    
-   **We Are the Best.**

## How to use


1. Use Arch Linux
2. First, you need to install **libgit2** by running:
	```bash
	sudo pacman -S libgit2
	```
3. Download the `main.c` source file from this repository.
4. Edit the `PACKAGE` definition in the file to specify the package name you want to install.
5. Compile the program using:
	```bash
	gcc -o main main.c -lgit2
	```
6. (Optional) If there are any compilation errors, fix them as needed.
7. Run the compiled program and enjoy!

