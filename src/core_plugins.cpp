// Plugin initialization

#include <binaryninjacore.h>

extern "C" BINARYNINJAPLUGIN bool CorePluginInit_arch();

static bool g_archInitialized = false;

BINARYNINJACOREAPI bool BNInitPlugins(bool allowUserPlugins)
{
	if(!g_archInitialized)
	{
		if(!CorePluginInit_arch())
			return false;
		g_archInitialized = true;
	}
	return true;
}
BINARYNINJACOREAPI bool BNInitCorePlugins(void) { return BNInitPlugins(false); }  // Deprecated, use BNInitPlugins
BINARYNINJACOREAPI void BNDisablePlugins(void) { __debugbreak(); }
BINARYNINJACOREAPI bool BNIsPluginsEnabled(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNInitUserPlugins(void) { BNInitPlugins(true); }  // Deprecated, use BNInitPlugins
BINARYNINJACOREAPI void BNInitRepoPlugins(void) { __debugbreak(); }

BINARYNINJACOREAPI char* BNGetInstallDirectory(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetBundledPluginDirectory(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetBundledPluginDirectory(const char* path) { __debugbreak(); }
BINARYNINJACOREAPI char* BNGetUserDirectory(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetUserPluginDirectory(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetRepositoriesDirectory(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetSettingsFileName(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSaveLastRun(void) { __debugbreak(); }

BINARYNINJACOREAPI char* BNGetPathRelativeToBundledPluginDirectory(const char* path) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetPathRelativeToUserPluginDirectory(const char* path) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetPathRelativeToUserDirectory(const char* path) { __debugbreak(); return {}; }

BINARYNINJACOREAPI bool BNExecuteWorkerProcess(const char* path, const char** args, BNDataBuffer* input, char** output,
	char** error, bool stdoutIsText, bool stderrIsText) { __debugbreak(); return {}; }

BINARYNINJACOREAPI void BNSetCurrentPluginLoadOrder(BNPluginLoadOrder order) { __debugbreak(); }
BINARYNINJACOREAPI void BNAddRequiredPluginDependency(const char* name) { __debugbreak(); }
BINARYNINJACOREAPI void BNAddOptionalPluginDependency(const char* name) { __debugbreak(); }