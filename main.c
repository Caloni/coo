#include "coo.h"

int main()
{
    struct Operand op = CreateOperand(10, 13);
    struct BinaryOperator bop = CreateBinaryOperatorPlus();
    int result = bop.Operation(&op);
}
