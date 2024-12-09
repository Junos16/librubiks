#ifndef SRC_ENUMS_HPP_
#define SRC_ENUMS_HPP_

#include <cstdint>

enum FACE : uint8_t { RIGHT, LEFT, UP, DOWN, FRONT, BACK };
enum EDGE : uint8_t { UR, UF, UL, UB, DR, DF, DL, DB };
enum CORNER : uint8_t { URF, UFL, ULB, UBR, DFR, DLF, DBL, DRB };
enum MOVE : uint8_t {
    R,
    R_,
    R2,
    L,
    L_,
    L2,
    U,
    U_,
    U2,
    D,
    D_,
    D2,
    F,
    F_,
    F2,
    B,
    B_,
    B2
};

#endif // !SRC_ENUMS_HPP_
