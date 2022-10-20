#ifndef Attribute_h
#define Attribute_h

// Attribute class represents the attributes of a player stores a rating.

class Attribute {
  private:
  int rates;
 public:
  // constructors
  Attribute();
  Attribute(int _rates);

  // getters
  int get_rates();
  // setters
  void set_rates(int _rates);
};
#endif