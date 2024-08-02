#pragma once

BINARYNINJACOREAPI BNCallingConvention* BNCreateCallingConvention(
	BNArchitecture* arch, const char* name, BNCustomCallingConvention* cc)
{
	return new BNCallingConvention(name, *cc);
}
BINARYNINJACOREAPI void BNRegisterCallingConvention(BNArchitecture* arch, BNCallingConvention* cc)
{
	arch->callingConventions.emplace(cc->name, cc);
}
BINARYNINJACOREAPI BNCallingConvention* BNNewCallingConventionReference(BNCallingConvention* cc)
{
	return BNRef::Add(cc);
}
BINARYNINJACOREAPI void BNFreeCallingConvention(BNCallingConvention* cc)
{
	BNRef::Release(cc);
}

BINARYNINJACOREAPI BNCallingConvention** BNGetArchitectureCallingConventions(BNArchitecture* arch, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeCallingConventionList(BNCallingConvention** list, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI BNCallingConvention* BNGetArchitectureCallingConventionByName(
	BNArchitecture* arch, const char* name) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNArchitecture* BNGetCallingConventionArchitecture(BNCallingConvention* cc) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetCallingConventionName(BNCallingConvention* cc) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint32_t* BNGetCallerSavedRegisters(BNCallingConvention* cc, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint32_t* BNGetCalleeSavedRegisters(BNCallingConvention* cc, size_t* count) { __debugbreak(); return {}; }

BINARYNINJACOREAPI uint32_t* BNGetIntegerArgumentRegisters(BNCallingConvention* cc, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint32_t* BNGetFloatArgumentRegisters(BNCallingConvention* cc, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNAreArgumentRegistersSharedIndex(BNCallingConvention* cc) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNAreArgumentRegistersUsedForVarArgs(BNCallingConvention* cc) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsStackReservedForArgumentRegisters(BNCallingConvention* cc) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsStackAdjustedOnReturn(BNCallingConvention* cc) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsEligibleForHeuristics(BNCallingConvention* cc) { __debugbreak(); return {}; }

BINARYNINJACOREAPI uint32_t BNGetIntegerReturnValueRegister(BNCallingConvention* cc) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint32_t BNGetHighIntegerReturnValueRegister(BNCallingConvention* cc) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint32_t BNGetFloatReturnValueRegister(BNCallingConvention* cc) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint32_t BNGetGlobalPointerRegister(BNCallingConvention* cc) { __debugbreak(); return {}; }

BINARYNINJACOREAPI uint32_t* BNGetImplicitlyDefinedRegisters(BNCallingConvention* cc, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRegisterValue BNGetIncomingRegisterValue(BNCallingConvention* cc, uint32_t reg, BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRegisterValue BNGetIncomingFlagValue(BNCallingConvention* cc, uint32_t reg, BNFunction* func) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNVariable* BNGetVariablesForParametersDefaultPermittedArgs(
	BNCallingConvention* cc, const BNFunctionParameter* params, size_t paramCount, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNVariable* BNGetVariablesForParameters(BNCallingConvention* cc, const BNFunctionParameter* params,
	size_t paramCount, const uint32_t* permittedArgs, size_t permittedArgCount, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNVariable* BNGetParameterOrderingForVariables(
	BNCallingConvention* cc, const BNVariable* paramVars, const BNType** paramTypes, size_t paramCount, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI int64_t BNGetStackAdjustmentForVariables(
	BNCallingConvention* cc, const BNVariable* paramVars, const BNType** paramTypes, size_t paramCount) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetRegisterStackAdjustments(BNCallingConvention* cc, const uint32_t* returnRegs,
	size_t returnRegCount, BNType* returnType, const BNVariable* params, size_t paramCount, const BNType** types,
	size_t typeCount, uint32_t** resultRegisters, uint32_t** resultAdjustments) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNVariable BNGetIncomingVariableForParameterVariable(
	BNCallingConvention* cc, const BNVariable* var, BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNVariable BNGetParameterVariableForIncomingVariable(
	BNCallingConvention* cc, const BNVariable* var, BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNVariable BNGetDefaultIncomingVariableForParameterVariable(
	BNCallingConvention* cc, const BNVariable* var) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNVariable BNGetDefaultParameterVariableForIncomingVariable(
	BNCallingConvention* cc, const BNVariable* var) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNCallingConvention* BNGetArchitectureDefaultCallingConvention(BNArchitecture* arch)
{ 
	return arch->defaultCallingConvention;
}
BINARYNINJACOREAPI BNCallingConvention* BNGetArchitectureCdeclCallingConvention(BNArchitecture* arch)
{
	return arch->cdeclCallingConvention;
}
BINARYNINJACOREAPI BNCallingConvention* BNGetArchitectureStdcallCallingConvention(BNArchitecture* arch)
{
	return arch->stdcallCallingConvention;
}
BINARYNINJACOREAPI BNCallingConvention* BNGetArchitectureFastcallCallingConvention(BNArchitecture* arch)
{
	return arch->fastcallCallingConvention;
}
BINARYNINJACOREAPI void BNSetArchitectureDefaultCallingConvention(BNArchitecture* arch, BNCallingConvention* cc)
{ 
	arch->defaultCallingConvention = cc;
}
BINARYNINJACOREAPI void BNSetArchitectureCdeclCallingConvention(BNArchitecture* arch, BNCallingConvention* cc)
{
	arch->cdeclCallingConvention = cc;
}
BINARYNINJACOREAPI void BNSetArchitectureStdcallCallingConvention(BNArchitecture* arch, BNCallingConvention* cc)
{
	arch->stdcallCallingConvention = cc;
}
BINARYNINJACOREAPI void BNSetArchitectureFastcallCallingConvention(BNArchitecture* arch, BNCallingConvention* cc)
{
	arch->fastcallCallingConvention = cc;
}