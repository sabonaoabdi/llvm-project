#ifndef LLVM_TRANSFORMS_DEBUGOPERATIONS_H
#define LLVM_TRANSFORMS_DEBUGOPERATIONS_H

#include "llvm/IR/Analysis.h"
#include "llvm/IR/PassManager.h"

namespace llvm {

class DebugOperations : public RequiredPassInfoMixin<DebugOperations> {
public:
    PreservedAnalyses run(Function &F, FunctionAnalysisManager &AM);
};

} // namespace llvm

#endif // LLVM_TRANSFORMS_DEBUGOPERATIONS_H