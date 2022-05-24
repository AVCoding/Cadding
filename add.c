#include <stdint.h>

int addThree(uint8_t *buf, int len) {
  uint8_t *item;
  uint8_t *end = buf + len;

  for (item = buf; item<end; item++) {
    *item += 3;
  }

  return 0;
}



// #include <emscripten.h>

// int main() { 
//   return 42;
// }


// void reverse(unsigned char* p, int len) {
//     for (int i = 0; i < len / 2; ++i) {
//         unsigned char temp = p[i];
//         p[i] = p[len - i - 1];
//         p[len - i - 1] = temp;
//     }
// }