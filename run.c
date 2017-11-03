#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <dirent.h>

void print_info(char *dir) {
  printf("\nDirectory %s\n", dir);
  struct stat j;
  stat(dir, &j);
  DIR *dirp = opendir(dir);
  printf("Directory size is %lu\n", j.st_size);
  struct dirent *curr;
  while (curr = readdir(dirp)){
    printf("   %s\n", (*curr).d_name);
  }
  closedir(dirp);
}

int main() {
  print_info("..");
}
