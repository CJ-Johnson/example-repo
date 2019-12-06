#include <cstdio>

namespace ns {
class MyClass {
 public:
  int violation_public_class_member_ = 0;

  explicit MyClass(int violation_non_explicit)
      : data_(violation_non_explicit) {}

  int data() const { return data_; }

 private:
  int data_ = 0;
};
// Violation closing namespace
} // namespace ns

int main() {
  ns::MyClass m(5);

  return m.violation_public_class_member_ + m.data();
}
