#include "coo.h"

int OperatorSum(struct Operand* op)
{
    return op->x + op->y;
}

int OperatorSubtract(struct Operand* op)
{
    return op->x - op->y;
}

int OperatorPlus(struct Operand* op)
{
    return op->x * op->y;
}

int OperatorDivision(struct Operand* op)
{
    return op->x / op->y;
}

struct Operand CreateOperand(int x, int y)
{
    struct Operand op;
    op.x = x;
    op.y = y;
    return op;
}

struct BinaryOperator CreateBinaryOperatorSum()
{
    struct BinaryOperator bop;
    bop.Operation = &OperatorSum;
    return bop;
}

struct BinaryOperator CreateBinaryOperatorSubtract()
{
    struct BinaryOperator bop;
    bop.Operation = &OperatorSubtract;
    return bop;
}

struct BinaryOperator CreateBinaryOperatorPlus()
{
    struct BinaryOperator bop;
    bop.Operation = &OperatorPlus;
    return bop;
}

struct BinaryOperator CreateBinaryOperatorDivision()
{
    struct BinaryOperator bop;
    bop.Operation = &OperatorDivision;
    return bop;
}

