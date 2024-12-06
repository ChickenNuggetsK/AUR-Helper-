#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <git2.h>
#include <stdio.h>


#define PACKAGE "insert_package_name"






#define BASE_URL "https://aur.archlinux.org/"
#define PACKAGE_URL BASE_URL PACKAGE ".git"
// Please imagine a complex codebase, I thought it was going to be a bit more challenging
void main(void) {
	
   git_libgit2_init();
	    git_repository *repo = NULL;


                          char cmd[100000];
       snprintf(cmd, sizeof(cmd), "rm -rf %s", "./thisisafileforthisfabulousaurhelpher.");


          system(cmd);


	                            if (git_clone(&repo, PACKAGE_URL, "./thisisafileforthisfabulousaurhelpher.", NULL) != 0) {
		const git_error *err = git_error_last();
	    printf("We couldn't clone the git file. Please download it on another computer and retype it on this one.");

	}

	FILE *fp = popen("bash -c 'source ./thisisafileforthisfabulousaurhelpher./PKGBUILD && echo ${depends[@]}'", "r");

    char dependency[100000];
    			while (fscanf(fp, "%s", dependency) == 1) {
     snprintf(cmd, sizeof(cmd), "pacman -Q %s > /dev/null 2>&1", dependency);


chdir("./thisisafileforthisfabulousaurhelpher.");


     	   if (system(cmd) != 0) {
        	    printf("Please install %s first. Don't blame us, we do not choose this, but the maintainer did.\n", dependency);
		             return;
           pclose(fp);
        }                                                                                }if (system("makepkg -si") != 0) {  // -si flag to install after building
                       puts("Please contact the maintainer and tell him to fix his PKGBUILD, an error occured during package build/instalation and our app is flowless so it can't be from us.\n");
    }

	                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 git_repository_free(repo);
	git_libgit2_shutdown();

}
