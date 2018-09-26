#include <stdio.h>
#include <string.h>

int demo_one(){
  printf("Function:\nchar *strcat(char *dest, const char *src)\n");
  printf("----CORRECT USE----\n");
  char str_one[7] = "ABC", str_two[10] = "123";
  printf("char str_one[7] = \"ABC\"\nchar str_two[10] = \"123\"\n\n");

  printf("str_one: %p, str_two: %p\n", str_one, str_two);
  printf("src: str_two  |  dest: str_one\n");
  printf("return value of strcat(str_one, str_two): %p\n", strcat(str_one, str_two));
  printf("str_one: %s\n", str_one);
  printf("str_two: %s\n\n", str_two);

  printf("str_one: %p, str_two: %p\n", str_one, str_two);
  printf("src: str_one  |  dest: str_two\n");
  printf("return value of strcat(str_two, str_one): %p\n", strcat(str_two, str_one));
  printf("str_one: %s\n", str_one);
  printf("str_two: %s\n\n\n", str_two);


  printf("----INCORRECT USE----\n");
  char str_1[6] = "ABC", str_2[6] = "123";
  printf("char str_1[6] = \"ABC\"\nchar str_2[6] = \"123\"\n\n");

  printf("str_1: %p, str_2: %p\n", str_1, str_2);
  printf("src: str_2  |  dest: str_1\n");
  printf("return value of strcat(str_1, str_2): %p\n", strcat(str_1, str_2));
  printf("str_1: %s\n", str_1);
  printf("str_2: %s\n\n", str_2);

}


int demo_two(){
  printf("Function:\nchar *strncat(char *dest, const char *src, size_t n)\n");
  printf("----CORRECT USE----\n");
  char str_one[11] = "ABCDEF", str_two[19] = "123456";
  printf("char str_one[11] = \"ABCDEF\"\nchar str_two[19] = \"123456\"\n\n");

  printf("str_one: %p, str_two: %p\n", str_one, str_two);
  printf("src: str_two  |  dest: str_one\n");
  printf("return value of strncat(str_one, str_two, 4): %p\n", strncat(str_one, str_two,4));
  printf("str_one: %s\n", str_one);
  printf("str_two: %s\n\n", str_two);

  printf("str_one: %p, str_two: %p\n", str_one, str_two);
  printf("src: str_one  |  dest: str_two\n");
  printf("return value of strncat(str_two, str_one, 15): %p\n", strncat(str_two, str_one,15));
  printf("str_one: %s\n", str_one);
  printf("str_two: %s\n\n\n", str_two);


  printf("----INCORRECT USE----\n");
  char str_1[10] = "ABCDEF", str_2[6] = "123456";
  printf("char str_1[6] = \"ABCDEF\"\nchar str_2[6] = \"123456\"\n\n");

  printf("str_1: %p, str_2: %p\n", str_1, str_2);
  printf("src: str_2  |  dest: str_1\n");
  printf("return value of strncat(str_1, str_2, 4): %p\n", strncat(str_1, str_2,4));
  printf("str_1: %s\n", str_1);
  printf("str_2: %s\n\n", str_2);

  printf("str_1: %p, str_2: %p\n", str_1, str_2);
  printf("src: str_1  |  dest: str_2\n");
  printf("return value of strncat(str_2, str_1, 400): %p\n", strncat(str_2, str_1,400));
  printf("str_1: %s\n", str_1);
  printf("str_2: %s\n", str_2);

}

int main(){
  demo_one();
  printf("\n\n\n\n");
  demo_two();
}
