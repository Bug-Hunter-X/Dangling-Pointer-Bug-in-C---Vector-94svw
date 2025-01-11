std::vector<int> vec; 
for (int i = 0; i < 10; ++i) {
  vec.push_back(i); 
}
std::vector<int> vec2 = vec; // create a copy to avoid dangling pointer
int* ptr = &vec2[0]; 
vec.clear();
ptr[0] = 10; // access through vec2 which is a copy