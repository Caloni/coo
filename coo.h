#ifndef __COO_HEADER__
#define __COO_HEADER__

struct Operand
{
    int x;
    int y;
};

struct BinaryOperator
{
    int (*Operation)(struct Operand* op);
};

struct Operand CreateOperand(int x, int y);
struct BinaryOperator CreateBinaryOperatorSum();
struct BinaryOperator CreateBinaryOperatorSubtract();
struct BinaryOperator CreateBinaryOperatorPlus();
struct BinaryOperator CreateBinaryOperatorDivision();

#endif
