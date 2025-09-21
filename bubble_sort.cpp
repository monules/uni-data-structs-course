#include <iostream>
int main(int argc, char *argv[])
{
  int arr[] = {2, 4, 5, 6, 4, 77, 99, 4, 22, 1, 7};
  int arr_len = sizeof(arr) / sizeof(arr[0]);

  for (size_t k = 0; k < arr_len - 2; k++)
  {
    int ptr = 1;

    while (ptr <= arr_len - k)
    {
      if (arr[ptr] > arr[ptr + 1])
      {
        arr[ptr] ^= arr[ptr + 1];
        arr[ptr + 1] ^= arr[ptr];
        arr[ptr] ^= arr[ptr + 1];
      }
      ptr++;
    }
  }

  for (auto &&i : arr)
  {
    std::cout << i << ' ';
  }
  std::cout << '\n';

  return 0;
}
