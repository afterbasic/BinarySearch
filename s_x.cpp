#include <iostream>
#include <array>
#include <algorithm>
int main() {
  const size_t System_Define_Size = (10);
  int System_Define_Numeric_Search;
  bool Bit_Type_RESULT;
  std::array<int,System_Define_Size>System_Nuneric_Asset;
  System_Nuneric_Asset[0] = (7);
  System_Nuneric_Asset[1] = (2);
  System_Nuneric_Asset[2] = (8);
  System_Nuneric_Asset[3] = (4);
  System_Nuneric_Asset[4] = (5);
  System_Nuneric_Asset[5] = (6);
  System_Nuneric_Asset[6] = (10);
  System_Nuneric_Asset[7] = (1);
  System_Nuneric_Asset[8] = (9);
  System_Nuneric_Asset[9] = (3);
  std::cout << "[0]: " << System_Nuneric_Asset[0] << std::endl;
  std::cout << "[1]: " << System_Nuneric_Asset[1] << std::endl;
  std::cout << "[2]: " << System_Nuneric_Asset[2] << std::endl;
  std::cout << "[3]: " << System_Nuneric_Asset[3] << std::endl;
  std::cout << "[4]: " << System_Nuneric_Asset[4] << std::endl;
  std::cout << "[5]: " << System_Nuneric_Asset[5] << std::endl;
  std::cout << "[6]: " << System_Nuneric_Asset[6] << std::endl;
  std::cout << "[7]: " << System_Nuneric_Asset[7] << std::endl;
  std::cout << "[8]: " << System_Nuneric_Asset[8] << std::endl;
  std::cout << "[9]: " << System_Nuneric_Asset[9] << std::endl;
  std::cout << std::endl;
  std::cout << "Integers value to search: " << std::endl;
  std::cin >> System_Define_Numeric_Search;
  /*Sorting, Binary_Search*/
  std::cout << "load..." << std::endl;
  std::sort(System_Nuneric_Asset.begin(),System_Nuneric_Asset.end());
  std::cout << "[0]: " << System_Nuneric_Asset[0] << std::endl;
  std::cout << "[1]: " << System_Nuneric_Asset[1] << std::endl;
  std::cout << "[2]: " << System_Nuneric_Asset[2] << std::endl;
  std::cout << "[3]: " << System_Nuneric_Asset[3] << std::endl;
  std::cout << "[4]: " << System_Nuneric_Asset[4] << std::endl;
  std::cout << "[5]: " << System_Nuneric_Asset[5] << std::endl;
  std::cout << "[6]: " << System_Nuneric_Asset[6] << std::endl;
  std::cout << "[7]: " << System_Nuneric_Asset[7] << std::endl;
  std::cout << "[8]: " << System_Nuneric_Asset[8] << std::endl;
  std::cout << "[9]: " << System_Nuneric_Asset[9] << std::endl;
  Bit_Type_RESULT = std::binary_search(System_Nuneric_Asset.begin(),System_Nuneric_Asset.end(),System_Define_Numeric_Search);
  if(Bit_Type_RESULT == (true)) {
    std::cout << "Result: found. code = " << Bit_Type_RESULT << std::endl;
  } else {
    std::cout << "Result: not found. code = " << Bit_Type_RESULT << std::endl;
  }
  std::cin.get();
  return 0;
}