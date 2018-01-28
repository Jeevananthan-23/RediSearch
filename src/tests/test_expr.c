#include "test_util.h"
#include "time_sample.h"
#include <aggregate/expr/expression.h>

int testExpr() {

  RSExpr *l = RS_NewNumberLiteral(2);
  RSExpr *r = RS_NewNumberLiteral(4);

  RSExpr *op = RS_NewOp('+', l, r);
  RSValue val;
  char *err;
  int rc = RSExpr_Eval(NULL, op, &val, &err);
  ASSERT_EQUAL(EXPR_EVAL_OK, rc);
  printf("Test result:");
  RSValue_Print(&val);
  printf("\n\n");

  RETURN_TEST_SUCCESS;
}
TEST_MAIN({ TESTFUNC(testExpr); });