#pragma once

#include "CodeLocation.hpp"
#include "ErrorCode.hpp"
#include "Generator.hpp"
#include "GeoGenException.hpp"
#include "InternalErrorException.hpp"
#include "Number.hpp"
#include "Serializable.hpp"

#include "compiler/Compiler.hpp"
#include "compiler/CompilerException.hpp"
#include "compiler/InvalidSymbolDefinitionException.hpp"
#include "compiler/SymbolRedefinitionException.hpp"
#include "compiler/UnexpectedTokenException.hpp"

#include "runtime/CodeBlock.hpp"
#include "runtime/CompiledScript.hpp"
#include "runtime/DynamicObject.hpp"
#include "runtime/FunctionDefinition.hpp"
#include "runtime/MetadataKeyValueCollection.hpp"
#include "runtime/MetadataBoolean.hpp"
#include "runtime/MetadataIdentifier.hpp"
#include "runtime/MetadataNumber.hpp"
#include "runtime/MetadataString.hpp"
#include "runtime/MetadataSimpleCollection.hpp"
#include "runtime/MetadataValue.hpp"
#include "runtime/NumberTypeDefinition.hpp"
#include "runtime/ObjectTypeDefinition.hpp"
#include "runtime/PrimitiveObject.hpp"
#include "runtime/ReadOnlyWriteException.hpp"
#include "runtime/ReferenceTypeDefinition.hpp"
#include "runtime/RuntimeException.hpp"
#include "runtime/ScriptFunctionDefinition.hpp"
#include "runtime/ScriptVariableDefinition.hpp"
#include "runtime/SymbolDefinitionTable.hpp"
#include "runtime/SymbolNameTable.hpp"
#include "runtime/TypeDefinition.hpp"
#include "runtime/UndefinedSymbolAccessException.hpp"
#include "runtime/VariableDefinition.hpp"
#include "runtime/VirtualMachine.hpp"

#include "runtime/instructions/Instruction.hpp"
#include "runtime/instructions/BreakInstruction.hpp"
#include "runtime/instructions/CallGlobalInstruction.hpp"
#include "runtime/instructions/CallMemberInstruction.hpp"
#include "runtime/instructions/ContinueInstruction.hpp"
#include "runtime/instructions/DeclareGlobalValueInstruction.hpp"
#include "runtime/instructions/DeclareLocalValueInstruction.hpp"
#include "runtime/instructions/IfInstruction.hpp"
#include "runtime/instructions/LoadConstBooleanInstruction.hpp"
#include "runtime/instructions/LoadConstNumberInstruction.hpp"
#include "runtime/instructions/LoadConstStringInstruction.hpp"
#include "runtime/instructions/LoadScopeValueInstruction.hpp"
#include "runtime/instructions/LoadMemberValueInstruction.hpp"
#include "runtime/instructions/LoadNullInstruction.hpp"
#include "runtime/instructions/PopInstruction.hpp"
#include "runtime/instructions/StoreScopeValueInstruction.hpp"
#include "runtime/instructions/StoreMemberValueInstruction.hpp"
#include "runtime/instructions/StoreGlobalValueInstruction.hpp"
#include "runtime/instructions/WhileInstruction.hpp"
#include "runtime/instructions/YieldAsMainInstruction.hpp"
#include "runtime/instructions/YieldAsNamedInstruction.hpp"