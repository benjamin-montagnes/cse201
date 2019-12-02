#include "Shape.hpp"
#include "Polygon.hpp"

namespace Geometry {
  Polygon::Polygon(std::string lab, int a) : Shape(lab) {
    vertexCount = a;
  }

  int Polygon::getVertexCount() const {
    return vertexCount;
  }
}
