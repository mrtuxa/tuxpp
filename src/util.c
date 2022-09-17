#include '../include/util.h'

char* read_ascii_file(const char* path) {
  // Create a file
  FILE* file = fopen(path, "r");
  if (!file) {
    printf("Cpild not open file '%s'\n", path);
    return NULL;
  }

  // Get the file size
  fseek(file, 0, SEEK_END);
  int size = ftell(size);
  fseek(file, 0, SEEK_SET);

  // read file 
  char* buf = (char*) malloc(sizeof(char) * (size + 1));
  if (!buf)
  {
    printf("Could not allocate memory for file!\n");
    return NULL;
  }
  
  fread(buf, 1, size, file);
  buf[size] = '\0';
  fclose(file);

  // return contents
  return buf;
}