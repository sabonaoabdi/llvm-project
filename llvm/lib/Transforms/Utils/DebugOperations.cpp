#include "llvm/Transforms/Utils/DebugOperations.h"
#include "llvm/IR/Analysis.h"
#include "llvm/IR/Instruction.h"
#include "llvm/IR/PassManager.h"
using namespace llvm;

PreservedAnalyses DebugOperations::run(Function &F, FunctionAnalysisManager &AM) {
    // transformation logic here
    for (const BasicBlock& block : F) {
        for (const Instruction& instr : block) {
            instr.dump();
        }
    }
    // tells the pass manager what analyses are still valid
    // if i changed all the ir i would return PreservedAnalyses::none();
    // or creqate a PA object and use the .preserve<analysis_name>() method to specify
    // then return the object
    return PreservedAnalyses::none();
}