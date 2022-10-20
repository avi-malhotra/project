#include <iostream>

#include "Attribute.h"

using namespace std;

int main() {
  {
    int test_n = 1;
    Attribute Attribute;
    if (Attribute.get_rates() != 0) {
      cout << "An Error in present in the test number: " << test_n << endl;
    }
    Attribute.set_rates(4);
    if (Attribute.get_rates() != 4) {
      cout << "An Error in present in the test number: " << test_n << endl;
    }
  }

  {
    int test_n = 2;
    Attribute Attribute(4);
    if (Attribute.get_rates() != 4) {
      cout << "An Error in present in the test number: " << test_n << endl;
    }
    Attribute.set_rates(-1);
    if (Attribute.get_rates() != 0) {
      cout << "An Error in present in the test number: " << test_n << endl;
    }
  }

  {
    int test_n = 3;
    Attribute Attribute(1);
    if (Attribute.get_rates() != 1) {
      cout << "An Error in present in the test number: " << test_n << endl;
    }
    Attribute.set_rates(122);
    if (Attribute.get_rates() != 0) {
      cout << "An Error in present in the test number: " << test_n << endl;
    }
  }

  {
    int test_n = 4;
    Attribute Attribute(-1);
    if (Attribute.get_rates() != 0) {
      cout << "An Error in present in the test number: " << test_n << endl;
    }
  }

  {
    int test_n = 5;
    Attribute Attribute(0);
    if (Attribute.get_rates() != 0) {
      cout << "An Error in present in the test number: " << test_n << endl;
    }
  }

  {
    int test_n = 6;
    Attribute Attribute(10);
    if (Attribute.get_rates() != 10) {
      cout << "An Error in present in the test number: " << test_n << endl;
    }
  }

  {
    int test_n = 7;
    Attribute Attribute(188);
    if (Attribute.get_rates() != 0) {
      cout << "An Error in present in the test number: " << test_n << endl;
    }
  }

  {
    int test_n = 8;
    Attribute Attribute(-15);
    if (Attribute.get_rates() != 0) {
      cout << "An Error in present in the test number: " << test_n << endl;
    }
  }
  return 0;
}
