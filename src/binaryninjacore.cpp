#include "binaryninjacore.h"

#include <string>

#include "core_utils.h"
#include "core_string.h"

BINARYNINJACOREAPI void BNShutdown(void) { __debugbreak(); }
BINARYNINJACOREAPI bool BNIsShutdownRequested(void) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNVersionInfo BNGetVersionInfo(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetVersionString(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint32_t BNGetBuildId(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint32_t BNGetCurrentCoreABIVersion(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint32_t BNGetMinimumCoreABIVersion(void) { __debugbreak(); return {}; }

BINARYNINJACOREAPI char* BNGetSerialNumber(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNGetLicenseExpirationTime(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsLicenseValidated(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetLicensedUserEmail(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetProduct(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetProductType(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI int BNGetLicenseCount(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsUIEnabled(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetLicense(const char* licenseData) { __debugbreak(); }

BINARYNINJACOREAPI bool BNIsDatabase(const char* filename) { __debugbreak(); return {}; }

BINARYNINJACOREAPI bool BNAuthenticateEnterpriseServerWithCredentials(
	const char* username, const char* password, bool remember) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNAuthenticateEnterpriseServerWithMethod(const char* method, bool remember) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetEnterpriseServerAuthenticationMethods(char*** methods, char*** names) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNDeauthenticateEnterpriseServer(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNCancelEnterpriseServerAuthentication(void) { __debugbreak(); }
BINARYNINJACOREAPI bool BNConnectEnterpriseServer(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNUpdateEnterpriseServerLicense(uint64_t timeout) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNReleaseEnterpriseServerLicense(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsEnterpriseServerConnected(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsEnterpriseServerAuthenticated(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetEnterpriseServerUsername(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetEnterpriseServerToken(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetEnterpriseServerUrl(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNSetEnterpriseServerUrl(const char* url) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetEnterpriseServerName(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetEnterpriseServerId(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNGetEnterpriseServerVersion(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetEnterpriseServerBuildId(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNGetEnterpriseServerLicenseExpirationTime(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNGetEnterpriseServerLicenseDuration(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsEnterpriseServerFloatingLicense(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNGetEnterpriseServerReservationTimeLimit(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsEnterpriseServerLicenseStillActivated(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetEnterpriseServerLastError(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNRegisterEnterpriseServerNotification(BNEnterpriseServerCallbacks* notify) { __debugbreak(); }
BINARYNINJACOREAPI void BNUnregisterEnterpriseServerNotification(BNEnterpriseServerCallbacks* notify) { __debugbreak(); }
BINARYNINJACOREAPI bool BNIsEnterpriseServerInitialized(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNInitializeEnterpriseServer(void) { __debugbreak(); return {}; }

BINARYNINJACOREAPI void BNRegisterObjectDestructionCallbacks(BNObjectDestructionCallbacks* callbacks) { __debugbreak(); }
BINARYNINJACOREAPI void BNUnregisterObjectDestructionCallbacks(BNObjectDestructionCallbacks* callbacks) { __debugbreak(); }

BINARYNINJACOREAPI char* BNGetUniqueIdentifierString(void) { __debugbreak(); return {}; }

// Logging
BN_PRINTF_ATTRIBUTE(5, 6)
BINARYNINJACOREAPI void BNLog(
	size_t session, BNLogLevel level, const char* logger_name, size_t tid, const char* fmt, ...) { __debugbreak(); }

BN_PRINTF_ATTRIBUTE(1, 2)
BINARYNINJACOREAPI void BNLogDebug(const char* fmt, ...) { __debugbreak(); }

BN_PRINTF_ATTRIBUTE(1, 2)
BINARYNINJACOREAPI void BNLogInfo(const char* fmt, ...) { __debugbreak(); }

BN_PRINTF_ATTRIBUTE(1, 2)
BINARYNINJACOREAPI void BNLogWarn(const char* fmt, ...) { __debugbreak(); }

BN_PRINTF_ATTRIBUTE(1, 2)
BINARYNINJACOREAPI void BNLogError(const char* fmt, ...) { __debugbreak(); }

BN_PRINTF_ATTRIBUTE(1, 2)
BINARYNINJACOREAPI void BNLogAlert(const char* fmt, ...) { __debugbreak(); }

BINARYNINJACOREAPI void BNLogString(
	size_t session, BNLogLevel level, const char* logger_name, size_t tid, const char* str) { __debugbreak(); }


BINARYNINJACOREAPI BNLogger* BNNewLoggerReference(BNLogger* logger) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeLogger(BNLogger* logger) { __debugbreak(); }

BN_PRINTF_ATTRIBUTE(3, 4)
BINARYNINJACOREAPI void BNLoggerLog(BNLogger* logger, BNLogLevel level, const char* fmt, ...) { __debugbreak(); }
BINARYNINJACOREAPI void BNLoggerLogString(BNLogger* logger, BNLogLevel level, const char* msg) { __debugbreak(); }

BINARYNINJACOREAPI char* BNLoggerGetName(BNLogger* logger) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNLoggerGetSessionId(BNLogger* logger) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNLogger* BNLogCreateLogger(const char* loggerName, size_t sessionId) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNLogger* BNLogGetLogger(const char* loggerName, size_t sessionId) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char** BNLogGetLoggerNames(size_t* count) { __debugbreak(); return {}; }

BINARYNINJACOREAPI void BNRegisterLogListener(BNLogListener* listener) { __debugbreak(); }
BINARYNINJACOREAPI void BNUnregisterLogListener(BNLogListener* listener) { __debugbreak(); }
BINARYNINJACOREAPI void BNUpdateLogListeners(void) { __debugbreak(); }

BINARYNINJACOREAPI void BNLogToStdout(BNLogLevel minimumLevel) { __debugbreak(); }
BINARYNINJACOREAPI void BNLogToStderr(BNLogLevel minimumLevel) { __debugbreak(); }
BINARYNINJACOREAPI bool BNLogToFile(BNLogLevel minimumLevel, const char* path, bool append) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNCloseLogs(void) { __debugbreak(); }

// Temporary files
BINARYNINJACOREAPI BNTemporaryFile* BNCreateTemporaryFile(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTemporaryFile* BNCreateTemporaryFileWithContents(BNDataBuffer* data) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTemporaryFile* BNNewTemporaryFileReference(BNTemporaryFile* file) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeTemporaryFile(BNTemporaryFile* file) { __debugbreak(); }
BINARYNINJACOREAPI char* BNGetTemporaryFilePath(BNTemporaryFile* file) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDataBuffer* BNGetTemporaryFileContents(BNTemporaryFile* file) { __debugbreak(); return {}; }

// Data buffer management
BINARYNINJACOREAPI BNDataBuffer* BNCreateDataBuffer(const void* data, size_t len) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDataBuffer* BNDuplicateDataBuffer(BNDataBuffer* buf) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeDataBuffer(BNDataBuffer* buf) { __debugbreak(); }
BINARYNINJACOREAPI void* BNGetDataBufferContents(BNDataBuffer* buf) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void* BNGetDataBufferContentsAt(BNDataBuffer* buf, size_t offset) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetDataBufferLength(BNDataBuffer* buf) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDataBuffer* BNGetDataBufferSlice(BNDataBuffer* buf, size_t start, size_t len) { __debugbreak(); return {}; }

BINARYNINJACOREAPI void BNSetDataBufferLength(BNDataBuffer* buf, size_t len) { __debugbreak(); }
BINARYNINJACOREAPI void BNClearDataBuffer(BNDataBuffer* buf) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetDataBufferContents(BNDataBuffer* buf, void* data, size_t len) { __debugbreak(); }
BINARYNINJACOREAPI void BNAssignDataBuffer(BNDataBuffer* dest, BNDataBuffer* src) { __debugbreak(); }
BINARYNINJACOREAPI void BNAppendDataBuffer(BNDataBuffer* dest, BNDataBuffer* src) { __debugbreak(); }
BINARYNINJACOREAPI void BNAppendDataBufferContents(BNDataBuffer* dest, const void* src, size_t len) { __debugbreak(); }

BINARYNINJACOREAPI uint8_t BNGetDataBufferByte(BNDataBuffer* buf, size_t offset) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetDataBufferByte(BNDataBuffer* buf, size_t offset, uint8_t val) { __debugbreak(); }

BINARYNINJACOREAPI char* BNDataBufferToEscapedString(BNDataBuffer* buf, bool nullTerminates) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDataBuffer* BNDecodeEscapedString(const char* str) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNDataBufferToBase64(BNDataBuffer* buf) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDataBuffer* BNDecodeBase64(const char* str) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNDataBuffer* BNZlibCompress(BNDataBuffer* buf) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDataBuffer* BNZlibDecompress(BNDataBuffer* buf) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDataBuffer* BNLzmaDecompress(BNDataBuffer* buf) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDataBuffer* BNLzma2Decompress(BNDataBuffer* buf) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDataBuffer* BNXzDecompress(BNDataBuffer* buf) { __debugbreak(); return {}; }

// Save settings
BINARYNINJACOREAPI BNSaveSettings* BNCreateSaveSettings(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNSaveSettings* BNNewSaveSettingsReference(BNSaveSettings* settings) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeSaveSettings(BNSaveSettings* settings) { __debugbreak(); }

BINARYNINJACOREAPI bool BNIsSaveSettingsOptionSet(BNSaveSettings* settings, BNSaveOption option) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetSaveSettingsOption(BNSaveSettings* settings, BNSaveOption option, bool state) { __debugbreak(); }
BINARYNINJACOREAPI char* BNGetSaveSettingsName(BNSaveSettings* settings) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetSaveSettingsName(BNSaveSettings* settings, const char* name) { __debugbreak(); }

// File metadata object
BINARYNINJACOREAPI BNFileMetadata* BNCreateFileMetadata() { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNFileMetadata* BNNewFileReference(BNFileMetadata* file) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeFileMetadata(BNFileMetadata* file) { __debugbreak(); }
BINARYNINJACOREAPI void BNCloseFile(BNFileMetadata* file) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetFileMetadataNavigationHandler(BNFileMetadata* file, BNNavigationHandler* handler) { __debugbreak(); }
BINARYNINJACOREAPI bool BNIsFileModified(BNFileMetadata* file) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsAnalysisChanged(BNFileMetadata* file) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNMarkFileModified(BNFileMetadata* file) { __debugbreak(); }
BINARYNINJACOREAPI void BNMarkFileSaved(BNFileMetadata* file) { __debugbreak(); }

BINARYNINJACOREAPI bool BNIsBackedByDatabase(BNFileMetadata* file, const char* binaryViewType) { __debugbreak(); return {}; }

BINARYNINJACOREAPI bool BNCreateDatabase(BNBinaryView* data, const char* path, BNSaveSettings* settings) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNCreateDatabaseWithProgress(BNBinaryView* data, const char* path, void* ctxt,
	bool (*progress)(void* ctxt, size_t progress, size_t total), BNSaveSettings* settings) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBinaryView* BNOpenExistingDatabase(BNFileMetadata* file, const char* path) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBinaryView* BNOpenExistingDatabaseWithProgress(
	BNFileMetadata* file, const char* path, void* ctxt, bool (*progress)(void* ctxt, size_t progress, size_t total)) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBinaryView* BNOpenDatabaseForConfiguration(BNFileMetadata* file, const char* path) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNSaveAutoSnapshot(BNBinaryView* data, BNSaveSettings* settings) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNSaveAutoSnapshotWithProgress(BNBinaryView* data, void* ctxt,
	bool (*progress)(void* ctxt, size_t progress, size_t total), BNSaveSettings* settings) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNGetSnapshotData(BNFileMetadata* file, BNKeyValueStore* data, BNKeyValueStore* cache,
	void* ctxt, bool (*progress)(void* ctxt, size_t current, size_t total)) { __debugbreak(); }
BINARYNINJACOREAPI void BNApplySnapshotData(BNFileMetadata* file, BNBinaryView* view, BNKeyValueStore* data,
	BNKeyValueStore* cache, void* ctxt, bool (*progress)(void* ctxt, size_t current, size_t total),
	bool openForConfiguration, bool restoreRawView) { __debugbreak(); }
BINARYNINJACOREAPI BNDatabase* BNGetFileMetadataDatabase(BNFileMetadata* file) { __debugbreak(); return {}; }

// Key value store
BINARYNINJACOREAPI BNKeyValueStore* BNCreateKeyValueStore(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNKeyValueStore* BNCreateKeyValueStoreFromDataBuffer(BNDataBuffer* buffer) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNKeyValueStore* BNNewKeyValueStoreReference(BNKeyValueStore* store) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeKeyValueStore(BNKeyValueStore* store) { __debugbreak(); }

BINARYNINJACOREAPI char** BNGetKeyValueStoreKeys(BNKeyValueStore* store, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNKeyValueStoreHasValue(BNKeyValueStore* store, const char* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetKeyValueStoreValue(BNKeyValueStore* store, const char* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDataBuffer* BNGetKeyValueStoreValueHash(BNKeyValueStore* store, const char* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDataBuffer* BNGetKeyValueStoreBuffer(BNKeyValueStore* store, const char* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNSetKeyValueStoreValue(BNKeyValueStore* store, const char* name, const char* value) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNSetKeyValueStoreBuffer(BNKeyValueStore* store, const char* name, const BNDataBuffer* value) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDataBuffer* BNGetKeyValueStoreSerializedData(BNKeyValueStore* store) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNBeginKeyValueStoreNamespace(BNKeyValueStore* store, const char* name) { __debugbreak(); }
BINARYNINJACOREAPI void BNEndKeyValueStoreNamespace(BNKeyValueStore* store) { __debugbreak(); }
BINARYNINJACOREAPI bool BNIsKeyValueStoreEmpty(BNKeyValueStore* store) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetKeyValueStoreValueSize(BNKeyValueStore* store) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetKeyValueStoreDataSize(BNKeyValueStore* store) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetKeyValueStoreValueStorageSize(BNKeyValueStore* store) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetKeyValueStoreNamespaceSize(BNKeyValueStore* store) { __debugbreak(); return {}; }

// Project object
BINARYNINJACOREAPI BNProject* BNNewProjectReference(BNProject* project) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeProject(BNProject* project) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeProjectList(BNProject** projects, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI BNProject** BNGetOpenProjects(size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNProject* BNCreateProject(const char* path, const char* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNProject* BNOpenProject(const char* path) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNProjectOpen(BNProject* project) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNProjectClose(BNProject* project) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNProjectGetId(BNProject* project) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNProjectIsOpen(BNProject* project) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNProjectGetPath(BNProject* project) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNProjectGetName(BNProject* project) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNProjectSetName(BNProject* project, const char* name) { __debugbreak(); }
BINARYNINJACOREAPI char* BNProjectGetDescription(BNProject* project) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNProjectSetDescription(BNProject* project, const char* description) { __debugbreak(); }

BINARYNINJACOREAPI BNMetadata* BNProjectQueryMetadata(BNProject* project, const char* key) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNProjectStoreMetadata(BNProject* project, const char* key, BNMetadata* value) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNProjectRemoveMetadata(BNProject* project, const char* key) { __debugbreak(); }

BINARYNINJACOREAPI BNProjectFile* BNProjectCreateFileFromPath(BNProject* project, const char* path,
	BNProjectFolder* folder, const char* name, const char* description, void* ctxt,
	bool (*progress)(void* ctxt, size_t progress, size_t total)) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNProjectFile* BNProjectCreateFileFromPathUnsafe(BNProject* project, const char* path,
	BNProjectFolder* folder, const char* name, const char* description, const char* id, int64_t creationTimestamp,
	void* ctxt, bool (*progress)(void* ctxt, size_t progress, size_t total)) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNProjectFile* BNProjectCreateFile(BNProject* project, const uint8_t* contents, size_t contentsSize,
	BNProjectFolder* folder, const char* name, const char* description, void* ctxt,
	bool (*progress)(void* ctxt, size_t progress, size_t total)) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNProjectFile* BNProjectCreateFileUnsafe(BNProject* project, const uint8_t* contents,
	size_t contentsSize, BNProjectFolder* folder, const char* name, const char* description, const char* id,
	int64_t creationTimestamp, void* ctxt, bool (*progress)(void* ctxt, size_t progress, size_t total)) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNProjectFile** BNProjectGetFiles(BNProject* project, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNProjectFile* BNProjectGetFileById(BNProject* project, const char* id) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNProjectFile* BNProjectGetFileByPathOnDisk(BNProject* project, const char* path) { __debugbreak(); return {}; }

BINARYNINJACOREAPI void BNProjectPushFile(BNProject* project, BNProjectFile* file) { __debugbreak(); }
BINARYNINJACOREAPI bool BNProjectDeleteFile(BNProject* project, BNProjectFile* file) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNProjectFolder* BNProjectCreateFolderFromPath(BNProject* project, const char* path,
	BNProjectFolder* parent, const char* description, void* ctxt,
	bool (*progress)(void* ctxt, size_t progress, size_t total)) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNProjectFolder* BNProjectCreateFolder(
	BNProject* project, BNProjectFolder* parent, const char* name, const char* description) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNProjectFolder* BNProjectCreateFolderUnsafe(
	BNProject* project, BNProjectFolder* parent, const char* name, const char* description, const char* id) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNProjectFolder** BNProjectGetFolders(BNProject* project, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNProjectFolder* BNProjectGetFolderById(BNProject* project, const char* id) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNProjectPushFolder(BNProject* project, BNProjectFolder* folder) { __debugbreak(); }
BINARYNINJACOREAPI bool BNProjectDeleteFolder(BNProject* project, BNProjectFolder* folder, void* ctxt,
	bool (*progress)(void* ctxt, size_t progress, size_t total)) { __debugbreak(); return {}; }

BINARYNINJACOREAPI void BNProjectBeginBulkOperation(BNProject* project) { __debugbreak(); }
BINARYNINJACOREAPI void BNProjectEndBulkOperation(BNProject* project) { __debugbreak(); }

// ProjectFile object
BINARYNINJACOREAPI BNProjectFile* BNNewProjectFileReference(BNProjectFile* file) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeProjectFile(BNProjectFile* file) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeProjectFileList(BNProjectFile** files, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI char* BNProjectFileGetPathOnDisk(BNProjectFile* file) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNProjectFileExistsOnDisk(BNProjectFile* file) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNProjectFileGetName(BNProjectFile* file) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNProjectFileSetName(BNProjectFile* file, const char* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNProjectFileGetDescription(BNProjectFile* file) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNProjectFileSetDescription(BNProjectFile* file, const char* description) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNProjectFileGetId(BNProjectFile* file) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNProjectFolder* BNProjectFileGetFolder(BNProjectFile* file) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNProjectFileSetFolder(BNProjectFile* file, BNProjectFolder* folder) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNProject* BNProjectFileGetProject(BNProjectFile* file) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNProjectFileExport(BNProjectFile* file, const char* destination) { __debugbreak(); return {}; }
BINARYNINJACOREAPI int64_t BNProjectFileGetCreationTimestamp(BNProjectFile* file) { __debugbreak(); return {}; }


// ProjectFolder object
BINARYNINJACOREAPI BNProjectFolder* BNNewProjectFolderReference(BNProjectFolder* folder) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeProjectFolder(BNProjectFolder* folder) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeProjectFolderList(BNProjectFolder** folders, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI char* BNProjectFolderGetId(BNProjectFolder* folder) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNProjectFolderGetName(BNProjectFolder* folder) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNProjectFolderSetName(BNProjectFolder* folder, const char* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNProjectFolderGetDescription(BNProjectFolder* folder) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNProjectFolderSetDescription(BNProjectFolder* folder, const char* description) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNProjectFolder* BNProjectFolderGetParent(BNProjectFolder* folder) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNProjectFolderSetParent(BNProjectFolder* folder, BNProjectFolder* parent) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNProject* BNProjectFolderGetProject(BNProjectFolder* folder) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNProjectFolderExport(BNProjectFolder* folder, const char* destination, void* ctxt,
	bool (*progress)(void* ctxt, size_t progress, size_t total)) { __debugbreak(); return {}; }

// ExternalLibrary object
BINARYNINJACOREAPI BNExternalLibrary* BNNewExternalLibraryReference(BNExternalLibrary* lib) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeExternalLibrary(BNExternalLibrary* lib) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeExternalLibraryList(BNExternalLibrary** libs, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI char* BNExternalLibraryGetName(BNExternalLibrary* lib) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNExternalLibrarySetBackingFile(BNExternalLibrary* lib, BNProjectFile* file) { __debugbreak(); }
BINARYNINJACOREAPI BNProjectFile* BNExternalLibraryGetBackingFile(BNExternalLibrary* lib) { __debugbreak(); return {}; }

// ExternalLocation object
BINARYNINJACOREAPI BNExternalLocation* BNNewExternalLocationReference(BNExternalLocation* loc) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeExternalLocation(BNExternalLocation* loc) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeExternalLocationList(BNExternalLocation** locs, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI BNSymbol* BNExternalLocationGetSourceSymbol(BNExternalLocation* loc) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNExternalLocationGetTargetAddress(BNExternalLocation* loc) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNExternalLocationGetTargetSymbol(BNExternalLocation* loc) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNExternalLibrary* BNExternalLocationGetExternalLibrary(BNExternalLocation* loc) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNExternalLocationHasTargetAddress(BNExternalLocation* loc) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNExternalLocationHasTargetSymbol(BNExternalLocation* loc) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNExternalLocationSetTargetAddress(BNExternalLocation* loc, uint64_t* address) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNExternalLocationSetTargetSymbol(BNExternalLocation* loc, const char* symbol) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNExternalLocationSetExternalLibrary(BNExternalLocation* loc, BNExternalLibrary* library) { __debugbreak(); }

// Database object
BINARYNINJACOREAPI BNDatabase* BNNewDatabaseReference(BNDatabase* database) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeDatabase(BNDatabase* database) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetDatabaseCurrentSnapshot(BNDatabase* database, int64_t id) { __debugbreak(); }
BINARYNINJACOREAPI BNSnapshot* BNGetDatabaseCurrentSnapshot(BNDatabase* database) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNSnapshot** BNGetDatabaseSnapshots(BNDatabase* database, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNSnapshot* BNGetDatabaseSnapshot(BNDatabase* database, int64_t id) { __debugbreak(); return {}; }
BINARYNINJACOREAPI int64_t BNWriteDatabaseSnapshotData(BNDatabase* database, int64_t* parents, size_t parentCount,
	BNBinaryView* file, const char* name, BNKeyValueStore* data, bool autoSave, void* ctxt,
	BNProgressFunction progress) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNTrimDatabaseSnapshot(BNDatabase* database, int64_t id) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoveDatabaseSnapshot(BNDatabase* database, int64_t id) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char** BNGetDatabaseGlobalKeys(BNDatabase* database, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI int BNDatabaseHasGlobal(BNDatabase* database, const char* key) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNReadDatabaseGlobal(BNDatabase* database, const char* key) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNWriteDatabaseGlobal(BNDatabase* database, const char* key, const char* val) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDataBuffer* BNReadDatabaseGlobalData(BNDatabase* database, const char* key) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNWriteDatabaseGlobalData(BNDatabase* database, const char* key, BNDataBuffer* val) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNFileMetadata* BNGetDatabaseFile(BNDatabase* database) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNDatabaseReloadConnection(BNDatabase* database) { __debugbreak(); }
BINARYNINJACOREAPI BNKeyValueStore* BNReadDatabaseAnalysisCache(BNDatabase* database) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNWriteDatabaseAnalysisCache(BNDatabase* database, BNKeyValueStore* val) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNSnapshotHasData(BNDatabase* db, int64_t id) { __debugbreak(); return {}; }

// Database snapshots
BINARYNINJACOREAPI BNSnapshot* BNNewSnapshotReference(BNSnapshot* snapshot) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeSnapshot(BNSnapshot* snapshot) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeSnapshotList(BNSnapshot** snapshots, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI BNDatabase* BNGetSnapshotDatabase(BNSnapshot* snapshot) { __debugbreak(); return {}; }
BINARYNINJACOREAPI int64_t BNGetSnapshotId(BNSnapshot* snapshot) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNSnapshot* BNGetSnapshotFirstParent(BNSnapshot* snapshot) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNSnapshot** BNGetSnapshotParents(BNSnapshot* snapshot, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNSnapshot** BNGetSnapshotChildren(BNSnapshot* snapshot, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetSnapshotName(BNSnapshot* snapshot) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetSnapshotName(BNSnapshot* snapshot, const char* name) { __debugbreak(); }
BINARYNINJACOREAPI bool BNIsSnapshotAutoSave(BNSnapshot* snapshot) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNSnapshotHasContents(BNSnapshot* snapshot) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNSnapshotHasUndo(BNSnapshot* snapshot) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDataBuffer* BNGetSnapshotFileContents(BNSnapshot* snapshot) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDataBuffer* BNGetSnapshotFileContentsHash(BNSnapshot* snapshot) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNKeyValueStore* BNReadSnapshotData(BNSnapshot* snapshot) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNKeyValueStore* BNReadSnapshotDataWithProgress(
	BNSnapshot* snapshot, void* ctxt, bool (*progress)(void* ctxt, size_t progress, size_t total)) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDataBuffer* BNGetSnapshotUndoData(BNSnapshot* snapshot) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNUndoEntry** BNGetSnapshotUndoEntries(BNSnapshot* snapshot, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNUndoEntry** BNGetSnapshotUndoEntriesWithProgress(
	BNSnapshot* snapshot, void* ctxt, bool (*progress)(void* ctxt, size_t progress, size_t total), size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNSnapshotHasAncestor(BNSnapshot* snapshot, BNSnapshot* other) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNSnapshotStoreData(
	BNSnapshot* snapshot, BNKeyValueStore* data, void* ctxt, BNProgressFunction progress) { __debugbreak(); return {}; }

// Undo actions
BINARYNINJACOREAPI BNUndoAction* BNNewUndoActionReference(BNUndoAction* action) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeUndoAction(BNUndoAction* action) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeUndoActionList(BNUndoAction** actions, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI char* BNUndoActionGetSummaryText(BNUndoAction* action) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNInstructionTextToken* BNUndoActionGetSummary(BNUndoAction* action, size_t* tokenCount) { __debugbreak(); return {}; }

// Undo entries
BINARYNINJACOREAPI BNUndoEntry* BNNewUndoEntryReference(BNUndoEntry* entry) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeUndoEntry(BNUndoEntry* entry) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeUndoEntryList(BNUndoEntry** entrys, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI char* BNUndoEntryGetId(BNUndoEntry* entry) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNUndoAction** BNUndoEntryGetActions(BNUndoEntry* entry, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNUndoEntryGetTimestamp(BNUndoEntry* entry) { __debugbreak(); return {}; }

BINARYNINJACOREAPI bool BNRebase(BNBinaryView* data, uint64_t address) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRebaseWithProgress(
	BNBinaryView* data, uint64_t address, void* ctxt, bool (*progress)(void* ctxt, size_t progress, size_t total)) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNCreateSnapshotedView(BNBinaryView* data, const char* viewName) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNCreateSnapshotedViewWithProgress(
	BNBinaryView* data, const char* viewName, void* ctxt, bool (*progress)(void* ctxt, size_t progress, size_t total)) { __debugbreak(); return {}; }

BINARYNINJACOREAPI char* BNGetOriginalFilename(BNFileMetadata* file) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetOriginalFilename(BNFileMetadata* file, const char* name) { __debugbreak(); }

BINARYNINJACOREAPI char* BNGetFilename(BNFileMetadata* file) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetFilename(BNFileMetadata* file, const char* name) { __debugbreak(); }

BINARYNINJACOREAPI BNProjectFile* BNGetProjectFile(BNFileMetadata* file) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetProjectFile(BNFileMetadata* file, BNProjectFile* pfile) { __debugbreak(); }

BINARYNINJACOREAPI char* BNBeginUndoActions(BNFileMetadata* file, bool anonymousAllowed) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNCommitUndoActions(BNFileMetadata* file, const char* id) { __debugbreak(); }
BINARYNINJACOREAPI void BNRevertUndoActions(BNFileMetadata* file, const char* id) { __debugbreak(); }
BINARYNINJACOREAPI void BNForgetUndoActions(BNFileMetadata* file, const char* id) { __debugbreak(); }

BINARYNINJACOREAPI bool BNCanUndo(BNFileMetadata* file) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNUndo(BNFileMetadata* file) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNCanRedo(BNFileMetadata* file) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRedo(BNFileMetadata* file) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNUndoEntry** BNGetUndoEntries(BNFileMetadata* file, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNUndoEntry** BNGetRedoEntries(BNFileMetadata* file, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNUndoEntry* BNGetLastUndoEntry(BNFileMetadata* file) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNUndoEntry* BNGetLastRedoEntry(BNFileMetadata* file) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetLastUndoEntryTitle(BNFileMetadata* file) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetLastRedoEntryTitle(BNFileMetadata* file) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeUndoEntries(BNUndoEntry** entries, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI void BNClearUndoEntries(BNFileMetadata* file) { __debugbreak(); }

BINARYNINJACOREAPI BNUser* BNNewUserReference(BNUser* user) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeUser(BNUser* user) { __debugbreak(); }
BINARYNINJACOREAPI BNUser** BNGetUsers(BNFileMetadata* file, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeUserList(BNUser** users, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI char* BNGetUserName(BNUser* user) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetUserEmail(BNUser* user) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetUserId(BNUser* user) { __debugbreak(); return {}; }

BINARYNINJACOREAPI char* BNGetCurrentView(BNFileMetadata* file) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNGetCurrentOffset(BNFileMetadata* file) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNNavigate(BNFileMetadata* file, const char* view, uint64_t offset) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNBinaryView* BNGetFileViewOfType(BNFileMetadata* file, const char* name) { __debugbreak(); return {}; }

BINARYNINJACOREAPI char** BNGetExistingViews(BNFileMetadata* file, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNFileMetadataGetSessionId(BNFileMetadata* file) { __debugbreak(); return {}; }

BINARYNINJACOREAPI bool BNIsSnapshotDataAppliedWithoutError(BNFileMetadata* view) { __debugbreak(); return {}; }

BINARYNINJACOREAPI void BNUnregisterViewOfType(BNFileMetadata* file, const char* type, BNBinaryView* view) { __debugbreak(); }

// Memory Map
BINARYNINJACOREAPI char* BNGetMemoryMapDescription(BNBinaryView* view) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNAddBinaryMemoryRegion(
	BNBinaryView* view, const char* name, uint64_t start, BNBinaryView* data, uint32_t flags) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNAddDataMemoryRegion(
	BNBinaryView* view, const char* name, uint64_t start, BNDataBuffer* data, uint32_t flags) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNAddRemoteMemoryRegion(
	BNBinaryView* view, const char* name, uint64_t start, BNFileAccessor* accessor, uint32_t flags) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoveMemoryRegion(BNBinaryView* view, const char* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetActiveMemoryRegionAt(BNBinaryView* view, uint64_t addr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint32_t BNGetMemoryRegionFlags(BNBinaryView* view, const char* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNSetMemoryRegionFlags(BNBinaryView* view, const char* name, uint32_t flags) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsMemoryRegionEnabled(BNBinaryView* view, const char* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNSetMemoryRegionEnabled(BNBinaryView* view, const char* name, bool enable) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsMemoryRegionRebaseable(BNBinaryView* view, const char* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNSetMemoryRegionRebaseable(BNBinaryView* view, const char* name, bool rebaseable) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint8_t BNGetMemoryRegionFill(BNBinaryView* view, const char* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNSetMemoryRegionFill(BNBinaryView* view, const char* name, uint8_t fill) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNResetMemoryMap(BNBinaryView* view) { __debugbreak(); }

// Binary view access
BINARYNINJACOREAPI BNBinaryView* BNNewViewReference(BNBinaryView* view) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeBinaryView(BNBinaryView* view) { __debugbreak(); }
BINARYNINJACOREAPI BNFileMetadata* BNGetFileForView(BNBinaryView* view) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetViewType(BNBinaryView* view) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNBinaryView* BNGetParentView(BNBinaryView* view) { __debugbreak(); return {}; }

BINARYNINJACOREAPI size_t BNReadViewData(BNBinaryView* view, void* dest, uint64_t offset, size_t len) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDataBuffer* BNReadViewBuffer(BNBinaryView* view, uint64_t offset, size_t len) { __debugbreak(); return {}; }

BINARYNINJACOREAPI size_t BNWriteViewData(BNBinaryView* view, uint64_t offset, const void* data, size_t len) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNWriteViewBuffer(BNBinaryView* view, uint64_t offset, BNDataBuffer* data) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNInsertViewData(BNBinaryView* view, uint64_t offset, const void* data, size_t len) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNInsertViewBuffer(BNBinaryView* view, uint64_t offset, BNDataBuffer* data) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNRemoveViewData(BNBinaryView* view, uint64_t offset, uint64_t len) { __debugbreak(); return {}; }

BINARYNINJACOREAPI void BNNotifyDataWritten(BNBinaryView* view, uint64_t offset, size_t len) { __debugbreak(); }
BINARYNINJACOREAPI void BNNotifyDataInserted(BNBinaryView* view, uint64_t offset, size_t len) { __debugbreak(); }
BINARYNINJACOREAPI void BNNotifyDataRemoved(BNBinaryView* view, uint64_t offset, uint64_t len) { __debugbreak(); }

BINARYNINJACOREAPI size_t BNGetEntropy(
	BNBinaryView* view, uint64_t offset, size_t len, size_t blockSize, float* result) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNModificationStatus BNGetModification(BNBinaryView* view, uint64_t offset) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetModificationArray(
	BNBinaryView* view, uint64_t offset, BNModificationStatus* result, size_t len) { __debugbreak(); return {}; }

BINARYNINJACOREAPI bool BNIsValidOffset(BNBinaryView* view, uint64_t offset) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsOffsetReadable(BNBinaryView* view, uint64_t offset) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsOffsetWritable(BNBinaryView* view, uint64_t offset) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsOffsetExecutable(BNBinaryView* view, uint64_t offset) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsOffsetBackedByFile(BNBinaryView* view, uint64_t offset) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsOffsetCodeSemantics(BNBinaryView* view, uint64_t offset) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsOffsetExternSemantics(BNBinaryView* view, uint64_t offset) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsOffsetWritableSemantics(BNBinaryView* view, uint64_t offset) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNGetNextValidOffset(BNBinaryView* view, uint64_t offset) { __debugbreak(); return {}; }

BINARYNINJACOREAPI uint64_t BNGetImageBase(BNBinaryView* view) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNGetOriginalImageBase(BNBinaryView* view) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetOriginalImageBase(BNBinaryView* view, uint64_t imageBase) { __debugbreak(); }
BINARYNINJACOREAPI uint64_t BNGetStartOffset(BNBinaryView* view) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNGetEndOffset(BNBinaryView* view) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNGetViewLength(BNBinaryView* view) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNGetEntryPoint(BNBinaryView* view) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNArchitecture* BNGetDefaultArchitecture(BNBinaryView* view) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetDefaultArchitecture(BNBinaryView* view, BNArchitecture* arch) { __debugbreak(); }
BINARYNINJACOREAPI BNPlatform* BNGetDefaultPlatform(BNBinaryView* view) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetDefaultPlatform(BNBinaryView* view, BNPlatform* platform) { __debugbreak(); }
BINARYNINJACOREAPI BNEndianness BNGetDefaultEndianness(BNBinaryView* view) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsRelocatable(BNBinaryView* view) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetViewAddressSize(BNBinaryView* view) { __debugbreak(); return {}; }

BINARYNINJACOREAPI bool BNIsViewModified(BNBinaryView* view) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsExecutableView(BNBinaryView* view) { __debugbreak(); return {}; }

BINARYNINJACOREAPI bool BNSaveToFile(BNBinaryView* view, BNFileAccessor* file) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNSaveToFilename(BNBinaryView* view, const char* filename) { __debugbreak(); return {}; }

BINARYNINJACOREAPI void BNDefineRelocation(
	BNBinaryView* view, BNArchitecture* arch, BNRelocationInfo* info, uint64_t target, uint64_t reloc) { __debugbreak(); }
BINARYNINJACOREAPI void BNDefineSymbolRelocation(
	BNBinaryView* view, BNArchitecture* arch, BNRelocationInfo* info, BNSymbol* target, uint64_t reloc) { __debugbreak(); }
BINARYNINJACOREAPI BNRange* BNGetRelocationRanges(BNBinaryView* view, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRange* BNGetRelocationRangesAtAddress(BNBinaryView* view, uint64_t addr, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRange* BNGetRelocationRangesInRange(
	BNBinaryView* view, uint64_t addr, uint64_t size, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRangeContainsRelocation(BNBinaryView* view, uint64_t addr, size_t size) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRelocation** BNGetRelocationsAt(BNBinaryView* view, uint64_t addr, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeRelocationList(BNRelocation** relocations, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeRelocationRanges(BNRange* ranges) { __debugbreak(); }

BINARYNINJACOREAPI void BNRegisterDataNotification(BNBinaryView* view, BNBinaryDataNotification* notify) { __debugbreak(); }
BINARYNINJACOREAPI void BNUnregisterDataNotification(BNBinaryView* view, BNBinaryDataNotification* notify) { __debugbreak(); }

BINARYNINJACOREAPI void BNRegisterProjectNotification(BNProject* project, BNProjectNotification* notify) { __debugbreak(); }
BINARYNINJACOREAPI void BNUnregisterProjectNotification(BNProject* project, BNProjectNotification* notify) { __debugbreak(); }

BINARYNINJACOREAPI bool BNCanAssemble(BNBinaryView* view, BNArchitecture* arch) { __debugbreak(); return {}; }

BINARYNINJACOREAPI bool BNIsNeverBranchPatchAvailable(BNBinaryView* view, BNArchitecture* arch, uint64_t addr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsAlwaysBranchPatchAvailable(BNBinaryView* view, BNArchitecture* arch, uint64_t addr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsInvertBranchPatchAvailable(BNBinaryView* view, BNArchitecture* arch, uint64_t addr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsSkipAndReturnZeroPatchAvailable(BNBinaryView* view, BNArchitecture* arch, uint64_t addr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsSkipAndReturnValuePatchAvailable(BNBinaryView* view, BNArchitecture* arch, uint64_t addr) { __debugbreak(); return {}; }

BINARYNINJACOREAPI bool BNConvertToNop(BNBinaryView* view, BNArchitecture* arch, uint64_t addr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNAlwaysBranch(BNBinaryView* view, BNArchitecture* arch, uint64_t addr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNInvertBranch(BNBinaryView* view, BNArchitecture* arch, uint64_t addr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNSkipAndReturnValue(BNBinaryView* view, BNArchitecture* arch, uint64_t addr, uint64_t value) { __debugbreak(); return {}; }

BINARYNINJACOREAPI size_t BNGetInstructionLength(BNBinaryView* view, BNArchitecture* arch, uint64_t addr) { __debugbreak(); return {}; }

BINARYNINJACOREAPI bool BNFindNextData(
	BNBinaryView* view, uint64_t start, BNDataBuffer* data, uint64_t* result, BNFindFlag flags) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNFindNextText(BNBinaryView* view, uint64_t start, const char* data, uint64_t* result,
	BNDisassemblySettings* settings, BNFindFlag flags, BNFunctionGraphType graph) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNFindNextConstant(BNBinaryView* view, uint64_t start, uint64_t constant, uint64_t* result,
	BNDisassemblySettings* settings, BNFunctionGraphType graph) { __debugbreak(); return {}; }

BINARYNINJACOREAPI bool BNFindNextDataWithProgress(BNBinaryView* view, uint64_t start, uint64_t end, BNDataBuffer* data,
	uint64_t* result, BNFindFlag flags, void* ctxt, bool (*progress)(void* ctxt, size_t current, size_t total)) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNFindNextTextWithProgress(BNBinaryView* view, uint64_t start, uint64_t end, const char* data,
	uint64_t* result, BNDisassemblySettings* settings, BNFindFlag flags, BNFunctionGraphType graph, void* ctxt,
	bool (*progress)(void* ctxt, size_t current, size_t total)) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNFindNextConstantWithProgress(BNBinaryView* view, uint64_t start, uint64_t end,
	uint64_t constant, uint64_t* result, BNDisassemblySettings* settings, BNFunctionGraphType graph, void* ctxt,
	bool (*progress)(void* ctxt, size_t current, size_t total)) { __debugbreak(); return {}; }

BINARYNINJACOREAPI bool BNFindAllDataWithProgress(BNBinaryView* view, uint64_t start, uint64_t end, BNDataBuffer* data,
	BNFindFlag flags, void* ctxt, bool (*progress)(void* ctxt, size_t current, size_t total), void* matchCtxt,
	bool (*matchCallback)(void* matchCtxt, uint64_t addr, BNDataBuffer* match)) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNFindAllTextWithProgress(BNBinaryView* view, uint64_t start, uint64_t end, const char* data,
	BNDisassemblySettings* settings, BNFindFlag flags, BNFunctionGraphType graph, void* ctxt,
	bool (*progress)(void* ctxt, size_t current, size_t total), void* matchCtxt,
	bool (*matchCallback)(void* matchCtxt, uint64_t addr, const char* match, BNLinearDisassemblyLine* line)) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNFindAllConstantWithProgress(BNBinaryView* view, uint64_t start, uint64_t end,
	uint64_t constant, BNDisassemblySettings* settings, BNFunctionGraphType graph, void* ctxt,
	bool (*progress)(void* ctxt, size_t current, size_t total), void* matchCtxt,
	bool (*matchCallback)(void* matchCtxt, uint64_t addr, BNLinearDisassemblyLine* line)) { __debugbreak(); return {}; }

BINARYNINJACOREAPI bool BNSearch(
	BNBinaryView* view, const char* query, void* context, bool (*callback)(void*, uint64_t, BNDataBuffer*)) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNPerformSearch(
	const char* query, const uint8_t* buffer, size_t size, bool (*callback)(void*, size_t, size_t), void* context) { __debugbreak(); return {}; }

BINARYNINJACOREAPI void BNAddAutoSegment(
	BNBinaryView* view, uint64_t start, uint64_t length, uint64_t dataOffset, uint64_t dataLength, uint32_t flags) { __debugbreak(); }
BINARYNINJACOREAPI void BNRemoveAutoSegment(BNBinaryView* view, uint64_t start, uint64_t length) { __debugbreak(); }
BINARYNINJACOREAPI void BNAddUserSegment(
	BNBinaryView* view, uint64_t start, uint64_t length, uint64_t dataOffset, uint64_t dataLength, uint32_t flags) { __debugbreak(); }
BINARYNINJACOREAPI void BNRemoveUserSegment(BNBinaryView* view, uint64_t start, uint64_t length) { __debugbreak(); }
BINARYNINJACOREAPI BNSegment** BNGetSegments(BNBinaryView* view, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeSegmentList(BNSegment** segments, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI BNSegment* BNGetSegmentAt(BNBinaryView* view, uint64_t addr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNGetAddressForDataOffset(BNBinaryView* view, uint64_t offset, uint64_t* addr) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNComponent* BNGetComponentByGuid(BNBinaryView* view, const char* guid) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNComponent* BNGetRootComponent(BNBinaryView* view) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNComponent* BNCreateComponent(BNBinaryView* view) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNComponent* BNCreateComponentWithParent(BNBinaryView* view, const char* parentGUID) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNComponent* BNCreateComponentWithName(BNBinaryView* view, const char* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNComponent* BNCreateComponentWithParentAndName(
	BNBinaryView* view, const char* parentGUID, const char* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNComponent* BNGetComponentByPath(BNBinaryView* view, const char* path) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoveComponent(BNBinaryView* view, BNComponent* component) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoveComponentByGuid(BNBinaryView* view, const char* guid) { __debugbreak(); return {}; }

BINARYNINJACOREAPI void BNAddAutoSection(BNBinaryView* view, const char* name, uint64_t start, uint64_t length,
	BNSectionSemantics semantics, const char* type, uint64_t align, uint64_t entrySize, const char* linkedSection,
	const char* infoSection, uint64_t infoData) { __debugbreak(); }
BINARYNINJACOREAPI void BNRemoveAutoSection(BNBinaryView* view, const char* name) { __debugbreak(); }
BINARYNINJACOREAPI void BNAddUserSection(BNBinaryView* view, const char* name, uint64_t start, uint64_t length,
	BNSectionSemantics semantics, const char* type, uint64_t align, uint64_t entrySize, const char* linkedSection,
	const char* infoSection, uint64_t infoData) { __debugbreak(); }
BINARYNINJACOREAPI void BNRemoveUserSection(BNBinaryView* view, const char* name) { __debugbreak(); }
BINARYNINJACOREAPI BNSection** BNGetSections(BNBinaryView* view, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNSection** BNGetSectionsAt(BNBinaryView* view, uint64_t addr, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeSectionList(BNSection** sections, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI BNSection* BNGetSectionByName(BNBinaryView* view, const char* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char** BNGetUniqueSectionNames(BNBinaryView* view, const char** names, size_t count) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNAddressRange* BNGetAllocatedRanges(BNBinaryView* view, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNAddressRange* BNGetMappedAddressRanges(BNBinaryView* view, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNAddressRange* BNGetBackedAddressRanges(BNBinaryView* view, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeAddressRanges(BNAddressRange* ranges) { __debugbreak(); }

BINARYNINJACOREAPI BNNameSpace* BNGetNameSpaces(BNBinaryView* view, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeNameSpaceList(BNNameSpace* nameSpace, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI BNNameSpace BNGetExternalNameSpace(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNNameSpace BNGetInternalNameSpace(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeNameSpace(BNNameSpace* name) { __debugbreak(); }

BINARYNINJACOREAPI BNRegisterValueWithConfidence BNGetGlobalPointerValue(BNBinaryView* view) { __debugbreak(); return {}; }

// Raw binary data view
BINARYNINJACOREAPI BNBinaryView* BNCreateBinaryDataView(BNFileMetadata* file) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBinaryView* BNCreateBinaryDataViewFromBuffer(BNFileMetadata* file, BNDataBuffer* buf) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBinaryView* BNCreateBinaryDataViewFromData(BNFileMetadata* file, const void* data, size_t len) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBinaryView* BNCreateBinaryDataViewFromFilename(BNFileMetadata* file, const char* filename) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBinaryView* BNCreateBinaryDataViewFromFile(BNFileMetadata* file, BNFileAccessor* accessor) { __debugbreak(); return {}; }

// Creation of new types of binary views
BINARYNINJACOREAPI BNBinaryView* BNCreateCustomBinaryView(
	const char* name, BNFileMetadata* file, BNBinaryView* parent, BNCustomBinaryView* view) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNBinaryViewType* BNGetBinaryViewTypeByName(const char* name)
{
	// TODO
	return nullptr;
}
BINARYNINJACOREAPI BNBinaryViewType** BNGetBinaryViewTypes(size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBinaryViewType** BNGetBinaryViewTypesForData(BNBinaryView* data, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeBinaryViewTypeList(BNBinaryViewType** types) { __debugbreak(); }
BINARYNINJACOREAPI char* BNGetBinaryViewTypeName(BNBinaryViewType* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetBinaryViewTypeLongName(BNBinaryViewType* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsBinaryViewTypeDeprecated(BNBinaryViewType* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBinaryView* BNCreateBinaryViewOfType(BNBinaryViewType* type, BNBinaryView* data) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBinaryView* BNParseBinaryViewOfType(BNBinaryViewType* type, BNBinaryView* data) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsBinaryViewTypeValidForData(BNBinaryViewType* type, BNBinaryView* data) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNSettings* BNGetBinaryViewDefaultLoadSettingsForData(BNBinaryViewType* type, BNBinaryView* data) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNSettings* BNGetBinaryViewLoadSettingsForData(BNBinaryViewType* type, BNBinaryView* data) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNBinaryViewType* BNRegisterBinaryViewType(
	const char* name, const char* longName, BNCustomBinaryViewType* type) { __debugbreak(); return {}; }

BINARYNINJACOREAPI void BNRegisterArchitectureForViewType(BNBinaryViewType* type, uint32_t id, BNEndianness endian,
	BNArchitecture* arch) { __debugbreak(); }  // Deprecated, use BNRegisterPlatformRecognizerForViewType
BINARYNINJACOREAPI BNArchitecture* BNGetArchitectureForViewType(BNBinaryViewType* type, uint32_t id,
	BNEndianness endian) { __debugbreak(); return {}; }  // Deprecated, use BNRecognizePlatformForViewType

BINARYNINJACOREAPI void BNRegisterPlatformForViewType(BNBinaryViewType* type, uint32_t id, BNArchitecture* arch,
	BNPlatform* platform) { __debugbreak(); }  // Deprecated, use BNRegisterPlatformRecognizerForViewType
BINARYNINJACOREAPI BNPlatform* BNGetPlatformForViewType(
	BNBinaryViewType* type, uint32_t id, BNArchitecture* arch) { __debugbreak(); return {}; }  // Deprecated, use BNRecognizePlatformForViewType

BINARYNINJACOREAPI void BNRegisterDefaultPlatformForViewType(
	BNBinaryViewType* type, BNArchitecture* arch, BNPlatform* platform) { __debugbreak(); }

// Expanded identification of Platform for BinaryViewTypes. Supersedes BNRegisterArchitectureForViewType
// and BNRegisterPlatformForViewType, as these have certain edge cases (overloaded elf families, for example)
// that can't be represented.
//
// The callback returns a Platform object or null (failure), and most recently added callbacks are called first
// to allow plugins to override any default behaviors. When a callback returns a platform, architecture will be
// derived from the identified platform.
//
// The BinaryView pointer is the *parent* view (usually 'Raw') that the BinaryView is being created for. This
// means that generally speaking the callbacks need to be aware of the underlying file format, however the
// BinaryView implementation may have created datavars in the 'Raw' view by the time the callback is invoked.
// Behavior regarding when this callback is invoked and what has been made available in the BinaryView passed as an
// argument to the callback is up to the discretion of the BinaryView implementation.
//
// The 'id' ind 'endian' arguments are used as a filter to determine which registered Platform recognizer callbacks
// are invoked.
//
// Support for this API tentatively requires explicit support in the BinaryView implementation.
BINARYNINJACOREAPI void BNRegisterPlatformRecognizerForViewType(BNBinaryViewType* type, uint64_t id,
	BNEndianness endian, BNPlatform* (*callback)(void* ctx, BNBinaryView* view, BNMetadata* metadata), void* ctx) { __debugbreak(); }

// BinaryView* passed in here should be the parent view (not the partially constructed object!), and this function
// should be called from the BNCustomBinaryView::init implementation.
//
// 'id' and 'endianness' are used to determine which registered callbacks are actually invoked to eliminate some
// common sources of boilerplate that all callbacks would have to implement otherwise. If these aren't applicable to
// your binaryviewtype just use constants here and document them so that people registering Platform recognizers for
// your view type know what to use.
BINARYNINJACOREAPI BNPlatform* BNRecognizePlatformForViewType(
	BNBinaryViewType* type, uint64_t id, BNEndianness endian, BNBinaryView* view, BNMetadata* metadata) { __debugbreak(); return {}; }


BINARYNINJACOREAPI void BNRegisterBinaryViewEvent(
	BNBinaryViewEventType type, void (*callback)(void* ctx, BNBinaryView* view), void* ctx) { __debugbreak(); }

// Stream reader object
BINARYNINJACOREAPI BNBinaryReader* BNCreateBinaryReader(BNBinaryView* view) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeBinaryReader(BNBinaryReader* stream) { __debugbreak(); }
BINARYNINJACOREAPI BNEndianness BNGetBinaryReaderEndianness(BNBinaryReader* stream) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetBinaryReaderEndianness(BNBinaryReader* stream, BNEndianness endian) { __debugbreak(); }

BINARYNINJACOREAPI bool BNReadData(BNBinaryReader* stream, void* dest, size_t len) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRead8(BNBinaryReader* stream, uint8_t* result) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRead16(BNBinaryReader* stream, uint16_t* result) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRead32(BNBinaryReader* stream, uint32_t* result) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRead64(BNBinaryReader* stream, uint64_t* result) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNReadLE16(BNBinaryReader* stream, uint16_t* result) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNReadLE32(BNBinaryReader* stream, uint32_t* result) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNReadLE64(BNBinaryReader* stream, uint64_t* result) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNReadBE16(BNBinaryReader* stream, uint16_t* result) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNReadBE32(BNBinaryReader* stream, uint32_t* result) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNReadBE64(BNBinaryReader* stream, uint64_t* result) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNReadPointer(BNBinaryView* view, BNBinaryReader* stream, uint64_t* result) { __debugbreak(); return {}; }

BINARYNINJACOREAPI uint64_t BNGetReaderPosition(BNBinaryReader* stream) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSeekBinaryReader(BNBinaryReader* stream, uint64_t offset) { __debugbreak(); }
BINARYNINJACOREAPI void BNSeekBinaryReaderRelative(BNBinaryReader* stream, int64_t offset) { __debugbreak(); }
BINARYNINJACOREAPI uint64_t BNGetBinaryReaderVirtualBase(BNBinaryReader* stream) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetBinaryReaderVirtualBase(BNBinaryReader* stream, uint64_t base) { __debugbreak(); }
BINARYNINJACOREAPI bool BNIsEndOfFile(BNBinaryReader* stream) { __debugbreak(); return {}; }

// Stream writer object
BINARYNINJACOREAPI BNBinaryWriter* BNCreateBinaryWriter(BNBinaryView* view) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeBinaryWriter(BNBinaryWriter* stream) { __debugbreak(); }
BINARYNINJACOREAPI BNEndianness BNGetBinaryWriterEndianness(BNBinaryWriter* stream) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetBinaryWriterEndianness(BNBinaryWriter* stream, BNEndianness endian) { __debugbreak(); }

BINARYNINJACOREAPI bool BNWriteData(BNBinaryWriter* stream, const void* src, size_t len) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNWrite8(BNBinaryWriter* stream, uint8_t val) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNWrite16(BNBinaryWriter* stream, uint16_t val) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNWrite32(BNBinaryWriter* stream, uint32_t val) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNWrite64(BNBinaryWriter* stream, uint64_t val) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNWriteLE16(BNBinaryWriter* stream, uint16_t val) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNWriteLE32(BNBinaryWriter* stream, uint32_t val) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNWriteLE64(BNBinaryWriter* stream, uint64_t val) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNWriteBE16(BNBinaryWriter* stream, uint16_t val) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNWriteBE32(BNBinaryWriter* stream, uint32_t val) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNWriteBE64(BNBinaryWriter* stream, uint64_t val) { __debugbreak(); return {}; }

BINARYNINJACOREAPI uint64_t BNGetWriterPosition(BNBinaryWriter* stream) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSeekBinaryWriter(BNBinaryWriter* stream, uint64_t offset) { __debugbreak(); }
BINARYNINJACOREAPI void BNSeekBinaryWriterRelative(BNBinaryWriter* stream, int64_t offset) { __debugbreak(); }

// Transforms
BINARYNINJACOREAPI BNTransform* BNGetTransformByName(const char* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTransform** BNGetTransformTypeList(size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeTransformTypeList(BNTransform** xforms) { __debugbreak(); }
BINARYNINJACOREAPI BNTransform* BNRegisterTransformType(
	BNTransformType type, const char* name, const char* longName, const char* group, BNCustomTransform* xform) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNTransformType BNGetTransformType(BNTransform* xform) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetTransformName(BNTransform* xform) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetTransformLongName(BNTransform* xform) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetTransformGroup(BNTransform* xform) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTransformParameterInfo* BNGetTransformParameterList(BNTransform* xform, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeTransformParameterList(BNTransformParameterInfo* params, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI bool BNDecode(
	BNTransform* xform, BNDataBuffer* input, BNDataBuffer* output, BNTransformParameter* params, size_t paramCount) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNEncode(
	BNTransform* xform, BNDataBuffer* input, BNDataBuffer* output, BNTransformParameter* params, size_t paramCount) { __debugbreak(); return {}; }

// Architectures
#include "core_architecture.h"

// Analysis
BINARYNINJACOREAPI void BNAddAnalysisOption(BNBinaryView* view, const char* name) { __debugbreak(); }
BINARYNINJACOREAPI BNFunction* BNAddFunctionForAnalysis(
	BNBinaryView* view, BNPlatform* platform, uint64_t addr, bool autoDiscovered, BNType* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNAddEntryPointForAnalysis(BNBinaryView* view, BNPlatform* platform, uint64_t addr) { __debugbreak(); }
BINARYNINJACOREAPI void BNRemoveAnalysisFunction(BNBinaryView* view, BNFunction* func, bool updateRefs) { __debugbreak(); }
BINARYNINJACOREAPI BNFunction* BNCreateUserFunction(BNBinaryView* view, BNPlatform* platform, uint64_t addr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNRemoveUserFunction(BNBinaryView* view, BNFunction* func) { __debugbreak(); }
BINARYNINJACOREAPI bool BNHasInitialAnalysis(BNBinaryView* view) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetAnalysisHold(BNBinaryView* view, bool enable) { __debugbreak(); }
BINARYNINJACOREAPI void BNUpdateAnalysisAndWait(BNBinaryView* view) { __debugbreak(); }
BINARYNINJACOREAPI void BNUpdateAnalysis(BNBinaryView* view) { __debugbreak(); }
BINARYNINJACOREAPI void BNAbortAnalysis(BNBinaryView* view) { __debugbreak(); }
BINARYNINJACOREAPI bool BNIsFunctionUpdateNeeded(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNRequestAdvancedFunctionAnalysisData(BNFunction* func) { __debugbreak(); }
BINARYNINJACOREAPI void BNReleaseAdvancedFunctionAnalysisData(BNFunction* func) { __debugbreak(); }
BINARYNINJACOREAPI void BNReleaseAdvancedFunctionAnalysisDataMultiple(BNFunction* func, size_t count) { __debugbreak(); }

BINARYNINJACOREAPI BNFunction* BNNewFunctionReference(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeFunction(BNFunction* func) { __debugbreak(); }
BINARYNINJACOREAPI BNFunction** BNGetAnalysisFunctionList(BNBinaryView* view, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeFunctionList(BNFunction** funcs, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI bool BNHasFunctions(BNBinaryView* view) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNHasSymbols(BNBinaryView* view) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNHasDataVariables(BNBinaryView* view) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNFunction* BNGetAnalysisFunction(BNBinaryView* view, BNPlatform* platform, uint64_t addr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNFunction* BNGetRecentAnalysisFunctionForAddress(BNBinaryView* view, uint64_t addr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNFunction** BNGetAnalysisFunctionsForAddress(BNBinaryView* view, uint64_t addr, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNFunction** BNGetAnalysisFunctionsContainingAddress(
	BNBinaryView* view, uint64_t addr, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNFunction* BNGetAnalysisEntryPoint(BNBinaryView* view) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNFunction** BNGetAllEntryFunctions(BNBinaryView* view, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNAddToEntryFunctions(BNBinaryView* view, BNFunction* func) { __debugbreak(); }

BINARYNINJACOREAPI char* BNGetGlobalCommentForAddress(BNBinaryView* view, uint64_t addr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t* BNGetGlobalCommentedAddresses(BNBinaryView* view, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetGlobalCommentForAddress(BNBinaryView* view, uint64_t addr, const char* comment) { __debugbreak(); }

BINARYNINJACOREAPI BNBinaryView* BNGetFunctionData(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNArchitecture* BNGetFunctionArchitecture(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNPlatform* BNGetFunctionPlatform(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNGetFunctionStart(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNSymbol* BNGetFunctionSymbol(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNWasFunctionAutomaticallyDiscovered(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNFunctionHasUserAnnotations(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBoolWithConfidence BNCanFunctionReturn(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBoolWithConfidence BNIsFunctionPure(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetFunctionAutoType(BNFunction* func, BNType* type) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetFunctionUserType(BNFunction* func, BNType* type) { __debugbreak(); }
BINARYNINJACOREAPI bool BNFunctionHasUserType(BNFunction* func) { __debugbreak(); return {}; }

BINARYNINJACOREAPI char* BNGetFunctionComment(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetCommentForAddress(BNFunction* func, uint64_t addr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t* BNGetCommentedAddresses(BNFunction* func, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeAddressList(uint64_t* addrs) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetFunctionComment(BNFunction* func, const char* comment) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetCommentForAddress(BNFunction* func, uint64_t addr, const char* comment) { __debugbreak(); }

BINARYNINJACOREAPI void BNAddUserCodeReference(
	BNFunction* func, BNArchitecture* fromArch, uint64_t fromAddr, uint64_t toAddr) { __debugbreak(); }
BINARYNINJACOREAPI void BNRemoveUserCodeReference(
	BNFunction* func, BNArchitecture* fromArch, uint64_t fromAddr, uint64_t toAddr) { __debugbreak(); }

BINARYNINJACOREAPI void BNAddUserTypeReference(
	BNFunction* func, BNArchitecture* fromArch, uint64_t fromAddr, BNQualifiedName* name) { __debugbreak(); }
BINARYNINJACOREAPI void BNRemoveUserTypeReference(
	BNFunction* func, BNArchitecture* fromArch, uint64_t fromAddr, BNQualifiedName* name) { __debugbreak(); }
BINARYNINJACOREAPI void BNAddUserTypeFieldReference(
	BNFunction* func, BNArchitecture* fromArch, uint64_t fromAddr, BNQualifiedName* name, uint64_t offset, size_t size) { __debugbreak(); }
BINARYNINJACOREAPI void BNRemoveUserTypeFieldReference(
	BNFunction* func, BNArchitecture* fromArch, uint64_t fromAddr, BNQualifiedName* name, uint64_t offset, size_t size) { __debugbreak(); }

BINARYNINJACOREAPI BNBasicBlock* BNNewBasicBlockReference(BNBasicBlock* block) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeBasicBlock(BNBasicBlock* block) { __debugbreak(); }
BINARYNINJACOREAPI BNBasicBlock** BNGetFunctionBasicBlockList(BNFunction* func, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeBasicBlockList(BNBasicBlock** blocks, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI BNBasicBlock* BNGetFunctionBasicBlockAtAddress(
	BNFunction* func, BNArchitecture* arch, uint64_t addr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBasicBlock* BNGetRecentBasicBlockForAddress(BNBinaryView* view, uint64_t addr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBasicBlock** BNGetBasicBlocksForAddress(BNBinaryView* view, uint64_t addr, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBasicBlock** BNGetBasicBlocksStartingAtAddress(BNBinaryView* view, uint64_t addr, size_t* count) { __debugbreak(); return {}; }

BINARYNINJACOREAPI uint64_t BNGetFunctionHighestAddress(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNGetFunctionLowestAddress(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNAddressRange* BNGetFunctionAddressRanges(BNFunction* func, size_t* count) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNLowLevelILFunction* BNGetFunctionLowLevelIL(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNLowLevelILFunction* BNGetFunctionLowLevelILIfAvailable(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetLowLevelILForInstruction(BNFunction* func, BNArchitecture* arch, uint64_t addr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t* BNGetLowLevelILInstructionsForAddress(
	BNFunction* func, BNArchitecture* arch, uint64_t addr, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t* BNGetLowLevelILExitsForInstruction(
	BNFunction* func, BNArchitecture* arch, uint64_t addr, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeILInstructionList(size_t* list) { __debugbreak(); }
BINARYNINJACOREAPI BNMediumLevelILFunction* BNGetFunctionMediumLevelIL(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNMediumLevelILFunction* BNGetFunctionMediumLevelILIfAvailable(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNMediumLevelILFunction* BNGetFunctionMappedMediumLevelIL(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNMediumLevelILFunction* BNGetFunctionMappedMediumLevelILIfAvailable(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNHighLevelILFunction* BNGetFunctionHighLevelIL(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNHighLevelILFunction* BNGetFunctionHighLevelILIfAvailable(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNLanguageRepresentationFunction* BNGetFunctionLanguageRepresentation(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNLanguageRepresentationFunction* BNGetFunctionLanguageRepresentationIfAvailable(BNFunction* func) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNDataBuffer* BNGetConstantData(
	BNFunction* func, BNRegisterValueType state, uint64_t value, size_t size) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNRegisterValue BNGetRegisterValueAtInstruction(
	BNFunction* func, BNArchitecture* arch, uint64_t addr, uint32_t reg) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRegisterValue BNGetRegisterValueAfterInstruction(
	BNFunction* func, BNArchitecture* arch, uint64_t addr, uint32_t reg) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRegisterValue BNGetStackContentsAtInstruction(
	BNFunction* func, BNArchitecture* arch, uint64_t addr, int64_t offset, size_t size) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRegisterValue BNGetStackContentsAfterInstruction(
	BNFunction* func, BNArchitecture* arch, uint64_t addr, int64_t offset, size_t size) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRegisterValue BNGetParameterValueAtInstruction(
	BNFunction* func, BNArchitecture* arch, uint64_t addr, BNType* functionType, size_t i) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRegisterValue BNGetParameterValueAtLowLevelILInstruction(
	BNFunction* func, size_t instr, BNType* functionType, size_t i) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreePossibleValueSet(BNPossibleValueSet* value) { __debugbreak(); }
BINARYNINJACOREAPI uint32_t* BNGetRegistersReadByInstruction(
	BNFunction* func, BNArchitecture* arch, uint64_t addr, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint32_t* BNGetRegistersWrittenByInstruction(
	BNFunction* func, BNArchitecture* arch, uint64_t addr, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNStackVariableReference* BNGetStackVariablesReferencedByInstruction(
	BNFunction* func, BNArchitecture* arch, uint64_t addr, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNStackVariableReference* BNGetStackVariablesReferencedByInstructionIfAvailable(
	BNFunction* func, BNArchitecture* arch, uint64_t addr, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeStackVariableReferenceList(BNStackVariableReference* refs, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI BNConstantReference* BNGetConstantsReferencedByInstruction(
	BNFunction* func, BNArchitecture* arch, uint64_t addr, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNConstantReference* BNGetConstantsReferencedByInstructionIfAvailable(
	BNFunction* func, BNArchitecture* arch, uint64_t addr, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeConstantReferenceList(BNConstantReference* refs) { __debugbreak(); }

BINARYNINJACOREAPI BNLowLevelILFunction* BNGetFunctionLiftedIL(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNLowLevelILFunction* BNGetFunctionLiftedILIfAvailable(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetLiftedILForInstruction(BNFunction* func, BNArchitecture* arch, uint64_t addr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t* BNGetLiftedILInstructionsForAddress(
	BNFunction* func, BNArchitecture* arch, uint64_t addr, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t* BNGetLiftedILFlagUsesForDefinition(BNFunction* func, size_t i, uint32_t flag, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t* BNGetLiftedILFlagDefinitionsForUse(BNFunction* func, size_t i, uint32_t flag, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint32_t* BNGetFlagsReadByLiftedILInstruction(BNFunction* func, size_t i, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint32_t* BNGetFlagsWrittenByLiftedILInstruction(BNFunction* func, size_t i, size_t* count) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNType* BNGetFunctionType(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTypeWithConfidence BNGetFunctionReturnType(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRegisterSetWithConfidence BNGetFunctionReturnRegisters(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNCallingConventionWithConfidence BNGetFunctionCallingConvention(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNParameterVariablesWithConfidence BNGetFunctionParameterVariables(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeParameterVariables(BNParameterVariablesWithConfidence* vars) { __debugbreak(); }
BINARYNINJACOREAPI BNBoolWithConfidence BNFunctionHasVariableArguments(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNOffsetWithConfidence BNGetFunctionStackAdjustment(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRegisterStackAdjustment* BNGetFunctionRegisterStackAdjustments(BNFunction* func, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeRegisterStackAdjustments(BNRegisterStackAdjustment* adjustments) { __debugbreak(); }
BINARYNINJACOREAPI BNRegisterSetWithConfidence BNGetFunctionClobberedRegisters(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeRegisterSet(BNRegisterSetWithConfidence* regs) { __debugbreak(); }

BINARYNINJACOREAPI void BNSetAutoFunctionReturnType(BNFunction* func, BNTypeWithConfidence* type) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetAutoFunctionReturnRegisters(BNFunction* func, BNRegisterSetWithConfidence* regs) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetAutoFunctionCallingConvention(
	BNFunction* func, BNCallingConventionWithConfidence* convention) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetAutoFunctionParameterVariables(BNFunction* func, BNParameterVariablesWithConfidence* vars) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetAutoFunctionHasVariableArguments(BNFunction* func, BNBoolWithConfidence* varArgs) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetAutoFunctionCanReturn(BNFunction* func, BNBoolWithConfidence* returns) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetAutoFunctionPure(BNFunction* func, BNBoolWithConfidence* pure) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetAutoFunctionStackAdjustment(BNFunction* func, BNOffsetWithConfidence* stackAdjust) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetAutoFunctionRegisterStackAdjustments(
	BNFunction* func, BNRegisterStackAdjustment* adjustments, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetAutoFunctionClobberedRegisters(BNFunction* func, BNRegisterSetWithConfidence* regs) { __debugbreak(); }

BINARYNINJACOREAPI void BNSetUserFunctionReturnType(BNFunction* func, BNTypeWithConfidence* type) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetUserFunctionReturnRegisters(BNFunction* func, BNRegisterSetWithConfidence* regs) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetUserFunctionCallingConvention(
	BNFunction* func, BNCallingConventionWithConfidence* convention) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetUserFunctionParameterVariables(BNFunction* func, BNParameterVariablesWithConfidence* vars) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetUserFunctionHasVariableArguments(BNFunction* func, BNBoolWithConfidence* varArgs) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetUserFunctionCanReturn(BNFunction* func, BNBoolWithConfidence* returns) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetUserFunctionPure(BNFunction* func, BNBoolWithConfidence* pure) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetUserFunctionStackAdjustment(BNFunction* func, BNOffsetWithConfidence* stackAdjust) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetUserFunctionRegisterStackAdjustments(
	BNFunction* func, BNRegisterStackAdjustment* adjustments, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetUserFunctionClobberedRegisters(BNFunction* func, BNRegisterSetWithConfidence* regs) { __debugbreak(); }

BINARYNINJACOREAPI void BNApplyImportedTypes(BNFunction* func, BNSymbol* sym, BNType* type) { __debugbreak(); }
BINARYNINJACOREAPI void BNApplyAutoDiscoveredFunctionType(BNFunction* func, BNType* type) { __debugbreak(); }
BINARYNINJACOREAPI bool BNFunctionHasExplicitlyDefinedType(BNFunction* func) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNDisassemblyTextLine* BNGetFunctionTypeTokens(
	BNFunction* func, BNDisassemblySettings* settings, size_t* count) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNRegisterValueWithConfidence BNGetFunctionGlobalPointerValue(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNFunctionUsesIncomingGlobalPointer(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRegisterValueWithConfidence BNGetFunctionRegisterValueAtExit(BNFunction* func, uint32_t reg) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNBoolWithConfidence BNIsFunctionInlinedDuringAnalysis(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetAutoFunctionInlinedDuringAnalysis(BNFunction* func, BNBoolWithConfidence inlined) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetUserFunctionInlinedDuringAnalysis(BNFunction* func, BNBoolWithConfidence inlined) { __debugbreak(); }

BINARYNINJACOREAPI bool BNGetInstructionContainingAddress(
	BNFunction* func, BNArchitecture* arch, uint64_t addr, uint64_t* start) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNFunction* BNGetBasicBlockFunction(BNBasicBlock* block) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNArchitecture* BNGetBasicBlockArchitecture(BNBasicBlock* block) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBasicBlock* BNGetBasicBlockSource(BNBasicBlock* block) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNGetBasicBlockStart(BNBasicBlock* block) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNGetBasicBlockEnd(BNBasicBlock* block) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNGetBasicBlockLength(BNBasicBlock* block) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBasicBlockEdge* BNGetBasicBlockOutgoingEdges(BNBasicBlock* block, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBasicBlockEdge* BNGetBasicBlockIncomingEdges(BNBasicBlock* block, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeBasicBlockEdgeList(BNBasicBlockEdge* edges, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI bool BNBasicBlockHasUndeterminedOutgoingEdges(BNBasicBlock* block) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNBasicBlockCanExit(BNBasicBlock* block) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNBasicBlockSetCanExit(BNBasicBlock* block, bool value) { __debugbreak(); }
BINARYNINJACOREAPI bool BNBasicBlockHasInvalidInstructions(BNBasicBlock* block) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetBasicBlockIndex(BNBasicBlock* block) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBasicBlock** BNGetBasicBlockDominators(BNBasicBlock* block, size_t* count, bool post) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBasicBlock** BNGetBasicBlockStrictDominators(BNBasicBlock* block, size_t* count, bool post) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBasicBlock* BNGetBasicBlockImmediateDominator(BNBasicBlock* block, bool post) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBasicBlock** BNGetBasicBlockDominatorTreeChildren(BNBasicBlock* block, size_t* count, bool post) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBasicBlock** BNGetBasicBlockDominanceFrontier(BNBasicBlock* block, size_t* count, bool post) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBasicBlock** BNGetBasicBlockIteratedDominanceFrontier(
	BNBasicBlock** blocks, size_t incomingCount, size_t* outputCount) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsILBasicBlock(BNBasicBlock* block) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsLowLevelILBasicBlock(BNBasicBlock* block) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsMediumLevelILBasicBlock(BNBasicBlock* block) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsHighLevelILBasicBlock(BNBasicBlock* block) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNFunctionGraphType BNGetBasicBlockFunctionGraphType(BNBasicBlock* block) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNLowLevelILFunction* BNGetBasicBlockLowLevelILFunction(BNBasicBlock* block) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNMediumLevelILFunction* BNGetBasicBlockMediumLevelILFunction(BNBasicBlock* block) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNHighLevelILFunction* BNGetBasicBlockHighLevelILFunction(BNBasicBlock* block) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNGetBasicBlockInstructionContainingAddress(
	BNBasicBlock* block, uint64_t addr, uint64_t* start) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBasicBlock* BNGetBasicBlockSourceBlock(BNBasicBlock* block) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNDisassemblyTextLine* BNGetBasicBlockDisassemblyText(
	BNBasicBlock* block, BNDisassemblySettings* settings, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeDisassemblyTextLines(BNDisassemblyTextLine* lines, size_t count) { __debugbreak(); }

BINARYNINJACOREAPI char* BNGetDisplayStringForInteger(
	BNBinaryView* binaryView, BNIntegerDisplayType type, uint64_t value, size_t inputWidth, bool isSigned) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDisassemblyTextRenderer* BNCreateDisassemblyTextRenderer(
	BNFunction* func, BNDisassemblySettings* settings) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDisassemblyTextRenderer* BNCreateLowLevelILDisassemblyTextRenderer(
	BNLowLevelILFunction* func, BNDisassemblySettings* settings) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDisassemblyTextRenderer* BNCreateMediumLevelILDisassemblyTextRenderer(
	BNMediumLevelILFunction* func, BNDisassemblySettings* settings) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDisassemblyTextRenderer* BNCreateHighLevelILDisassemblyTextRenderer(
	BNHighLevelILFunction* func, BNDisassemblySettings* settings) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDisassemblyTextRenderer* BNNewDisassemblyTextRendererReference(
	BNDisassemblyTextRenderer* renderer) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeDisassemblyTextRenderer(BNDisassemblyTextRenderer* renderer) { __debugbreak(); }
BINARYNINJACOREAPI BNFunction* BNGetDisassemblyTextRendererFunction(BNDisassemblyTextRenderer* renderer) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNLowLevelILFunction* BNGetDisassemblyTextRendererLowLevelILFunction(
	BNDisassemblyTextRenderer* renderer) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNMediumLevelILFunction* BNGetDisassemblyTextRendererMediumLevelILFunction(
	BNDisassemblyTextRenderer* renderer) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNHighLevelILFunction* BNGetDisassemblyTextRendererHighLevelILFunction(
	BNDisassemblyTextRenderer* renderer) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBasicBlock* BNGetDisassemblyTextRendererBasicBlock(BNDisassemblyTextRenderer* renderer) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNArchitecture* BNGetDisassemblyTextRendererArchitecture(BNDisassemblyTextRenderer* renderer) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDisassemblySettings* BNGetDisassemblyTextRendererSettings(BNDisassemblyTextRenderer* renderer) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetDisassemblyTextRendererBasicBlock(
	BNDisassemblyTextRenderer* renderer, BNBasicBlock* block) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetDisassemblyTextRendererArchitecture(
	BNDisassemblyTextRenderer* renderer, BNArchitecture* arch) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetDisassemblyTextRendererSettings(
	BNDisassemblyTextRenderer* renderer, BNDisassemblySettings* settings) { __debugbreak(); }
BINARYNINJACOREAPI bool BNIsILDisassemblyTextRenderer(BNDisassemblyTextRenderer* renderer) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNDisassemblyTextRendererHasDataFlow(BNDisassemblyTextRenderer* renderer) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNInstructionTextToken* BNGetDisassemblyTextRendererInstructionAnnotations(
	BNDisassemblyTextRenderer* renderer, uint64_t addr, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNGetDisassemblyTextRendererInstructionText(
	BNDisassemblyTextRenderer* renderer, uint64_t addr, size_t* len, BNDisassemblyTextLine** result, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNGetDisassemblyTextRendererLines(
	BNDisassemblyTextRenderer* renderer, uint64_t addr, size_t* len, BNDisassemblyTextLine** result, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDisassemblyTextLine* BNPostProcessDisassemblyTextRendererLines(BNDisassemblyTextRenderer* renderer,
	uint64_t addr, size_t len, BNDisassemblyTextLine* inLines, size_t inCount, size_t* outCount,
	const char* indentSpaces) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNResetDisassemblyTextRendererDeduplicatedComments(BNDisassemblyTextRenderer* renderer) { __debugbreak(); }
BINARYNINJACOREAPI bool BNGetDisassemblyTextRendererSymbolTokens(BNDisassemblyTextRenderer* renderer, uint64_t addr,
	size_t size, size_t operand, BNInstructionTextToken** result, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNInstructionTextToken* BNGetDisassemblyTextRendererStackVariableReferenceTokens(
	BNDisassemblyTextRenderer* renderer, BNStackVariableReference* ref, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsIntegerToken(BNInstructionTextTokenType type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNInstructionTextToken* BNGetDisassemblyTextRendererIntegerTokens(
	BNDisassemblyTextRenderer* renderer, BNInstructionTextToken* token, BNArchitecture* arch, uint64_t addr,
	size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDisassemblyTextLine* BNDisassemblyTextRendererWrapComment(BNDisassemblyTextRenderer* renderer,
	const BNDisassemblyTextLine* inLine, size_t* outLineCount, const char* comment, bool hasAutoAnnotations,
	const char* leadingSpaces, const char* indentSpaces) { __debugbreak(); return {}; }

BINARYNINJACOREAPI void BNMarkFunctionAsRecentlyUsed(BNFunction* func) { __debugbreak(); }
BINARYNINJACOREAPI void BNMarkBasicBlockAsRecentlyUsed(BNBasicBlock* block) { __debugbreak(); }

BINARYNINJACOREAPI BNReferenceSource* BNGetCodeReferences(BNBinaryView* view, uint64_t addr, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNReferenceSource* BNGetCodeReferencesInRange(
	BNBinaryView* view, uint64_t addr, uint64_t len, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeCodeReferences(BNReferenceSource* refs, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeTypeFieldReferences(BNTypeFieldReference* refs, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeILReferences(BNILReferenceSource* refs, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI uint64_t* BNGetCodeReferencesFrom(BNBinaryView* view, BNReferenceSource* src, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t* BNGetCodeReferencesFromInRange(
	BNBinaryView* view, BNReferenceSource* src, uint64_t len, size_t* count) { __debugbreak(); return {}; }

BINARYNINJACOREAPI uint64_t* BNGetDataReferences(BNBinaryView* view, uint64_t addr, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t* BNGetDataReferencesInRange(BNBinaryView* view, uint64_t addr, uint64_t len, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t* BNGetDataReferencesFrom(BNBinaryView* view, uint64_t addr, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t* BNGetDataReferencesFromInRange(
	BNBinaryView* view, uint64_t addr, uint64_t len, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNAddUserDataReference(BNBinaryView* view, uint64_t fromAddr, uint64_t toAddr) { __debugbreak(); }
BINARYNINJACOREAPI void BNRemoveUserDataReference(BNBinaryView* view, uint64_t fromAddr, uint64_t toAddr) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeDataReferences(uint64_t* refs) { __debugbreak(); }

BINARYNINJACOREAPI void BNFreeTypeReferences(BNTypeReferenceSource* refs, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeTypeFieldReferenceSizeInfo(BNTypeFieldReferenceSizeInfo* refs, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeTypeFieldReferenceTypeInfo(BNTypeFieldReferenceTypeInfo* refs, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeTypeFieldReferenceSizes(size_t* refs, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeTypeFieldReferenceTypes(BNTypeWithConfidence* refs, size_t count) { __debugbreak(); }

// References to type
BINARYNINJACOREAPI BNReferenceSource* BNGetCodeReferencesForType(
	BNBinaryView* view, BNQualifiedName* type, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t* BNGetDataReferencesForType(BNBinaryView* view, BNQualifiedName* type, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTypeReferenceSource* BNGetTypeReferencesForType(
	BNBinaryView* view, BNQualifiedName* type, size_t* count) { __debugbreak(); return {}; }

// References to type field
BINARYNINJACOREAPI BNTypeFieldReference* BNGetCodeReferencesForTypeField(
	BNBinaryView* view, BNQualifiedName* type, uint64_t offset, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t* BNGetDataReferencesForTypeField(
	BNBinaryView* view, BNQualifiedName* type, uint64_t offset, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t* BNGetDataReferencesFromForTypeField(
	BNBinaryView* view, BNQualifiedName* type, uint64_t offset, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTypeReferenceSource* BNGetTypeReferencesForTypeField(
	BNBinaryView* view, BNQualifiedName* type, uint64_t offset, size_t* count) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNTypeReferenceSource* BNGetCodeReferencesForTypeFrom(
	BNBinaryView* view, BNReferenceSource* addr, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTypeReferenceSource* BNGetCodeReferencesForTypeFromInRange(
	BNBinaryView* view, BNReferenceSource* addr, uint64_t len, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTypeReferenceSource* BNGetCodeReferencesForTypeFieldsFrom(
	BNBinaryView* view, BNReferenceSource* addr, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTypeReferenceSource* BNGetCodeReferencesForTypeFieldsFromInRange(
	BNBinaryView* view, BNReferenceSource* addr, uint64_t len, size_t* count) { __debugbreak(); return {}; }

BINARYNINJACOREAPI uint64_t* BNGetAllFieldsReferenced(BNBinaryView* view, BNQualifiedName* type, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTypeFieldReferenceSizeInfo* BNGetAllSizesReferenced(
	BNBinaryView* view, BNQualifiedName* type, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTypeFieldReferenceTypeInfo* BNGetAllTypesReferenced(
	BNBinaryView* view, BNQualifiedName* type, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t* BNGetSizesReferenced(
	BNBinaryView* view, BNQualifiedName* type, uint64_t offset, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTypeWithConfidence* BNGetTypesReferenced(
	BNBinaryView* view, BNQualifiedName* type, uint64_t offset, size_t* count) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNQualifiedName* BNGetOutgoingDirectTypeReferences(
	BNBinaryView* view, BNQualifiedName* type, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNQualifiedName* BNGetOutgoingRecursiveTypeReferences(
	BNBinaryView* view, BNQualifiedName* types, size_t typeCount, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNQualifiedName* BNGetIncomingDirectTypeReferences(
	BNBinaryView* view, BNQualifiedName* type, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNQualifiedName* BNGetIncomingRecursiveTypeReferences(
	BNBinaryView* view, BNQualifiedName* types, size_t typeCount, size_t* count) { __debugbreak(); return {}; }

BINARYNINJACOREAPI void BNRegisterGlobalFunctionRecognizer(BNFunctionRecognizer* rec) { __debugbreak(); }

BINARYNINJACOREAPI bool BNGetStringAtAddress(BNBinaryView* view, uint64_t addr, BNStringReference* strRef) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNStringReference* BNGetStrings(BNBinaryView* view, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNStringReference* BNGetStringsInRange(
	BNBinaryView* view, uint64_t start, uint64_t len, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeStringReferenceList(BNStringReference* strings) { __debugbreak(); }

BINARYNINJACOREAPI BNVariableNameAndType* BNGetStackLayout(BNFunction* func, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeVariableNameAndTypeList(BNVariableNameAndType* vars, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI void BNCreateAutoStackVariable(
	BNFunction* func, int64_t offset, BNTypeWithConfidence* type, const char* name) { __debugbreak(); }
BINARYNINJACOREAPI void BNCreateUserStackVariable(
	BNFunction* func, int64_t offset, BNTypeWithConfidence* type, const char* name) { __debugbreak(); }
BINARYNINJACOREAPI void BNDeleteAutoStackVariable(BNFunction* func, int64_t offset) { __debugbreak(); }
BINARYNINJACOREAPI void BNDeleteUserStackVariable(BNFunction* func, int64_t offset) { __debugbreak(); }
BINARYNINJACOREAPI bool BNGetStackVariableAtFrameOffset(
	BNFunction* func, BNArchitecture* arch, uint64_t addr, int64_t offset, BNVariableNameAndType* var) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeVariableNameAndType(BNVariableNameAndType* var) { __debugbreak(); }

BINARYNINJACOREAPI BNVariableNameAndType* BNGetFunctionVariables(BNFunction* func, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNCreateAutoVariable(
	BNFunction* func, const BNVariable* var, BNTypeWithConfidence* type, const char* name, bool ignoreDisjointUses) { __debugbreak(); }
BINARYNINJACOREAPI void BNCreateUserVariable(
	BNFunction* func, const BNVariable* var, BNTypeWithConfidence* type, const char* name, bool ignoreDisjointUses) { __debugbreak(); }
BINARYNINJACOREAPI void BNDeleteUserVariable(BNFunction* func, const BNVariable* var) { __debugbreak(); }
BINARYNINJACOREAPI bool BNIsVariableUserDefined(BNFunction* func, const BNVariable* var) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTypeWithConfidence BNGetVariableType(BNFunction* func, const BNVariable* var) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetVariableName(BNFunction* func, const BNVariable* var) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetVariableNameOrDefault(BNFunction* func, const BNVariable* var) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetLastSeenVariableNameOrDefault(BNFunction* func, const BNVariable* var) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNToVariableIdentifier(const BNVariable* var) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNVariable BNFromVariableIdentifier(uint64_t id) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDeadStoreElimination BNGetFunctionVariableDeadStoreElimination(
	BNFunction* func, const BNVariable* var) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetFunctionVariableDeadStoreElimination(
	BNFunction* func, const BNVariable* var, BNDeadStoreElimination mode) { __debugbreak(); }
BINARYNINJACOREAPI BNMergedVariable* BNGetMergedVariables(BNFunction* func, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeMergedVariableList(BNMergedVariable* vars, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI void BNMergeVariables(
	BNFunction* func, const BNVariable* target, const BNVariable* sources, size_t sourceCount) { __debugbreak(); }
BINARYNINJACOREAPI void BNUnmergeVariables(
	BNFunction* func, const BNVariable* target, const BNVariable* sources, size_t sourceCount) { __debugbreak(); }
BINARYNINJACOREAPI BNVariable* BNGetSplitVariables(BNFunction* func, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSplitVariable(BNFunction* func, const BNVariable* var) { __debugbreak(); }
BINARYNINJACOREAPI void BNUnsplitVariable(BNFunction* func, const BNVariable* var) { __debugbreak(); }

BINARYNINJACOREAPI BNReferenceSource* BNGetFunctionCallSites(BNFunction* func, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t* BNGetCallees(BNBinaryView* view, BNReferenceSource* callSite, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNReferenceSource* BNGetCallers(BNBinaryView* view, uint64_t callee, size_t* count) { __debugbreak(); return {}; }

BINARYNINJACOREAPI void BNSetAutoIndirectBranches(
	BNFunction* func, BNArchitecture* sourceArch, uint64_t source, BNArchitectureAndAddress* branches, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetUserIndirectBranches(
	BNFunction* func, BNArchitecture* sourceArch, uint64_t source, BNArchitectureAndAddress* branches, size_t count) { __debugbreak(); }

BINARYNINJACOREAPI BNIndirectBranchInfo* BNGetIndirectBranches(BNFunction* func, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNIndirectBranchInfo* BNGetIndirectBranchesAt(
	BNFunction* func, BNArchitecture* arch, uint64_t addr, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeIndirectBranchList(BNIndirectBranchInfo* branches) { __debugbreak(); }

BINARYNINJACOREAPI uint64_t* BNGetUnresolvedIndirectBranches(BNFunction* func, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNHasUnresolvedIndirectBranches(BNFunction* func) { __debugbreak(); return {}; }

BINARYNINJACOREAPI void BNSetAutoCallTypeAdjustment(
	BNFunction* func, BNArchitecture* arch, uint64_t addr, BNTypeWithConfidence* type) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetUserCallTypeAdjustment(
	BNFunction* func, BNArchitecture* arch, uint64_t addr, BNTypeWithConfidence* type) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetAutoCallStackAdjustment(
	BNFunction* func, BNArchitecture* arch, uint64_t addr, int64_t adjust, uint8_t confidence) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetUserCallStackAdjustment(
	BNFunction* func, BNArchitecture* arch, uint64_t addr, int64_t adjust, uint8_t confidence) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetAutoCallRegisterStackAdjustment(
	BNFunction* func, BNArchitecture* arch, uint64_t addr, BNRegisterStackAdjustment* adjust, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetUserCallRegisterStackAdjustment(
	BNFunction* func, BNArchitecture* arch, uint64_t addr, BNRegisterStackAdjustment* adjust, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetAutoCallRegisterStackAdjustmentForRegisterStack(
	BNFunction* func, BNArchitecture* arch, uint64_t addr, uint32_t regStack, int32_t adjust, uint8_t confidence) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetUserCallRegisterStackAdjustmentForRegisterStack(
	BNFunction* func, BNArchitecture* arch, uint64_t addr, uint32_t regStack, int32_t adjust, uint8_t confidence) { __debugbreak(); }

BINARYNINJACOREAPI BNTypeWithConfidence BNGetCallTypeAdjustment(BNFunction* func, BNArchitecture* arch, uint64_t addr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNOffsetWithConfidence BNGetCallStackAdjustment(
	BNFunction* func, BNArchitecture* arch, uint64_t addr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRegisterStackAdjustment* BNGetCallRegisterStackAdjustment(
	BNFunction* func, BNArchitecture* arch, uint64_t addr, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRegisterStackAdjustment BNGetCallRegisterStackAdjustmentForRegisterStack(
	BNFunction* func, BNArchitecture* arch, uint64_t addr, uint32_t regStack) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsCallInstruction(BNFunction* func, BNArchitecture* arch, uint64_t addr) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNInstructionTextLine* BNGetFunctionBlockAnnotations(
	BNFunction* func, BNArchitecture* arch, uint64_t addr, size_t* count) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNIntegerDisplayType BNGetIntegerConstantDisplayType(
	BNFunction* func, BNArchitecture* arch, uint64_t instrAddr, uint64_t value, size_t operand) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetIntegerConstantDisplayType(BNFunction* func, BNArchitecture* arch, uint64_t instrAddr,
	uint64_t value, size_t operand, BNIntegerDisplayType type, const char* typeID) { __debugbreak(); }
BINARYNINJACOREAPI char* BNGetIntegerConstantDisplayTypeEnumerationType(
	BNFunction* func, BNArchitecture* arch, uint64_t instrAddr, uint64_t value, size_t operand) { __debugbreak(); return {}; }

BINARYNINJACOREAPI bool BNIsFunctionTooLarge(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsFunctionAnalysisSkipped(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNAnalysisSkipReason BNGetAnalysisSkipReason(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNFunctionAnalysisSkipOverride BNGetFunctionAnalysisSkipOverride(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetFunctionAnalysisSkipOverride(BNFunction* func, BNFunctionAnalysisSkipOverride skip) { __debugbreak(); }

BINARYNINJACOREAPI char* BNGetGotoLabelName(BNFunction* func, uint64_t labelId) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetUserGotoLabelName(BNFunction* func, uint64_t labelId, const char* name) { __debugbreak(); }

BINARYNINJACOREAPI BNAnalysisParameters BNGetParametersForAnalysis(BNBinaryView* view) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetParametersForAnalysis(BNBinaryView* view, BNAnalysisParameters params) { __debugbreak(); }
BINARYNINJACOREAPI uint64_t BNGetMaxFunctionSizeForAnalysis(BNBinaryView* view) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetMaxFunctionSizeForAnalysis(BNBinaryView* view, uint64_t size) { __debugbreak(); }
BINARYNINJACOREAPI bool BNGetNewAutoFunctionAnalysisSuppressed(BNBinaryView* view) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetNewAutoFunctionAnalysisSuppressed(BNBinaryView* view, bool suppress) { __debugbreak(); }

BINARYNINJACOREAPI BNAnalysisCompletionEvent* BNAddAnalysisCompletionEvent(
	BNBinaryView* view, void* ctxt, void (*callback)(void* ctxt)) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNAnalysisCompletionEvent* BNNewAnalysisCompletionEventReference(BNAnalysisCompletionEvent* event) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeAnalysisCompletionEvent(BNAnalysisCompletionEvent* event) { __debugbreak(); }
BINARYNINJACOREAPI void BNCancelAnalysisCompletionEvent(BNAnalysisCompletionEvent* event) { __debugbreak(); }

BINARYNINJACOREAPI BNAnalysisInfo* BNGetAnalysisInfo(BNBinaryView* view) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeAnalysisInfo(BNAnalysisInfo* info) { __debugbreak(); }
BINARYNINJACOREAPI BNAnalysisProgress BNGetAnalysisProgress(BNBinaryView* view) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBackgroundTask* BNGetBackgroundAnalysisTask(BNBinaryView* view) { __debugbreak(); return {}; }

BINARYNINJACOREAPI uint64_t BNGetNextFunctionStartAfterAddress(BNBinaryView* view, uint64_t addr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNGetNextBasicBlockStartAfterAddress(BNBinaryView* view, uint64_t addr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNGetNextDataAfterAddress(BNBinaryView* view, uint64_t addr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNGetNextDataVariableStartAfterAddress(BNBinaryView* view, uint64_t addr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNGetPreviousFunctionStartBeforeAddress(BNBinaryView* view, uint64_t addr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNGetPreviousBasicBlockStartBeforeAddress(BNBinaryView* view, uint64_t addr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNGetPreviousBasicBlockEndBeforeAddress(BNBinaryView* view, uint64_t addr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNGetPreviousDataBeforeAddress(BNBinaryView* view, uint64_t addr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNGetPreviousDataVariableStartBeforeAddress(BNBinaryView* view, uint64_t addr) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNLinearViewObject* BNCreateLinearViewDisassembly(
	BNBinaryView* view, BNDisassemblySettings* settings) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNLinearViewObject* BNCreateLinearViewLiftedIL(BNBinaryView* view, BNDisassemblySettings* settings) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNLinearViewObject* BNCreateLinearViewLowLevelIL(
	BNBinaryView* view, BNDisassemblySettings* settings) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNLinearViewObject* BNCreateLinearViewLowLevelILSSAForm(
	BNBinaryView* view, BNDisassemblySettings* settings) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNLinearViewObject* BNCreateLinearViewMediumLevelIL(
	BNBinaryView* view, BNDisassemblySettings* settings) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNLinearViewObject* BNCreateLinearViewMediumLevelILSSAForm(
	BNBinaryView* view, BNDisassemblySettings* settings) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNLinearViewObject* BNCreateLinearViewMappedMediumLevelIL(
	BNBinaryView* view, BNDisassemblySettings* settings) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNLinearViewObject* BNCreateLinearViewMappedMediumLevelILSSAForm(
	BNBinaryView* view, BNDisassemblySettings* settings) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNLinearViewObject* BNCreateLinearViewHighLevelIL(
	BNBinaryView* view, BNDisassemblySettings* settings) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNLinearViewObject* BNCreateLinearViewHighLevelILSSAForm(
	BNBinaryView* view, BNDisassemblySettings* settings) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNLinearViewObject* BNCreateLinearViewLanguageRepresentation(
	BNBinaryView* view, BNDisassemblySettings* settings) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNLinearViewObject* BNCreateLinearViewDataOnly(BNBinaryView* view, BNDisassemblySettings* settings) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNLinearViewObject* BNCreateLinearViewSingleFunctionDisassembly(
	BNFunction* func, BNDisassemblySettings* settings) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNLinearViewObject* BNCreateLinearViewSingleFunctionLiftedIL(
	BNFunction* func, BNDisassemblySettings* settings) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNLinearViewObject* BNCreateLinearViewSingleFunctionLowLevelIL(
	BNFunction* func, BNDisassemblySettings* settings) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNLinearViewObject* BNCreateLinearViewSingleFunctionLowLevelILSSAForm(
	BNFunction* func, BNDisassemblySettings* settings) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNLinearViewObject* BNCreateLinearViewSingleFunctionMediumLevelIL(
	BNFunction* func, BNDisassemblySettings* settings) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNLinearViewObject* BNCreateLinearViewSingleFunctionMediumLevelILSSAForm(
	BNFunction* func, BNDisassemblySettings* settings) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNLinearViewObject* BNCreateLinearViewSingleFunctionMappedMediumLevelIL(
	BNFunction* func, BNDisassemblySettings* settings) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNLinearViewObject* BNCreateLinearViewSingleFunctionMappedMediumLevelILSSAForm(
	BNFunction* func, BNDisassemblySettings* settings) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNLinearViewObject* BNCreateLinearViewSingleFunctionHighLevelIL(
	BNFunction* func, BNDisassemblySettings* settings) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNLinearViewObject* BNCreateLinearViewSingleFunctionHighLevelILSSAForm(
	BNFunction* func, BNDisassemblySettings* settings) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNLinearViewObject* BNCreateLinearViewSingleFunctionLanguageRepresentation(
	BNFunction* func, BNDisassemblySettings* settings) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNLinearViewObject* BNNewLinearViewObjectReference(BNLinearViewObject* obj) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeLinearViewObject(BNLinearViewObject* obj) { __debugbreak(); }
BINARYNINJACOREAPI BNLinearViewObject* BNGetFirstLinearViewObjectChild(BNLinearViewObject* obj) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNLinearViewObject* BNGetLastLinearViewObjectChild(BNLinearViewObject* obj) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNLinearViewObject* BNGetPreviousLinearViewObjectChild(
	BNLinearViewObject* parent, BNLinearViewObject* child) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNLinearViewObject* BNGetNextLinearViewObjectChild(
	BNLinearViewObject* parent, BNLinearViewObject* child) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNLinearViewObject* BNGetLinearViewObjectChildForAddress(BNLinearViewObject* parent, uint64_t addr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNLinearViewObject* BNGetLinearViewObjectChildForIdentifier(
	BNLinearViewObject* parent, BNLinearViewObjectIdentifier* id) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNLinearDisassemblyLine* BNGetLinearViewObjectLines(
	BNLinearViewObject* obj, BNLinearViewObject* prev, BNLinearViewObject* next, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeLinearDisassemblyLines(BNLinearDisassemblyLine* lines, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI uint64_t BNGetLinearViewObjectStart(BNLinearViewObject* obj) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNGetLinearViewObjectEnd(BNLinearViewObject* obj) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNLinearViewObjectIdentifier BNGetLinearViewObjectIdentifier(BNLinearViewObject* obj) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeLinearViewObjectIdentifier(BNLinearViewObjectIdentifier* id) { __debugbreak(); }
BINARYNINJACOREAPI int BNCompareLinearViewObjectChildren(
	BNLinearViewObject* obj, BNLinearViewObject* a, BNLinearViewObject* b) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNGetLinearViewObjectOrderingIndexTotal(BNLinearViewObject* obj) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNGetLinearViewObjectOrderingIndexForChild(
	BNLinearViewObject* parent, BNLinearViewObject* child) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNLinearViewObject* BNGetLinearViewObjectChildForOrderingIndex(
	BNLinearViewObject* parent, uint64_t idx) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNLinearViewCursor* BNCreateLinearViewCursor(BNLinearViewObject* root) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNLinearViewCursor* BNDuplicateLinearViewCursor(BNLinearViewCursor* cursor) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNLinearViewCursor* BNNewLinearViewCursorReference(BNLinearViewCursor* cursor) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeLinearViewCursor(BNLinearViewCursor* cursor) { __debugbreak(); }
BINARYNINJACOREAPI bool BNIsLinearViewCursorBeforeBegin(BNLinearViewCursor* cursor) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsLinearViewCursorAfterEnd(BNLinearViewCursor* cursor) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNLinearViewObject* BNGetLinearViewCursorCurrentObject(BNLinearViewCursor* cursor) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNLinearViewObjectIdentifier* BNGetLinearViewCursorPath(BNLinearViewCursor* cursor, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeLinearViewCursorPath(BNLinearViewObjectIdentifier* objs, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI BNLinearViewObject** BNGetLinearViewCursorPathObjects(BNLinearViewCursor* cursor, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeLinearViewCursorPathObjects(BNLinearViewObject** objs, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI BNAddressRange BNGetLinearViewCursorOrderingIndex(BNLinearViewCursor* cursor) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNGetLinearViewCursorOrderingIndexTotal(BNLinearViewCursor* cursor) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSeekLinearViewCursorToBegin(BNLinearViewCursor* cursor) { __debugbreak(); }
BINARYNINJACOREAPI void BNSeekLinearViewCursorToEnd(BNLinearViewCursor* cursor) { __debugbreak(); }
BINARYNINJACOREAPI void BNSeekLinearViewCursorToAddress(BNLinearViewCursor* cursor, uint64_t addr) { __debugbreak(); }
BINARYNINJACOREAPI bool BNSeekLinearViewCursorToPath(
	BNLinearViewCursor* cursor, BNLinearViewObjectIdentifier* ids, size_t count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNSeekLinearViewCursorToPathAndAddress(
	BNLinearViewCursor* cursor, BNLinearViewObjectIdentifier* ids, size_t count, uint64_t addr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNSeekLinearViewCursorToCursorPath(BNLinearViewCursor* cursor, BNLinearViewCursor* path) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNSeekLinearViewCursorToCursorPathAndAddress(
	BNLinearViewCursor* cursor, BNLinearViewCursor* path, uint64_t addr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSeekLinearViewCursorToOrderingIndex(BNLinearViewCursor* cursor, uint64_t idx) { __debugbreak(); }
BINARYNINJACOREAPI bool BNLinearViewCursorNext(BNLinearViewCursor* cursor) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNLinearViewCursorPrevious(BNLinearViewCursor* cursor) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNLinearDisassemblyLine* BNGetLinearViewCursorLines(BNLinearViewCursor* cursor, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI int BNCompareLinearViewCursors(BNLinearViewCursor* a, BNLinearViewCursor* b) { __debugbreak(); return {}; }

BINARYNINJACOREAPI void BNDefineDataVariable(BNBinaryView* view, uint64_t addr, BNTypeWithConfidence* type) { __debugbreak(); }
BINARYNINJACOREAPI void BNDefineUserDataVariable(BNBinaryView* view, uint64_t addr, BNTypeWithConfidence* type) { __debugbreak(); }
BINARYNINJACOREAPI void BNUndefineDataVariable(BNBinaryView* view, uint64_t addr) { __debugbreak(); }
BINARYNINJACOREAPI void BNUndefineUserDataVariable(BNBinaryView* view, uint64_t addr) { __debugbreak(); }
BINARYNINJACOREAPI BNDataVariable* BNGetDataVariables(BNBinaryView* view, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeDataVariable(BNDataVariable* var) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeDataVariables(BNDataVariable* vars, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeDataVariableAndName(BNDataVariableAndName* var) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeDataVariablesAndName(BNDataVariableAndName* vars, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeDataVariableAndNameAndDebugParserList(
	BNDataVariableAndNameAndDebugParser* vars, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI bool BNGetDataVariableAtAddress(BNBinaryView* view, uint64_t addr, BNDataVariable* var) { __debugbreak(); return {}; }

BINARYNINJACOREAPI bool BNParseTypeString(BNBinaryView* view, const char* text, BNQualifiedNameAndType* result,
	char** errors, BNQualifiedNameList* typesAllowRedefinition, bool importDepencencies) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNParseTypesString(BNBinaryView* view, const char* text, const char* const* options,
	size_t optionCount, const char* const* includeDirs, size_t includeDirCount, BNTypeParserResult* result,
	char** errors, BNQualifiedNameList* typesAllowRedefinition, bool importDepencencies) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeQualifiedNameAndType(BNQualifiedNameAndType* obj) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeQualifiedNameAndTypeArray(BNQualifiedNameAndType* obj, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeQualifiedNameTypeAndId(BNQualifiedNameTypeAndId* obj) { __debugbreak(); }
BINARYNINJACOREAPI char* BNEscapeTypeName(const char* name, BNTokenEscapingType escaping) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNUnescapeTypeName(const char* name, BNTokenEscapingType escaping) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNQualifiedNameAndType* BNGetAnalysisTypeList(BNBinaryView* view, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNQualifiedNameAndType* BNGetAnalysisDependencySortedTypeList(BNBinaryView* view, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeTypeAndNameList(BNQualifiedNameAndType* types, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeTypeIdList(BNQualifiedNameTypeAndId* types, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI BNQualifiedName* BNGetAnalysisTypeNames(BNBinaryView* view, size_t* count, const char* matching) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeTypeNameList(BNQualifiedName* names, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI BNTypeContainer* BNGetAnalysisTypeContainer(BNBinaryView* view) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTypeContainer* BNGetAnalysisAutoTypeContainer(BNBinaryView* view) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTypeContainer* BNGetAnalysisUserTypeContainer(BNBinaryView* view) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNType* BNGetAnalysisTypeByName(BNBinaryView* view, BNQualifiedName* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNType* BNGetAnalysisTypeByRef(BNBinaryView* view, BNNamedTypeReference* ref) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNType* BNGetAnalysisTypeById(BNBinaryView* view, const char* id) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetAnalysisTypeId(BNBinaryView* view, BNQualifiedName* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNQualifiedName BNGetAnalysisTypeNameById(BNBinaryView* view, const char* id) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsAnalysisTypeAutoDefined(BNBinaryView* view, BNQualifiedName* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNQualifiedName BNDefineAnalysisType(
	BNBinaryView* view, const char* id, BNQualifiedName* defaultName, BNType* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNDefineUserAnalysisType(BNBinaryView* view, BNQualifiedName* name, BNType* type) { __debugbreak(); }
BINARYNINJACOREAPI size_t BNDefineAnalysisTypes(BNBinaryView* view, BNQualifiedNameTypeAndId* types, size_t count,
	BNProgressFunction progress, void* progressContext, char*** resultIds, BNQualifiedName** resultNames) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNDefineUserAnalysisTypes(BNBinaryView* view, BNQualifiedNameAndType* types, size_t count,
	BNProgressFunction progress, void* progressContext) { __debugbreak(); }
BINARYNINJACOREAPI void BNUndefineAnalysisType(BNBinaryView* view, const char* id) { __debugbreak(); }
BINARYNINJACOREAPI void BNUndefineUserAnalysisType(BNBinaryView* view, BNQualifiedName* name) { __debugbreak(); }
BINARYNINJACOREAPI void BNRenameAnalysisType(BNBinaryView* view, BNQualifiedName* oldName, BNQualifiedName* newName) { __debugbreak(); }
BINARYNINJACOREAPI char* BNGenerateAutoTypeId(const char* source, BNQualifiedName* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGenerateAutoPlatformTypeId(BNPlatform* platform, BNQualifiedName* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGenerateAutoDemangledTypeId(BNQualifiedName* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetAutoPlatformTypeIdSource(BNPlatform* platform) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetAutoDemangledTypeIdSource(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGenerateAutoDebugTypeId(BNQualifiedName* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetAutoDebugTypeIdSource(void) { __debugbreak(); return {}; }

BINARYNINJACOREAPI void BNRegisterPlatformTypes(BNBinaryView* view, BNPlatform* platform) { __debugbreak(); }
BINARYNINJACOREAPI bool BNLookupImportedTypePlatform(
	BNBinaryView* view, const BNQualifiedName* typeName, BNPlatform** platform, BNQualifiedName* resultName) { __debugbreak(); return {}; }

BINARYNINJACOREAPI void BNReanalyzeAllFunctions(BNBinaryView* view) { __debugbreak(); }
BINARYNINJACOREAPI void BNReanalyzeFunction(BNFunction* func, BNFunctionUpdateType type) { __debugbreak(); }
BINARYNINJACOREAPI void BNMarkUpdatesRequired(BNFunction* func, BNFunctionUpdateType type) { __debugbreak(); }
BINARYNINJACOREAPI void BNMarkCallerUpdatesRequired(BNFunction* func, BNFunctionUpdateType type) { __debugbreak(); }

BINARYNINJACOREAPI BNWorkflow* BNGetWorkflowForBinaryView(BNBinaryView* view) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNWorkflow* BNGetWorkflowForFunction(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNPostWorkflowRequestForFunction(BNFunction* func, const char* request) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetProvenanceString(BNFunction* func) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNHighlightColor BNGetInstructionHighlight(BNFunction* func, BNArchitecture* arch, uint64_t addr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetAutoInstructionHighlight(
	BNFunction* func, BNArchitecture* arch, uint64_t addr, BNHighlightColor color) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetUserInstructionHighlight(
	BNFunction* func, BNArchitecture* arch, uint64_t addr, BNHighlightColor color) { __debugbreak(); }
BINARYNINJACOREAPI BNHighlightColor BNGetBasicBlockHighlight(BNBasicBlock* block) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetAutoBasicBlockHighlight(BNBasicBlock* block, BNHighlightColor color) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetUserBasicBlockHighlight(BNBasicBlock* block, BNHighlightColor color) { __debugbreak(); }

BINARYNINJACOREAPI void BNFreeTypeContainer(BNTypeContainer* container) { __debugbreak(); }
BINARYNINJACOREAPI BNTypeContainer* BNDuplicateTypeContainer(BNTypeContainer* container) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNTypeContainerGetId(BNTypeContainer* container) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNTypeContainerGetName(BNTypeContainer* container) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTypeContainerType BNTypeContainerGetType(BNTypeContainer* container) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNTypeContainerIsMutable(BNTypeContainer* container) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNPlatform* BNTypeContainerGetPlatform(BNTypeContainer* container) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNTypeContainerAddTypes(BNTypeContainer* container, const BNQualifiedName* typeNames,
	BNType** types, size_t typeCount, bool (*progress)(void*, size_t, size_t), void* progressContext,
	BNQualifiedName** resultNames, char*** resultIds, size_t* resultCount) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNTypeContainerRenameType(
	BNTypeContainer* container, const char* typeId, const BNQualifiedName* newName) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNTypeContainerDeleteType(BNTypeContainer* container, const char* typeId) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNTypeContainerGetTypeId(
	BNTypeContainer* container, const BNQualifiedName* typeName, char** result) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNTypeContainerGetTypeName(
	BNTypeContainer* container, const char* typeId, BNQualifiedName* result) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNTypeContainerGetTypeById(BNTypeContainer* container, const char* typeId, BNType** result) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNTypeContainerGetTypes(
	BNTypeContainer* container, char*** typeIds, BNQualifiedName** typeNames, BNType*** types, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNTypeContainerGetTypeByName(
	BNTypeContainer* container, const BNQualifiedName* typeName, BNType** result) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNTypeContainerGetTypeIds(BNTypeContainer* container, char*** typeIds, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNTypeContainerGetTypeNames(
	BNTypeContainer* container, BNQualifiedName** typeNames, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNTypeContainerGetTypeNamesAndIds(
	BNTypeContainer* container, char*** typeIds, BNQualifiedName** typeNames, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNTypeContainerParseTypeString(BNTypeContainer* container, const char* source,
	bool importDepencencies, BNQualifiedNameAndType* result, BNTypeParserError** errors, size_t* errorCount) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNTypeContainerParseTypesFromSource(BNTypeContainer* container, const char* source,
	const char* fileName, const char* const* options, size_t optionCount, const char* const* includeDirs,
	size_t includeDirCount, const char* autoTypeSource, bool importDepencencies, BNTypeParserResult* result,
	BNTypeParserError** errors, size_t* errorCount) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNTagType* BNCreateTagType(BNBinaryView* view) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTagType* BNNewTagTypeReference(BNTagType* tagType) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeTagType(BNTagType* tagType) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeTagTypeList(BNTagType** tagTypes, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI BNBinaryView* BNTagTypeGetView(BNTagType* tagType) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNTagTypeGetId(BNTagType* tagType) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNTagTypeGetName(BNTagType* tagType) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNTagTypeSetName(BNTagType* tagType, const char* name) { __debugbreak(); }
BINARYNINJACOREAPI char* BNTagTypeGetIcon(BNTagType* tagType) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNTagTypeSetIcon(BNTagType* tagType, const char* icon) { __debugbreak(); }
BINARYNINJACOREAPI bool BNTagTypeGetVisible(BNTagType* tagType) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNTagTypeSetVisible(BNTagType* tagType, bool visible) { __debugbreak(); }
BINARYNINJACOREAPI BNTagTypeType BNTagTypeGetType(BNTagType* tagType) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNTagTypeSetType(BNTagType* tagType, BNTagTypeType type) { __debugbreak(); }

BINARYNINJACOREAPI BNTag* BNCreateTag(BNTagType* type, const char* data) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTag* BNNewTagReference(BNTag* tag) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeTag(BNTag* tag) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeTagList(BNTag** tags, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI char* BNTagGetId(BNTag* tag) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTagType* BNTagGetType(BNTag* tag) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNTagGetData(BNTag* tag) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNTagSetData(BNTag* tag, const char* data) { __debugbreak(); }

BINARYNINJACOREAPI void BNAddTagType(BNBinaryView* view, BNTagType* tagType) { __debugbreak(); }
BINARYNINJACOREAPI void BNRemoveTagType(BNBinaryView* view, BNTagType* tagType) { __debugbreak(); }
BINARYNINJACOREAPI BNTagType* BNGetTagType(BNBinaryView* view, const char* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTagType* BNGetTagTypeWithType(BNBinaryView* view, const char* name, BNTagTypeType type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTagType* BNGetTagTypeById(BNBinaryView* view, const char* id) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTagType* BNGetTagTypeByIdWithType(BNBinaryView* view, const char* id, BNTagTypeType type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTagType** BNGetTagTypes(BNBinaryView* view, size_t* count) { __debugbreak(); return {}; }

BINARYNINJACOREAPI void BNAddTag(BNBinaryView* view, BNTag* tag, bool user) { __debugbreak(); }
BINARYNINJACOREAPI BNTag* BNGetTag(BNBinaryView* view, const char* tagId) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNRemoveTag(BNBinaryView* view, BNTag* tag, bool user) { __debugbreak(); }

BINARYNINJACOREAPI BNTagReference* BNGetAllTagReferences(BNBinaryView* view, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTagReference* BNGetAllAddressTagReferences(BNBinaryView* view, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTagReference* BNGetAllFunctionTagReferences(BNBinaryView* view, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTagReference* BNGetAllTagReferencesOfType(BNBinaryView* view, BNTagType* tagType, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTagReference* BNGetTagReferencesOfType(BNBinaryView* view, BNTagType* tagType, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTagReference* BNGetDataTagReferences(BNBinaryView* view, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTagReference* BNGetAutoDataTagReferences(BNBinaryView* view, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTagReference* BNGetUserDataTagReferences(BNBinaryView* view, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNRemoveTagReference(BNBinaryView* view, BNTagReference ref) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeTagReferences(BNTagReference* refs, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI BNTag** BNGetDataTags(BNBinaryView* view, uint64_t addr, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTag** BNGetAutoDataTags(BNBinaryView* view, uint64_t addr, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTag** BNGetUserDataTags(BNBinaryView* view, uint64_t addr, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTag** BNGetDataTagsOfType(BNBinaryView* view, uint64_t addr, BNTagType* tagType, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTag** BNGetAutoDataTagsOfType(
	BNBinaryView* view, uint64_t addr, BNTagType* tagType, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTag** BNGetUserDataTagsOfType(
	BNBinaryView* view, uint64_t addr, BNTagType* tagType, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTagReference* BNGetDataTagsInRange(
	BNBinaryView* view, uint64_t start, uint64_t end, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTagReference* BNGetAutoDataTagsInRange(
	BNBinaryView* view, uint64_t start, uint64_t end, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTagReference* BNGetUserDataTagsInRange(
	BNBinaryView* view, uint64_t start, uint64_t end, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNAddAutoDataTag(BNBinaryView* view, uint64_t addr, BNTag* tag) { __debugbreak(); }
BINARYNINJACOREAPI void BNRemoveAutoDataTag(BNBinaryView* view, uint64_t addr, BNTag* tag) { __debugbreak(); }
BINARYNINJACOREAPI void BNRemoveAutoDataTagsOfType(BNBinaryView* view, uint64_t addr, BNTagType* tagType) { __debugbreak(); }
BINARYNINJACOREAPI void BNAddUserDataTag(BNBinaryView* view, uint64_t addr, BNTag* tag) { __debugbreak(); }
BINARYNINJACOREAPI void BNRemoveUserDataTag(BNBinaryView* view, uint64_t addr, BNTag* tag) { __debugbreak(); }
BINARYNINJACOREAPI void BNRemoveUserDataTagsOfType(BNBinaryView* view, uint64_t addr, BNTagType* tagType) { __debugbreak(); }

BINARYNINJACOREAPI size_t BNGetTagReferencesOfTypeCount(BNBinaryView* view, BNTagType* tagType) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetAllTagReferencesOfTypeCount(BNBinaryView* view, BNTagType* tagType) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNGetAllTagReferenceTypeCounts(
	BNBinaryView* view, BNTagType*** tagTypes, size_t** counts, size_t* count) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeTagReferenceTypeCounts(BNTagType** tagTypes, size_t* counts) { __debugbreak(); }

BINARYNINJACOREAPI BNTagReference* BNGetFunctionAllTagReferences(BNFunction* func, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTagReference* BNGetFunctionTagReferencesOfType(
	BNFunction* func, BNTagType* tagType, size_t* count) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNTagReference* BNGetAddressTagReferences(BNFunction* func, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTagReference* BNGetAutoAddressTagReferences(BNFunction* func, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTagReference* BNGetUserAddressTagReferences(BNFunction* func, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTag** BNGetAddressTags(BNFunction* func, BNArchitecture* arch, uint64_t addr, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTag** BNGetAutoAddressTags(BNFunction* func, BNArchitecture* arch, uint64_t addr, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTag** BNGetUserAddressTags(BNFunction* func, BNArchitecture* arch, uint64_t addr, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTag** BNGetAddressTagsOfType(
	BNFunction* func, BNArchitecture* arch, uint64_t addr, BNTagType* tagType, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTag** BNGetAutoAddressTagsOfType(
	BNFunction* func, BNArchitecture* arch, uint64_t addr, BNTagType* tagType, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTag** BNGetUserAddressTagsOfType(
	BNFunction* func, BNArchitecture* arch, uint64_t addr, BNTagType* tagType, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTagReference* BNGetAddressTagsInRange(
	BNFunction* func, BNArchitecture* arch, uint64_t start, uint64_t end, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTagReference* BNGetAutoAddressTagsInRange(
	BNFunction* func, BNArchitecture* arch, uint64_t start, uint64_t end, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTagReference* BNGetUserAddressTagsInRange(
	BNFunction* func, BNArchitecture* arch, uint64_t start, uint64_t end, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNAddAutoAddressTag(BNFunction* func, BNArchitecture* arch, uint64_t addr, BNTag* tag) { __debugbreak(); }
BINARYNINJACOREAPI void BNRemoveAutoAddressTag(BNFunction* func, BNArchitecture* arch, uint64_t addr, BNTag* tag) { __debugbreak(); }
BINARYNINJACOREAPI void BNRemoveAutoAddressTagsOfType(
	BNFunction* func, BNArchitecture* arch, uint64_t addr, BNTagType* tagType) { __debugbreak(); }
BINARYNINJACOREAPI void BNAddUserAddressTag(BNFunction* func, BNArchitecture* arch, uint64_t addr, BNTag* tag) { __debugbreak(); }
BINARYNINJACOREAPI void BNRemoveUserAddressTag(BNFunction* func, BNArchitecture* arch, uint64_t addr, BNTag* tag) { __debugbreak(); }
BINARYNINJACOREAPI void BNRemoveUserAddressTagsOfType(
	BNFunction* func, BNArchitecture* arch, uint64_t addr, BNTagType* tagType) { __debugbreak(); }

BINARYNINJACOREAPI BNTagReference* BNGetFunctionTagReferences(BNFunction* func, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTagReference* BNGetAutoFunctionTagReferences(BNFunction* func, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTagReference* BNGetUserFunctionTagReferences(BNFunction* func, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTag** BNGetFunctionTags(BNFunction* func, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTag** BNGetAutoFunctionTags(BNFunction* func, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTag** BNGetUserFunctionTags(BNFunction* func, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTag** BNGetFunctionTagsOfType(BNFunction* func, BNTagType* tagType, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTag** BNGetAutoFunctionTagsOfType(BNFunction* func, BNTagType* tagType, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTag** BNGetUserFunctionTagsOfType(BNFunction* func, BNTagType* tagType, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNAddAutoFunctionTag(BNFunction* func, BNTag* tag) { __debugbreak(); }
BINARYNINJACOREAPI void BNRemoveAutoFunctionTag(BNFunction* func, BNTag* tag) { __debugbreak(); }
BINARYNINJACOREAPI void BNRemoveAutoFunctionTagsOfType(BNFunction* func, BNTagType* tagType) { __debugbreak(); }
BINARYNINJACOREAPI void BNAddUserFunctionTag(BNFunction* func, BNTag* tag) { __debugbreak(); }
BINARYNINJACOREAPI void BNRemoveUserFunctionTag(BNFunction* func, BNTag* tag) { __debugbreak(); }
BINARYNINJACOREAPI void BNRemoveUserFunctionTagsOfType(BNFunction* func, BNTagType* tagType) { __debugbreak(); }

BINARYNINJACOREAPI BNPerformanceInfo* BNGetFunctionAnalysisPerformanceInfo(BNFunction* func, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeAnalysisPerformanceInfo(BNPerformanceInfo* info, size_t count) { __debugbreak(); }

BINARYNINJACOREAPI BNFlowGraph* BNGetUnresolvedStackAdjustmentGraph(BNFunction* func) { __debugbreak(); return {}; }

BINARYNINJACOREAPI void BNSetUserVariableValue(
	BNFunction* func, const BNVariable* var, const BNArchitectureAndAddress* defSite, const BNPossibleValueSet* value) { __debugbreak(); }
BINARYNINJACOREAPI void BNClearUserVariableValue(
	BNFunction* func, const BNVariable* var, const BNArchitectureAndAddress* defSite) { __debugbreak(); }
BINARYNINJACOREAPI BNUserVariableValue* BNGetAllUserVariableValues(BNFunction* func, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeUserVariableValues(BNUserVariableValue* result) { __debugbreak(); }
BINARYNINJACOREAPI bool BNParsePossibleValueSet(BNBinaryView* view, const char* valueText, BNRegisterValueType state,
	BNPossibleValueSet* result, uint64_t here, char** errors) { __debugbreak(); return {}; }

BINARYNINJACOREAPI void BNRequestFunctionDebugReport(BNFunction* func, const char* name) { __debugbreak(); }

BINARYNINJACOREAPI BNILReferenceSource* BNGetMediumLevelILVariableReferences(
	BNFunction* func, BNVariable* var, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNVariableReferenceSource* BNGetMediumLevelILVariableReferencesFrom(
	BNFunction* func, BNArchitecture* arch, uint64_t address, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNVariableReferenceSource* BNGetMediumLevelILVariableReferencesInRange(
	BNFunction* func, BNArchitecture* arch, uint64_t address, uint64_t len, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNILReferenceSource* BNGetMediumLevelILVariableReferencesIfAvailable(
	BNFunction* func, BNVariable* var, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNVariableReferenceSource* BNGetMediumLevelILVariableReferencesFromIfAvailable(
	BNFunction* func, BNArchitecture* arch, uint64_t address, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNVariableReferenceSource* BNGetMediumLevelILVariableReferencesInRangeIfAvailable(
	BNFunction* func, BNArchitecture* arch, uint64_t address, uint64_t len, size_t* count) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNILReferenceSource* BNGetHighLevelILVariableReferences(
	BNFunction* func, BNVariable* var, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNVariableReferenceSource* BNGetHighLevelILVariableReferencesFrom(
	BNFunction* func, BNArchitecture* arch, uint64_t address, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNVariableReferenceSource* BNGetHighLevelILVariableReferencesInRange(
	BNFunction* func, BNArchitecture* arch, uint64_t address, uint64_t len, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNILReferenceSource* BNGetHighLevelILVariableReferencesIfAvailable(
	BNFunction* func, BNVariable* var, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNVariableReferenceSource* BNGetHighLevelILVariableReferencesFromIfAvailable(
	BNFunction* func, BNArchitecture* arch, uint64_t address, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNVariableReferenceSource* BNGetHighLevelILVariableReferencesInRangeIfAvailable(
	BNFunction* func, BNArchitecture* arch, uint64_t address, uint64_t len, size_t* count) { __debugbreak(); return {}; }

BINARYNINJACOREAPI void BNFreeVariableList(BNVariable* vars) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeVariableReferenceSourceList(BNVariableReferenceSource* vars, size_t count) { __debugbreak(); }

// Analysis Context
BINARYNINJACOREAPI BNAnalysisContext* BNCreateAnalysisContext(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNAnalysisContext* BNNewAnalysisContextReference(BNAnalysisContext* analysisContext) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeAnalysisContext(BNAnalysisContext* analysisContext) { __debugbreak(); }
BINARYNINJACOREAPI BNFunction* BNAnalysisContextGetFunction(BNAnalysisContext* analysisContext) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNLowLevelILFunction* BNAnalysisContextGetLowLevelILFunction(BNAnalysisContext* analysisContext) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNMediumLevelILFunction* BNAnalysisContextGetMediumLevelILFunction(
	BNAnalysisContext* analysisContext) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNHighLevelILFunction* BNAnalysisContextGetHighLevelILFunction(BNAnalysisContext* analysisContext) { __debugbreak(); return {}; }

BINARYNINJACOREAPI void BNSetBasicBlockList(
	BNAnalysisContext* analysisContext, BNBasicBlock** basicBlocks, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetLiftedILFunction(BNAnalysisContext* analysisContext, BNLowLevelILFunction* liftedIL) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetLowLevelILFunction(BNAnalysisContext* analysisContext, BNLowLevelILFunction* lowLevelIL) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetMediumLevelILFunction(
	BNAnalysisContext* analysisContext, BNMediumLevelILFunction* mediumLevelIL) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetHighLevelILFunction(
	BNAnalysisContext* analysisContext, BNHighLevelILFunction* highLevelIL) { __debugbreak(); }
BINARYNINJACOREAPI bool BNAnalysisContextInform(BNAnalysisContext* analysisContext, const char* request) { __debugbreak(); return {}; }

// Activity
BINARYNINJACOREAPI BNActivity* BNCreateActivity(
	const char* configuration, void* ctxt, void (*action)(void*, BNAnalysisContext*)) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNActivity* BNNewActivityReference(BNActivity* activity) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeActivity(BNActivity* activity) { __debugbreak(); }

BINARYNINJACOREAPI char* BNActivityGetName(BNActivity* activity) { __debugbreak(); return {}; }

// Workflow
BINARYNINJACOREAPI BNWorkflow* BNCreateWorkflow(const char* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNWorkflow* BNNewWorkflowReference(BNWorkflow* workflow) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeWorkflow(BNWorkflow* workflow) { __debugbreak(); }

BINARYNINJACOREAPI BNWorkflow** BNGetWorkflowList(size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeWorkflowList(BNWorkflow** workflows, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI BNWorkflow* BNWorkflowInstance(const char* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRegisterWorkflow(BNWorkflow* workflow, const char* configuration) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNWorkflow* BNWorkflowClone(BNWorkflow* workflow, const char* name, const char* activity) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNActivity* BNWorkflowRegisterActivity(
	BNWorkflow* workflow, BNActivity* activity, const char** subactivities, size_t size) { __debugbreak(); return {}; }

BINARYNINJACOREAPI bool BNWorkflowContains(BNWorkflow* workflow, const char* activity) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNWorkflowGetConfiguration(BNWorkflow* workflow, const char* activity) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetWorkflowName(BNWorkflow* workflow) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNWorkflowIsRegistered(BNWorkflow* workflow) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNWorkflowSize(BNWorkflow* workflow) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNActivity* BNWorkflowGetActivity(BNWorkflow* workflow, const char* activity) { __debugbreak(); return {}; }
BINARYNINJACOREAPI const char** BNWorkflowGetActivityRoots(
	BNWorkflow* workflow, const char* activity, size_t* inoutSize) { __debugbreak(); return {}; }
BINARYNINJACOREAPI const char** BNWorkflowGetSubactivities(
	BNWorkflow* workflow, const char* activity, bool immediate, size_t* inoutSize) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNWorkflowAssignSubactivities(
	BNWorkflow* workflow, const char* activity, const char** activities, size_t size) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNWorkflowClear(BNWorkflow* workflow) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNWorkflowInsert(
	BNWorkflow* workflow, const char* activity, const char** activities, size_t size) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNWorkflowRemove(BNWorkflow* workflow, const char* activity) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNWorkflowReplace(BNWorkflow* workflow, const char* activity, const char* newActivity) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNFlowGraph* BNWorkflowGetGraph(BNWorkflow* workflow, const char* activity, bool sequential) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNWorkflowShowReport(BNWorkflow* workflow, const char* name) { __debugbreak(); }

// Disassembly settings
BINARYNINJACOREAPI BNDisassemblySettings* BNCreateDisassemblySettings(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDisassemblySettings* BNNewDisassemblySettingsReference(BNDisassemblySettings* settings) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDisassemblySettings* BNDuplicateDisassemblySettings(BNDisassemblySettings* settings) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeDisassemblySettings(BNDisassemblySettings* settings) { __debugbreak(); }

BINARYNINJACOREAPI bool BNIsDisassemblySettingsOptionSet(BNDisassemblySettings* settings, BNDisassemblyOption option) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetDisassemblySettingsOption(
	BNDisassemblySettings* settings, BNDisassemblyOption option, bool state) { __debugbreak(); }

BINARYNINJACOREAPI size_t BNGetDisassemblyWidth(BNDisassemblySettings* settings) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetDisassemblyWidth(BNDisassemblySettings* settings, size_t width) { __debugbreak(); }
BINARYNINJACOREAPI size_t BNGetDisassemblyMaximumSymbolWidth(BNDisassemblySettings* settings) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetDisassemblyMaximumSymbolWidth(BNDisassemblySettings* settings, size_t width) { __debugbreak(); }
BINARYNINJACOREAPI size_t BNGetDisassemblyGutterWidth(BNDisassemblySettings* settings) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetDisassemblyGutterWidth(BNDisassemblySettings* settings, size_t width) { __debugbreak(); }
BINARYNINJACOREAPI BNDisassemblyAddressMode BNGetDisassemblyAddressMode(BNDisassemblySettings* settings) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetDisassemblyAddressMode(BNDisassemblySettings* settings, BNDisassemblyAddressMode mode) { __debugbreak(); }
BINARYNINJACOREAPI uint64_t BNGetDisassemblyAddressBaseOffset(BNDisassemblySettings* settings) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetDisassemblyAddressBaseOffset(BNDisassemblySettings* settings, uint64_t addressBaseOffset) { __debugbreak(); }
BINARYNINJACOREAPI BNDisassemblyCallParameterHints BNGetDisassemblyCallParameterHints(BNDisassemblySettings* settings) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetDisassemblyCallParameterHints(
	BNDisassemblySettings* settings, BNDisassemblyCallParameterHints hints) { __debugbreak(); }

// Flow graphs
BINARYNINJACOREAPI BNFlowGraph* BNCreateFlowGraph(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNFlowGraph* BNCreateFunctionGraph(
	BNFunction* func, BNFunctionGraphType type, BNDisassemblySettings* settings) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNFlowGraph* BNCreateLowLevelILFunctionGraph(
	BNLowLevelILFunction* func, BNDisassemblySettings* settings) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNFlowGraph* BNCreateMediumLevelILFunctionGraph(
	BNMediumLevelILFunction* func, BNDisassemblySettings* settings) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNFlowGraph* BNCreateHighLevelILFunctionGraph(
	BNHighLevelILFunction* func, BNDisassemblySettings* settings) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNFlowGraph* BNCreateCustomFlowGraph(BNCustomFlowGraph* callbacks) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNFlowGraph* BNNewFlowGraphReference(BNFlowGraph* graph) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeFlowGraph(BNFlowGraph* graph) { __debugbreak(); }
BINARYNINJACOREAPI BNFunction* BNGetFunctionForFlowGraph(BNFlowGraph* graph) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetFunctionForFlowGraph(BNFlowGraph* graph, BNFunction* func) { __debugbreak(); }
BINARYNINJACOREAPI BNBinaryView* BNGetViewForFlowGraph(BNFlowGraph* graph) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetViewForFlowGraph(BNFlowGraph* graph, BNBinaryView* view) { __debugbreak(); }

BINARYNINJACOREAPI int BNGetHorizontalFlowGraphNodeMargin(BNFlowGraph* graph) { __debugbreak(); return {}; }
BINARYNINJACOREAPI int BNGetVerticalFlowGraphNodeMargin(BNFlowGraph* graph) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetFlowGraphNodeMargins(BNFlowGraph* graph, int horiz, int vert) { __debugbreak(); }

BINARYNINJACOREAPI BNFlowGraphLayoutRequest* BNStartFlowGraphLayout(
	BNFlowGraph* graph, void* ctxt, void (*func)(void* ctxt)) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsFlowGraphLayoutComplete(BNFlowGraph* graph) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNFlowGraphLayoutRequest* BNNewFlowGraphLayoutRequestReference(BNFlowGraphLayoutRequest* layout) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeFlowGraphLayoutRequest(BNFlowGraphLayoutRequest* layout) { __debugbreak(); }
BINARYNINJACOREAPI bool BNIsFlowGraphLayoutRequestComplete(BNFlowGraphLayoutRequest* layout) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNFlowGraph* BNGetGraphForFlowGraphLayoutRequest(BNFlowGraphLayoutRequest* layout) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNAbortFlowGraphLayoutRequest(BNFlowGraphLayoutRequest* graph) { __debugbreak(); }
BINARYNINJACOREAPI bool BNIsILFlowGraph(BNFlowGraph* graph) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsLowLevelILFlowGraph(BNFlowGraph* graph) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsMediumLevelILFlowGraph(BNFlowGraph* graph) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsHighLevelILFlowGraph(BNFlowGraph* graph) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNLowLevelILFunction* BNGetFlowGraphLowLevelILFunction(BNFlowGraph* graph) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNMediumLevelILFunction* BNGetFlowGraphMediumLevelILFunction(BNFlowGraph* graph) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNHighLevelILFunction* BNGetFlowGraphHighLevelILFunction(BNFlowGraph* graph) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetFlowGraphLowLevelILFunction(BNFlowGraph* graph, BNLowLevelILFunction* func) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetFlowGraphMediumLevelILFunction(BNFlowGraph* graph, BNMediumLevelILFunction* func) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetFlowGraphHighLevelILFunction(BNFlowGraph* graph, BNHighLevelILFunction* func) { __debugbreak(); }

BINARYNINJACOREAPI BNFlowGraphNode** BNGetFlowGraphNodes(BNFlowGraph* graph, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNFlowGraphNode* BNGetFlowGraphNode(BNFlowGraph* graph, size_t i) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNFlowGraphNode** BNGetFlowGraphNodesInRegion(
	BNFlowGraph* graph, int left, int top, int right, int bottom, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeFlowGraphNodeList(BNFlowGraphNode** nodes, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI bool BNFlowGraphHasNodes(BNFlowGraph* graph) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNAddFlowGraphNode(BNFlowGraph* graph, BNFlowGraphNode* node) { __debugbreak(); return {}; }

BINARYNINJACOREAPI int BNGetFlowGraphWidth(BNFlowGraph* graph) { __debugbreak(); return {}; }
BINARYNINJACOREAPI int BNGetFlowGraphHeight(BNFlowGraph* graph) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNFlowGraphNode* BNCreateFlowGraphNode(BNFlowGraph* graph) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNFlowGraphNode* BNNewFlowGraphNodeReference(BNFlowGraphNode* node) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeFlowGraphNode(BNFlowGraphNode* node) { __debugbreak(); }
BINARYNINJACOREAPI BNFlowGraph* BNGetFlowGraphNodeOwner(BNFlowGraphNode* node) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNBasicBlock* BNGetFlowGraphBasicBlock(BNFlowGraphNode* node) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetFlowGraphBasicBlock(BNFlowGraphNode* node, BNBasicBlock* block) { __debugbreak(); }
BINARYNINJACOREAPI int BNGetFlowGraphNodeX(BNFlowGraphNode* node) { __debugbreak(); return {}; }
BINARYNINJACOREAPI int BNGetFlowGraphNodeY(BNFlowGraphNode* node) { __debugbreak(); return {}; }
BINARYNINJACOREAPI int BNGetFlowGraphNodeWidth(BNFlowGraphNode* node) { __debugbreak(); return {}; }
BINARYNINJACOREAPI int BNGetFlowGraphNodeHeight(BNFlowGraphNode* node) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNDisassemblyTextLine* BNGetFlowGraphNodeLines(BNFlowGraphNode* node, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetFlowGraphNodeLines(BNFlowGraphNode* node, BNDisassemblyTextLine* lines, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI BNFlowGraphEdge* BNGetFlowGraphNodeOutgoingEdges(BNFlowGraphNode* node, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNFlowGraphEdge* BNGetFlowGraphNodeIncomingEdges(BNFlowGraphNode* node, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeFlowGraphNodeEdgeList(BNFlowGraphEdge* edges, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI void BNAddFlowGraphNodeOutgoingEdge(
	BNFlowGraphNode* node, BNBranchType type, BNFlowGraphNode* target, BNEdgeStyle edgeStyle) { __debugbreak(); }

BINARYNINJACOREAPI BNHighlightColor BNGetFlowGraphNodeHighlight(BNFlowGraphNode* node) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetFlowGraphNodeHighlight(BNFlowGraphNode* node, BNHighlightColor color) { __debugbreak(); }

BINARYNINJACOREAPI void BNFinishPrepareForLayout(BNFlowGraph* graph) { __debugbreak(); }

BINARYNINJACOREAPI bool BNFlowGraphUpdateQueryMode(BNFlowGraph* graph) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNFlowGraphHasUpdates(BNFlowGraph* graph) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNFlowGraph* BNUpdateFlowGraph(BNFlowGraph* graph) { __debugbreak(); return {}; }

BINARYNINJACOREAPI void BNSetFlowGraphOption(BNFlowGraph* graph, BNFlowGraphOption option, bool value) { __debugbreak(); }
BINARYNINJACOREAPI bool BNIsFlowGraphOptionSet(BNFlowGraph* graph, BNFlowGraphOption option) { __debugbreak(); return {}; }

BINARYNINJACOREAPI bool BNIsNodeValidForFlowGraph(BNFlowGraph* graph, BNFlowGraphNode* node) { __debugbreak(); return {}; }

// Symbols
BINARYNINJACOREAPI BNSymbol* BNCreateSymbol(BNSymbolType type, const char* shortName, const char* fullName,
	const char* rawName, uint64_t addr, BNSymbolBinding binding, const BNNameSpace* nameSpace, uint64_t ordinal) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNSymbol* BNNewSymbolReference(BNSymbol* sym) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeSymbol(BNSymbol* sym) { __debugbreak(); }
BINARYNINJACOREAPI BNSymbolType BNGetSymbolType(BNSymbol* sym) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNSymbolBinding BNGetSymbolBinding(BNSymbol* sym) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNNameSpace BNGetSymbolNameSpace(BNSymbol* sym) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetSymbolShortName(BNSymbol* sym) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetSymbolFullName(BNSymbol* sym) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetSymbolRawName(BNSymbol* sym) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void* BNGetSymbolRawBytes(BNSymbol* sym, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeSymbolRawBytes(void* bytes) { __debugbreak(); }

BINARYNINJACOREAPI uint64_t BNGetSymbolAddress(BNSymbol* sym) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNGetSymbolOrdinal(BNSymbol* sym) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsSymbolAutoDefined(BNSymbol* sym) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNSymbol* BNGetSymbolByAddress(BNBinaryView* view, uint64_t addr, const BNNameSpace* nameSpace) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNSymbol* BNGetSymbolByRawName(BNBinaryView* view, const char* name, const BNNameSpace* nameSpace) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNSymbol** BNGetSymbolsByName(
	BNBinaryView* view, const char* name, size_t* count, const BNNameSpace* nameSpace) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNSymbol** BNGetSymbolsByRawName(
	BNBinaryView* view, const char* name, size_t* count, const BNNameSpace* nameSpace) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNSymbol** BNGetSymbols(BNBinaryView* view, size_t* count, const BNNameSpace* nameSpace) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNSymbol** BNGetSymbolsInRange(
	BNBinaryView* view, uint64_t start, uint64_t len, size_t* count, const BNNameSpace* nameSpace) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNSymbol** BNGetSymbolsOfType(
	BNBinaryView* view, BNSymbolType type, size_t* count, const BNNameSpace* nameSpace) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNSymbol** BNGetSymbolsOfTypeInRange(
	BNBinaryView* view, BNSymbolType type, uint64_t start, uint64_t len, size_t* count, const BNNameSpace* nameSpace) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeSymbolList(BNSymbol** syms, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI BNSymbol** BNGetVisibleSymbols(BNBinaryView* view, size_t* count, const BNNameSpace* nameSpace) { __debugbreak(); return {}; }

BINARYNINJACOREAPI void BNDefineAutoSymbol(BNBinaryView* view, BNSymbol* sym) { __debugbreak(); }
BINARYNINJACOREAPI void BNUndefineAutoSymbol(BNBinaryView* view, BNSymbol* sym) { __debugbreak(); }
BINARYNINJACOREAPI void BNDefineUserSymbol(BNBinaryView* view, BNSymbol* sym) { __debugbreak(); }
BINARYNINJACOREAPI void BNUndefineUserSymbol(BNBinaryView* view, BNSymbol* sym) { __debugbreak(); }
BINARYNINJACOREAPI void BNDefineImportedFunction(
	BNBinaryView* view, BNSymbol* importAddressSym, BNFunction* func, BNType* type) { __debugbreak(); }
BINARYNINJACOREAPI BNSymbol* BNDefineAutoSymbolAndVariableOrFunction(
	BNBinaryView* view, BNPlatform* platform, BNSymbol* sym, BNType* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNBeginBulkModifySymbols(BNBinaryView* view) { __debugbreak(); }
BINARYNINJACOREAPI void BNEndBulkModifySymbols(BNBinaryView* view) { __debugbreak(); }

BINARYNINJACOREAPI BNDebugInfo* BNGetDebugInfo(BNBinaryView* view) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNApplyDebugInfo(BNBinaryView* view, BNDebugInfo* newDebugInfo) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetDebugInfo(BNBinaryView* view, BNDebugInfo* newDebugInfo) { __debugbreak(); }
BINARYNINJACOREAPI bool BNIsApplyingDebugInfo(BNBinaryView* view) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNSymbol* BNImportedFunctionFromImportAddressSymbol(BNSymbol* sym, uint64_t addr) { __debugbreak(); return {}; }

// Low-level IL
#include "core_llil.h"

// Medium-level IL
BINARYNINJACOREAPI BNMediumLevelILFunction* BNCreateMediumLevelILFunction(BNArchitecture* arch, BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNMediumLevelILFunction* BNNewMediumLevelILFunctionReference(BNMediumLevelILFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeMediumLevelILFunction(BNMediumLevelILFunction* func) { __debugbreak(); }
BINARYNINJACOREAPI BNFunction* BNGetMediumLevelILOwnerFunction(BNMediumLevelILFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNMediumLevelILGetCurrentAddress(BNMediumLevelILFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNMediumLevelILSetCurrentAddress(
	BNMediumLevelILFunction* func, BNArchitecture* arch, uint64_t addr) { __debugbreak(); }
BINARYNINJACOREAPI size_t BNMediumLevelILGetInstructionStart(
	BNMediumLevelILFunction* func, BNArchitecture* arch, uint64_t addr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNMediumLevelILAddExpr(BNMediumLevelILFunction* func, BNMediumLevelILOperation operation,
	size_t size, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNMediumLevelILAddExprWithLocation(BNMediumLevelILFunction* func,
	BNMediumLevelILOperation operation, uint64_t addr, uint32_t sourceOperand, size_t size, uint64_t a, uint64_t b,
	uint64_t c, uint64_t d, uint64_t e) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNMediumLevelILAddInstruction(BNMediumLevelILFunction* func, size_t expr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNMediumLevelILGoto(BNMediumLevelILFunction* func, BNMediumLevelILLabel* label) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNMediumLevelILGotoWithLocation(
	BNMediumLevelILFunction* func, BNMediumLevelILLabel* label, uint64_t addr, uint32_t sourceOperand) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNMediumLevelILIf(
	BNMediumLevelILFunction* func, uint64_t op, BNMediumLevelILLabel* t, BNMediumLevelILLabel* f) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNMediumLevelILIfWithLocation(BNMediumLevelILFunction* func, uint64_t op,
	BNMediumLevelILLabel* t, BNMediumLevelILLabel* f, uint64_t addr, uint32_t sourceOperand) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNMediumLevelILInitLabel(BNMediumLevelILLabel* label) { __debugbreak(); }
BINARYNINJACOREAPI void BNMediumLevelILMarkLabel(BNMediumLevelILFunction* func, BNMediumLevelILLabel* label) { __debugbreak(); }
BINARYNINJACOREAPI void BNFinalizeMediumLevelILFunction(BNMediumLevelILFunction* func) { __debugbreak(); }
BINARYNINJACOREAPI void BNGenerateMediumLevelILSSAForm(BNMediumLevelILFunction* func, bool analyzeConditionals,
	bool handleAliases, BNVariable* knownNotAliases, size_t knownNotAliasCount, BNVariable* knownAliases,
	size_t knownAliasCount) { __debugbreak(); }

BINARYNINJACOREAPI void BNPrepareToCopyMediumLevelILFunction(
	BNMediumLevelILFunction* func, BNMediumLevelILFunction* src) { __debugbreak(); }
BINARYNINJACOREAPI void BNPrepareToCopyMediumLevelILBasicBlock(BNMediumLevelILFunction* func, BNBasicBlock* block) { __debugbreak(); }
BINARYNINJACOREAPI BNMediumLevelILLabel* BNGetLabelForMediumLevelILSourceInstruction(
	BNMediumLevelILFunction* func, size_t instr) { __debugbreak(); return {}; }

BINARYNINJACOREAPI size_t BNMediumLevelILAddLabelMap(
	BNMediumLevelILFunction* func, uint64_t* values, BNMediumLevelILLabel** labels, size_t count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNMediumLevelILAddOperandList(
	BNMediumLevelILFunction* func, uint64_t* operands, size_t count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t* BNMediumLevelILGetOperandList(
	BNMediumLevelILFunction* func, size_t expr, size_t operand, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNMediumLevelILFreeOperandList(uint64_t* operands) { __debugbreak(); }

BINARYNINJACOREAPI BNMediumLevelILInstruction BNGetMediumLevelILByIndex(BNMediumLevelILFunction* func, size_t i) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetMediumLevelILIndexForInstruction(BNMediumLevelILFunction* func, size_t i) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetMediumLevelILInstructionForExpr(BNMediumLevelILFunction* func, size_t expr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetMediumLevelILInstructionCount(BNMediumLevelILFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetMediumLevelILExprCount(BNMediumLevelILFunction* func) { __debugbreak(); return {}; }

BINARYNINJACOREAPI void BNUpdateMediumLevelILOperand(
	BNMediumLevelILFunction* func, size_t instr, size_t operandIndex, uint64_t value) { __debugbreak(); }
BINARYNINJACOREAPI void BNMarkMediumLevelILInstructionForRemoval(BNMediumLevelILFunction* func, size_t instr) { __debugbreak(); }
BINARYNINJACOREAPI void BNReplaceMediumLevelILInstruction(BNMediumLevelILFunction* func, size_t instr, size_t expr) { __debugbreak(); }
BINARYNINJACOREAPI void BNReplaceMediumLevelILExpr(BNMediumLevelILFunction* func, size_t expr, size_t newExpr) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetMediumLevelILExprAttributes(
	BNMediumLevelILFunction* func, size_t expr, uint32_t attributes) { __debugbreak(); }

BINARYNINJACOREAPI bool BNGetMediumLevelILExprText(BNMediumLevelILFunction* func, BNArchitecture* arch, size_t i,
	BNInstructionTextToken** tokens, size_t* count, BNDisassemblySettings* settings) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNGetMediumLevelILInstructionText(BNMediumLevelILFunction* il, BNFunction* func,
	BNArchitecture* arch, size_t i, BNInstructionTextToken** tokens, size_t* count, BNDisassemblySettings* settings) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNBasicBlock** BNGetMediumLevelILBasicBlockList(BNMediumLevelILFunction* func, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBasicBlock* BNGetMediumLevelILBasicBlockForInstruction(BNMediumLevelILFunction* func, size_t i) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNMediumLevelILFunction* BNGetMediumLevelILSSAForm(BNMediumLevelILFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNMediumLevelILFunction* BNGetMediumLevelILNonSSAForm(BNMediumLevelILFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetMediumLevelILSSAInstructionIndex(BNMediumLevelILFunction* func, size_t instr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetMediumLevelILNonSSAInstructionIndex(BNMediumLevelILFunction* func, size_t instr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetMediumLevelILSSAExprIndex(BNMediumLevelILFunction* func, size_t expr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetMediumLevelILNonSSAExprIndex(BNMediumLevelILFunction* func, size_t expr) { __debugbreak(); return {}; }

BINARYNINJACOREAPI size_t BNGetMediumLevelILSSAVarDefinition(
	BNMediumLevelILFunction* func, const BNVariable* var, size_t version) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetMediumLevelILSSAMemoryDefinition(BNMediumLevelILFunction* func, size_t version) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t* BNGetMediumLevelILSSAVarUses(
	BNMediumLevelILFunction* func, const BNVariable* var, size_t version, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t* BNGetMediumLevelILSSAMemoryUses(
	BNMediumLevelILFunction* func, size_t version, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsMediumLevelILSSAVarLive(
	BNMediumLevelILFunction* func, const BNVariable* var, size_t version) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsMediumLevelILSSAVarLiveAt(
	BNMediumLevelILFunction* func, const BNVariable* var, size_t version, const size_t instr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsMediumLevelILVarLiveAt(
	BNMediumLevelILFunction* func, const BNVariable* var, const size_t instr) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNVariable* BNGetMediumLevelILVariables(BNMediumLevelILFunction* func, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNVariable* BNGetMediumLevelILAliasedVariables(BNMediumLevelILFunction* func, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t* BNGetMediumLevelILVariableSSAVersions(
	BNMediumLevelILFunction* func, const BNVariable* var, size_t* count) { __debugbreak(); return {}; }

BINARYNINJACOREAPI size_t* BNGetMediumLevelILVariableDefinitions(
	BNMediumLevelILFunction* func, const BNVariable* var, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t* BNGetMediumLevelILVariableUses(
	BNMediumLevelILFunction* func, const BNVariable* var, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t* BNGetMediumLevelILLiveInstructionsForVariable(
	BNMediumLevelILFunction* func, const BNVariable* var, bool includeLastUse, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint32_t BNGetDefaultIndexForMediumLevelILVariableDefinition(
	BNMediumLevelILFunction* func, const BNVariable* var, size_t instrIndex) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNRegisterValue BNGetMediumLevelILSSAVarValue(
	BNMediumLevelILFunction* func, const BNVariable* var, size_t version) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRegisterValue BNGetMediumLevelILExprValue(BNMediumLevelILFunction* func, size_t expr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNPossibleValueSet BNGetMediumLevelILPossibleSSAVarValues(BNMediumLevelILFunction* func,
	const BNVariable* var, size_t version, size_t instr, BNDataFlowQueryOption* options, size_t optionCount) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNPossibleValueSet BNGetMediumLevelILPossibleExprValues(
	BNMediumLevelILFunction* func, size_t expr, BNDataFlowQueryOption* options, size_t optionCount) { __debugbreak(); return {}; }

BINARYNINJACOREAPI size_t BNGetMediumLevelILSSAVarVersionAtILInstruction(
	BNMediumLevelILFunction* func, const BNVariable* var, size_t instr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetMediumLevelILSSAMemoryVersionAtILInstruction(
	BNMediumLevelILFunction* func, size_t instr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNVariable BNGetMediumLevelILVariableForRegisterAtInstruction(
	BNMediumLevelILFunction* func, uint32_t reg, size_t instr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNVariable BNGetMediumLevelILVariableForFlagAtInstruction(
	BNMediumLevelILFunction* func, uint32_t flag, size_t instr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNVariable BNGetMediumLevelILVariableForStackLocationAtInstruction(
	BNMediumLevelILFunction* func, int64_t offset, size_t instr) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNRegisterValue BNGetMediumLevelILRegisterValueAtInstruction(
	BNMediumLevelILFunction* func, uint32_t reg, size_t instr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRegisterValue BNGetMediumLevelILRegisterValueAfterInstruction(
	BNMediumLevelILFunction* func, uint32_t reg, size_t instr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNPossibleValueSet BNGetMediumLevelILPossibleRegisterValuesAtInstruction(
	BNMediumLevelILFunction* func, uint32_t reg, size_t instr, BNDataFlowQueryOption* options, size_t optionCount) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNPossibleValueSet BNGetMediumLevelILPossibleRegisterValuesAfterInstruction(
	BNMediumLevelILFunction* func, uint32_t reg, size_t instr, BNDataFlowQueryOption* options, size_t optionCount) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRegisterValue BNGetMediumLevelILFlagValueAtInstruction(
	BNMediumLevelILFunction* func, uint32_t flag, size_t instr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRegisterValue BNGetMediumLevelILFlagValueAfterInstruction(
	BNMediumLevelILFunction* func, uint32_t flag, size_t instr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNPossibleValueSet BNGetMediumLevelILPossibleFlagValuesAtInstruction(
	BNMediumLevelILFunction* func, uint32_t flag, size_t instr, BNDataFlowQueryOption* options, size_t optionCount) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNPossibleValueSet BNGetMediumLevelILPossibleFlagValuesAfterInstruction(
	BNMediumLevelILFunction* func, uint32_t flag, size_t instr, BNDataFlowQueryOption* options, size_t optionCount) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRegisterValue BNGetMediumLevelILStackContentsAtInstruction(
	BNMediumLevelILFunction* func, int64_t offset, size_t len, size_t instr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRegisterValue BNGetMediumLevelILStackContentsAfterInstruction(
	BNMediumLevelILFunction* func, int64_t offset, size_t len, size_t instr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNPossibleValueSet BNGetMediumLevelILPossibleStackContentsAtInstruction(
	BNMediumLevelILFunction* func, int64_t offset, size_t len, size_t instr, BNDataFlowQueryOption* options,
	size_t optionCount) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNPossibleValueSet BNGetMediumLevelILPossibleStackContentsAfterInstruction(
	BNMediumLevelILFunction* func, int64_t offset, size_t len, size_t instr, BNDataFlowQueryOption* options,
	size_t optionCount) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNILBranchDependence BNGetMediumLevelILBranchDependence(
	BNMediumLevelILFunction* func, size_t curInstr, size_t branchInstr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNILBranchInstructionAndDependence* BNGetAllMediumLevelILBranchDependence(
	BNMediumLevelILFunction* func, size_t instr, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeILBranchDependenceList(BNILBranchInstructionAndDependence* branches) { __debugbreak(); }

BINARYNINJACOREAPI BNLowLevelILFunction* BNGetLowLevelILForMediumLevelIL(BNMediumLevelILFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetLowLevelILInstructionIndex(BNMediumLevelILFunction* func, size_t instr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetLowLevelILExprIndex(BNMediumLevelILFunction* func, size_t expr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t* BNGetLowLevelILExprIndexes(BNMediumLevelILFunction* func, size_t expr, size_t* count) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNHighLevelILFunction* BNGetHighLevelILForMediumLevelIL(BNMediumLevelILFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetHighLevelILInstructionIndex(BNMediumLevelILFunction* func, size_t instr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetHighLevelILExprIndex(BNMediumLevelILFunction* func, size_t expr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t* BNGetHighLevelILExprIndexes(BNMediumLevelILFunction* func, size_t expr, size_t* count) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNTypeWithConfidence BNGetMediumLevelILExprType(BNMediumLevelILFunction* func, size_t expr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetMediumLevelILExprType(
	BNMediumLevelILFunction* func, size_t expr, BNTypeWithConfidence* type) { __debugbreak(); }

// High-level IL
BINARYNINJACOREAPI BNHighLevelILFunction* BNCreateHighLevelILFunction(BNArchitecture* arch, BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNHighLevelILFunction* BNNewHighLevelILFunctionReference(BNHighLevelILFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeHighLevelILFunction(BNHighLevelILFunction* func) { __debugbreak(); }

BINARYNINJACOREAPI BNFunction* BNGetHighLevelILOwnerFunction(BNHighLevelILFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNHighLevelILGetCurrentAddress(BNHighLevelILFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNHighLevelILSetCurrentAddress(
	BNHighLevelILFunction* func, BNArchitecture* arch, uint64_t addr) { __debugbreak(); }
BINARYNINJACOREAPI size_t BNHighLevelILAddExpr(BNHighLevelILFunction* func, BNHighLevelILOperation operation,
	size_t size, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNHighLevelILAddExprWithLocation(BNHighLevelILFunction* func,
	BNHighLevelILOperation operation, uint64_t addr, uint32_t sourceOperand, size_t size, uint64_t a, uint64_t b,
	uint64_t c, uint64_t d, uint64_t e) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetHighLevelILRootExpr(BNHighLevelILFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetHighLevelILRootExpr(BNHighLevelILFunction* func, size_t expr) { __debugbreak(); }
BINARYNINJACOREAPI void BNFinalizeHighLevelILFunction(BNHighLevelILFunction* func) { __debugbreak(); }
BINARYNINJACOREAPI void BNGenerateHighLevelILSSAForm(
	BNHighLevelILFunction* func, BNVariable* aliases, size_t aliasCount) { __debugbreak(); }

BINARYNINJACOREAPI size_t BNHighLevelILAddOperandList(BNHighLevelILFunction* func, uint64_t* operands, size_t count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t* BNHighLevelILGetOperandList(
	BNHighLevelILFunction* func, size_t expr, size_t operand, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNHighLevelILFreeOperandList(uint64_t* operands) { __debugbreak(); }

BINARYNINJACOREAPI BNHighLevelILInstruction BNGetHighLevelILByIndex(
	BNHighLevelILFunction* func, size_t i, bool asFullAst) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetHighLevelILIndexForInstruction(BNHighLevelILFunction* func, size_t i) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetHighLevelILInstructionForExpr(BNHighLevelILFunction* func, size_t expr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetHighLevelILInstructionCount(BNHighLevelILFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetHighLevelILExprCount(BNHighLevelILFunction* func) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNMediumLevelILFunction* BNGetMediumLevelILForHighLevelILFunction(BNHighLevelILFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetMediumLevelILExprIndexFromHighLevelIL(BNHighLevelILFunction* func, size_t expr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t* BNGetMediumLevelILExprIndexesFromHighLevelIL(
	BNHighLevelILFunction* func, size_t expr, size_t* count) { __debugbreak(); return {}; }

BINARYNINJACOREAPI void BNUpdateHighLevelILOperand(
	BNHighLevelILFunction* func, size_t instr, size_t operandIndex, uint64_t value) { __debugbreak(); }
BINARYNINJACOREAPI void BNReplaceHighLevelILExpr(BNHighLevelILFunction* func, size_t expr, size_t newExpr) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetHighLevelILExprAttributes(BNHighLevelILFunction* func, size_t expr, uint32_t attributes) { __debugbreak(); }

BINARYNINJACOREAPI BNDisassemblyTextLine* BNGetHighLevelILExprText(
	BNHighLevelILFunction* func, size_t expr, bool asFullAst, size_t* count, BNDisassemblySettings* settings) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNTypeWithConfidence BNGetHighLevelILExprType(BNHighLevelILFunction* func, size_t expr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetHighLevelILExprType(BNHighLevelILFunction* func, size_t expr, BNTypeWithConfidence* type) { __debugbreak(); }

BINARYNINJACOREAPI BNBasicBlock** BNGetHighLevelILBasicBlockList(BNHighLevelILFunction* func, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBasicBlock* BNGetHighLevelILBasicBlockForInstruction(BNHighLevelILFunction* func, size_t i) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNHighLevelILFunction* BNGetHighLevelILSSAForm(BNHighLevelILFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNHighLevelILFunction* BNGetHighLevelILNonSSAForm(BNHighLevelILFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetHighLevelILSSAInstructionIndex(BNHighLevelILFunction* func, size_t instr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetHighLevelILNonSSAInstructionIndex(BNHighLevelILFunction* func, size_t instr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetHighLevelILSSAExprIndex(BNHighLevelILFunction* func, size_t expr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetHighLevelILNonSSAExprIndex(BNHighLevelILFunction* func, size_t expr) { __debugbreak(); return {}; }

BINARYNINJACOREAPI size_t BNGetHighLevelILSSAVarDefinition(
	BNHighLevelILFunction* func, const BNVariable* var, size_t version) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetHighLevelILSSAMemoryDefinition(BNHighLevelILFunction* func, size_t version) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t* BNGetHighLevelILSSAVarUses(
	BNHighLevelILFunction* func, const BNVariable* var, size_t version, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t* BNGetHighLevelILSSAMemoryUses(BNHighLevelILFunction* func, size_t version, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsHighLevelILSSAVarLive(BNHighLevelILFunction* func, const BNVariable* var, size_t version) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsHighLevelILSSAVarLiveAt(
	BNHighLevelILFunction* func, const BNVariable* var, const size_t version, const size_t instr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsHighLevelILVarLiveAt(
	BNHighLevelILFunction* func, const BNVariable* var, const size_t instr) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNVariable* BNGetHighLevelILVariables(BNHighLevelILFunction* func, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNVariable* BNGetHighLevelILAliasedVariables(BNHighLevelILFunction* func, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t* BNGetHighLevelILVariableSSAVersions(
	BNHighLevelILFunction* func, const BNVariable* var, size_t* count) { __debugbreak(); return {}; }

BINARYNINJACOREAPI size_t* BNGetHighLevelILVariableDefinitions(
	BNHighLevelILFunction* func, const BNVariable* var, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t* BNGetHighLevelILVariableUses(
	BNHighLevelILFunction* func, const BNVariable* var, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetHighLevelILSSAVarVersionAtILInstruction(
	BNHighLevelILFunction* func, const BNVariable* var, size_t instr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetHighLevelILSSAMemoryVersionAtILInstruction(BNHighLevelILFunction* func, size_t instr) { __debugbreak(); return {}; }

BINARYNINJACOREAPI size_t BNGetHighLevelILExprIndexForLabel(BNHighLevelILFunction* func, uint64_t label) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t* BNGetHighLevelILUsesForLabel(BNHighLevelILFunction* func, uint64_t label, size_t* count) { __debugbreak(); return {}; }

BINARYNINJACOREAPI bool BNHighLevelILExprLessThan(
	BNHighLevelILFunction* leftFunc, size_t leftExpr, BNHighLevelILFunction* rightFunc, size_t rightExpr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNHighLevelILExprEqual(
	BNHighLevelILFunction* leftFunc, size_t leftExpr, BNHighLevelILFunction* rightFunc, size_t rightExpr) { __debugbreak(); return {}; }

// Type Libraries
BINARYNINJACOREAPI BNTypeLibrary* BNNewTypeLibrary(BNArchitecture* arch, const char* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTypeLibrary* BNNewTypeLibraryReference(BNTypeLibrary* lib) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTypeLibrary* BNDuplicateTypeLibrary(BNTypeLibrary* lib) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTypeLibrary* BNLoadTypeLibraryFromFile(const char* path) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNTypeLibraryDecompressToFile(const char* file, const char* output) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeTypeLibrary(BNTypeLibrary* lib) { __debugbreak(); }

BINARYNINJACOREAPI BNTypeLibrary* BNLookupTypeLibraryByName(BNArchitecture* arch, const char* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTypeLibrary* BNLookupTypeLibraryByGuid(BNArchitecture* arch, const char* guid) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNTypeLibrary** BNGetArchitectureTypeLibraries(BNArchitecture* arch, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeTypeLibraryList(BNTypeLibrary** lib, size_t count) { __debugbreak(); }

BINARYNINJACOREAPI bool BNFinalizeTypeLibrary(BNTypeLibrary* lib) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNArchitecture* BNGetTypeLibraryArchitecture(BNTypeLibrary* lib) { __debugbreak(); return {}; }

BINARYNINJACOREAPI void BNSetTypeLibraryName(BNTypeLibrary* lib, const char* name) { __debugbreak(); }
BINARYNINJACOREAPI char* BNGetTypeLibraryName(BNTypeLibrary* lib) { __debugbreak(); return {}; }

BINARYNINJACOREAPI void BNAddTypeLibraryAlternateName(BNTypeLibrary* lib, const char* name) { __debugbreak(); }
BINARYNINJACOREAPI char** BNGetTypeLibraryAlternateNames(BNTypeLibrary* lib, size_t* count) { __debugbreak(); return {}; }  // BNFreeStringList

BINARYNINJACOREAPI void BNSetTypeLibraryDependencyName(BNTypeLibrary* lib, const char* name) { __debugbreak(); }
BINARYNINJACOREAPI char* BNGetTypeLibraryDependencyName(BNTypeLibrary* lib) { __debugbreak(); return {}; }

BINARYNINJACOREAPI void BNSetTypeLibraryGuid(BNTypeLibrary* lib, const char* name) { __debugbreak(); }
BINARYNINJACOREAPI char* BNGetTypeLibraryGuid(BNTypeLibrary* lib) { __debugbreak(); return {}; }

BINARYNINJACOREAPI void BNClearTypeLibraryPlatforms(BNTypeLibrary* lib) { __debugbreak(); }
BINARYNINJACOREAPI void BNAddTypeLibraryPlatform(BNTypeLibrary* lib, BNPlatform* platform) { __debugbreak(); }
BINARYNINJACOREAPI char** BNGetTypeLibraryPlatforms(BNTypeLibrary* lib, size_t* count) { __debugbreak(); return {}; }  // BNFreeStringList

BINARYNINJACOREAPI void BNTypeLibraryStoreMetadata(BNTypeLibrary* lib, const char* key, BNMetadata* value) { __debugbreak(); }
BINARYNINJACOREAPI BNMetadata* BNTypeLibraryQueryMetadata(BNTypeLibrary* lib, const char* key) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNMetadata* BNTypeLibraryGetMetadata(BNTypeLibrary* lib) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNTypeLibraryRemoveMetadata(BNTypeLibrary* lib, const char* key) { __debugbreak(); }

BINARYNINJACOREAPI BNTypeContainer* BNGetTypeLibraryTypeContainer(BNTypeLibrary* lib) { __debugbreak(); return {}; }

BINARYNINJACOREAPI void BNAddTypeLibraryNamedObject(BNTypeLibrary* lib, BNQualifiedName* name, BNType* type) { __debugbreak(); }
BINARYNINJACOREAPI void BNAddTypeLibraryNamedType(BNTypeLibrary* lib, BNQualifiedName* name, BNType* type) { __debugbreak(); }
BINARYNINJACOREAPI void BNAddTypeLibraryNamedTypeSource(BNTypeLibrary* lib, BNQualifiedName* name, const char* source) { __debugbreak(); }

BINARYNINJACOREAPI BNType* BNGetTypeLibraryNamedObject(BNTypeLibrary* lib, BNQualifiedName* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNType* BNGetTypeLibraryNamedType(BNTypeLibrary* lib, BNQualifiedName* name) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNQualifiedNameAndType* BNGetTypeLibraryNamedObjects(BNTypeLibrary* lib, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNQualifiedNameAndType* BNGetTypeLibraryNamedTypes(BNTypeLibrary* lib, size_t* count) { __debugbreak(); return {}; }

BINARYNINJACOREAPI bool BNWriteTypeLibraryToFile(BNTypeLibrary* lib, const char* path) { __debugbreak(); return {}; }

BINARYNINJACOREAPI void BNAddBinaryViewTypeLibrary(BNBinaryView* view, BNTypeLibrary* lib) { __debugbreak(); }
BINARYNINJACOREAPI BNTypeLibrary* BNGetBinaryViewTypeLibrary(BNBinaryView* view, const char* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTypeLibrary** BNGetBinaryViewTypeLibraries(BNBinaryView* view, size_t* count) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNType* BNBinaryViewImportTypeLibraryType(
	BNBinaryView* view, BNTypeLibrary** lib, BNQualifiedName* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNType* BNBinaryViewImportTypeLibraryObject(
	BNBinaryView* view, BNTypeLibrary** lib, BNQualifiedName* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNType* BNBinaryViewImportTypeLibraryTypeByGuid(BNBinaryView* view, const char* guid) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNQualifiedName BNBinaryViewGetTypeNameByGuid(BNBinaryView* view, const char* guid) { __debugbreak(); return {}; }

BINARYNINJACOREAPI void BNBinaryViewExportTypeToTypeLibrary(
	BNBinaryView* view, BNTypeLibrary* lib, BNQualifiedName* name, BNType* type) { __debugbreak(); }
BINARYNINJACOREAPI void BNBinaryViewExportObjectToTypeLibrary(
	BNBinaryView* view, BNTypeLibrary* lib, BNQualifiedName* name, BNType* type) { __debugbreak(); }

BINARYNINJACOREAPI void BNBinaryViewSetManualDependencies(
	BNBinaryView* view, BNQualifiedName* viewTypeNames, BNQualifiedName* libTypeNames, char** libNames, size_t count) { __debugbreak(); }

BINARYNINJACOREAPI void BNBinaryViewRecordImportedObjectLibrary(
	BNBinaryView* view, BNPlatform* tgtPlatform, uint64_t tgtAddr, BNTypeLibrary* lib, BNQualifiedName* name) { __debugbreak(); }
BINARYNINJACOREAPI bool BNBinaryViewLookupImportedObjectLibrary(
	BNBinaryView* view, BNPlatform* tgtPlatform, uint64_t tgtAddr, BNTypeLibrary** lib, BNQualifiedName* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNBinaryViewLookupImportedTypeLibrary(
	BNBinaryView* view, const BNQualifiedName* typeName, BNTypeLibrary** lib, BNQualifiedName* resultName) { __debugbreak(); return {}; }

// Language Representation
BINARYNINJACOREAPI BNLanguageRepresentationFunction* BNCreateLanguageRepresentationFunction(
	BNArchitecture* arch, BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNLanguageRepresentationFunction* BNNewLanguageRepresentationFunctionReference(
	BNLanguageRepresentationFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeLanguageRepresentationFunction(BNLanguageRepresentationFunction* func) { __debugbreak(); }
BINARYNINJACOREAPI BNFunction* BNGetLanguageRepresentationOwnerFunction(BNLanguageRepresentationFunction* func) { __debugbreak(); return {}; }

// Types
#include "core_types.h"

BINARYNINJACOREAPI void BNAddExpressionParserMagicValue(BNBinaryView* view, const char* name, uint64_t value) { __debugbreak(); }
BINARYNINJACOREAPI void BNRemoveExpressionParserMagicValue(BNBinaryView* view, const char* name) { __debugbreak(); }
BINARYNINJACOREAPI void BNAddExpressionParserMagicValues(
	BNBinaryView* view, const char** names, uint64_t* values, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI void BNRemoveExpressionParserMagicValues(BNBinaryView* view, const char** names, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI bool BNGetExpressionParserMagicValue(BNBinaryView* view, const char* name, uint64_t* value) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNComponent** BNGetFunctionParentComponents(BNBinaryView* view, BNFunction* func, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNComponent** BNGetDataVariableParentComponents(
	BNBinaryView* view, uint64_t dataVariable, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNCheckForStringAnnotationType(BNBinaryView* view, uint64_t addr, char** value,
	BNStringType* strType, bool allowShortStrings, bool allowLargeStrings, size_t childWidth) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNBinaryView* BNLoadFilename(
	const char* const filename, const bool updateAnalysis, const char* options, bool (*progress)(size_t, size_t)) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBinaryView* BNLoadProjectFile(
	BNProjectFile* projectFile, const bool updateAnalysis, const char* options, bool (*progress)(size_t, size_t)) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBinaryView* BNLoadBinaryView(
	BNBinaryView* view, const bool updateAnalysis, const char* options, bool (*progress)(size_t, size_t)) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNExternalLibrary* BNBinaryViewAddExternalLibrary(
	BNBinaryView* view, const char* name, BNProjectFile* backingFile, bool isAuto) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNBinaryViewRemoveExternalLibrary(BNBinaryView* view, const char* name) { __debugbreak(); }
BINARYNINJACOREAPI BNExternalLibrary* BNBinaryViewGetExternalLibrary(BNBinaryView* view, const char* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNExternalLibrary** BNBinaryViewGetExternalLibraries(BNBinaryView* view, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNExternalLocation* BNBinaryViewAddExternalLocation(BNBinaryView* view, BNSymbol* sourceSymbol,
	BNExternalLibrary* library, const char* targetSymbol, uint64_t* targetAddress, bool isAuto) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNBinaryViewRemoveExternalLocation(BNBinaryView* view, BNSymbol* sourceSymbol) { __debugbreak(); }
BINARYNINJACOREAPI BNExternalLocation* BNBinaryViewGetExternalLocation(BNBinaryView* view, BNSymbol* sourceSymbol) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNExternalLocation** BNBinaryViewGetExternalLocations(BNBinaryView* view, size_t* count) { __debugbreak(); return {}; }

// Source code processing
BINARYNINJACOREAPI bool BNPreprocessSource(const char* source, const char* fileName, char** output, char** errors,
	const char** includeDirs, size_t includeDirCount) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNParseTypesFromSource(BNPlatform* platform, const char* source, const char* fileName,
	BNTypeParserResult* result, char** errors, const char** includeDirs, size_t includeDirCount,
	const char* autoTypeSource) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNParseTypesFromSourceFile(BNPlatform* platform, const char* fileName,
	BNTypeParserResult* result, char** errors, const char** includeDirs, size_t includeDirCount,
	const char* autoTypeSource) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNTypeParser* BNRegisterTypeParser(const char* name, BNTypeParserCallbacks* callbacks) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTypeParser** BNGetTypeParserList(size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeTypeParserList(BNTypeParser** parsers) { __debugbreak(); }
BINARYNINJACOREAPI BNTypeParser* BNGetTypeParserByName(const char* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTypeParser* BNGetDefaultTypeParser(void) { __debugbreak(); return {}; }

BINARYNINJACOREAPI char* BNGetTypeParserName(BNTypeParser* parser) { __debugbreak(); return {}; }

BINARYNINJACOREAPI bool BNGetTypeParserOptionText(
	BNTypeParser* parser, BNTypeParserOption option, const char* value, char** result) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNTypeParserPreprocessSource(BNTypeParser* parser, const char* source, const char* fileName,
	BNPlatform* platform, BNTypeContainer* existingTypes, const char* const* options, size_t optionCount,
	const char* const* includeDirs, size_t includeDirCount, char** output, BNTypeParserError** errors,
	size_t* errorCount) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNTypeParserParseTypesFromSource(BNTypeParser* parser, const char* source, const char* fileName,
	BNPlatform* platform, BNTypeContainer* existingTypes, const char* const* options, size_t optionCount,
	const char* const* includeDirs, size_t includeDirCount, const char* autoTypeSource, BNTypeParserResult* result,
	BNTypeParserError** errors, size_t* errorCount) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNTypeParserParseTypeString(BNTypeParser* parser, const char* source, BNPlatform* platform,
	BNTypeContainer* existingTypes, BNQualifiedNameAndType* result, BNTypeParserError** errors, size_t* errorCount) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char** BNParseTypeParserOptionsText(const char* optionsText, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNFormatTypeParserParseErrors(BNTypeParserError* errors, size_t count) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNTypePrinter* BNRegisterTypePrinter(const char* name, BNTypePrinterCallbacks* callbacks) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTypePrinter** BNGetTypePrinterList(size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeTypePrinterList(BNTypePrinter** printers) { __debugbreak(); }
BINARYNINJACOREAPI BNTypePrinter* BNGetTypePrinterByName(const char* name) { __debugbreak(); return {}; }

BINARYNINJACOREAPI char* BNGetTypePrinterName(BNTypePrinter* printer) { __debugbreak(); return {}; }

BINARYNINJACOREAPI bool BNGetTypePrinterTypeTokens(BNTypePrinter* printer, BNType* type, BNPlatform* platform,
	BNQualifiedName* name, uint8_t baseConfidence, BNTokenEscapingType escaping, BNInstructionTextToken** result,
	size_t* resultCount) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNGetTypePrinterTypeTokensBeforeName(BNTypePrinter* printer, BNType* type, BNPlatform* platform,
	uint8_t baseConfidence, BNType* parentType, BNTokenEscapingType escaping, BNInstructionTextToken** result,
	size_t* resultCount) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNGetTypePrinterTypeTokensAfterName(BNTypePrinter* printer, BNType* type, BNPlatform* platform,
	uint8_t baseConfidence, BNType* parentType, BNTokenEscapingType escaping, BNInstructionTextToken** result,
	size_t* resultCount) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNGetTypePrinterTypeString(BNTypePrinter* printer, BNType* type, BNPlatform* platform,
	BNQualifiedName* name, BNTokenEscapingType escaping, char** result) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNGetTypePrinterTypeStringBeforeName(
	BNTypePrinter* printer, BNType* type, BNPlatform* platform, BNTokenEscapingType escaping, char** result) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNGetTypePrinterTypeStringAfterName(
	BNTypePrinter* printer, BNType* type, BNPlatform* platform, BNTokenEscapingType escaping, char** result) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNGetTypePrinterTypeLines(BNTypePrinter* printer, BNType* type, BNTypeContainer* types,
	BNQualifiedName* name, int paddingCols, bool collapsed, BNTokenEscapingType escaping, BNTypeDefinitionLine** result,
	size_t* resultCount) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNTypePrinterPrintAllTypes(BNTypePrinter* printer, BNQualifiedName* names, BNType** types,
	size_t typeCount, BNBinaryView* data, int paddingCols, BNTokenEscapingType escaping, char** result) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNTypePrinterDefaultPrintAllTypes(BNTypePrinter* printer, BNQualifiedName* names,
	BNType** types, size_t typeCount, BNBinaryView* data, int paddingCols, BNTokenEscapingType escaping, char** result) { __debugbreak(); return {}; }

BINARYNINJACOREAPI void BNFreeTypeParserResult(BNTypeParserResult* result) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeTypeParserErrors(BNTypeParserError* errors, size_t count) { __debugbreak(); }
// Updates
BINARYNINJACOREAPI BNUpdateChannel* BNGetUpdateChannels(size_t* count, char** errors) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeUpdateChannelList(BNUpdateChannel* list, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI BNUpdateVersion* BNGetUpdateChannelVersions(const char* channel, size_t* count, char** errors) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeUpdateChannelVersionList(BNUpdateVersion* list, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI BNUpdateChannelFullInfo* BNGetFullInfoUpdateChannels(size_t* count, char** errors) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeFullInfoUpdateChannels(BNUpdateChannelFullInfo* list, size_t count) { __debugbreak(); }

BINARYNINJACOREAPI bool BNAreUpdatesAvailable(
	const char* channel, uint64_t* expireTime, uint64_t* serverTime, char** errors) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNUpdateResult BNUpdateToVersion(const char* channel, const char* version, char** errors,
	bool (*progress)(void* ctxt, uint64_t progress, uint64_t total), void* context) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNUpdateResult BNUpdateToLatestVersion(
	const char* channel, char** errors, bool (*progress)(void* ctxt, uint64_t progress, uint64_t total), void* context) { __debugbreak(); return {}; }

BINARYNINJACOREAPI bool BNAreAutoUpdatesEnabled(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetAutoUpdatesEnabled(bool enabled) { __debugbreak(); }
BINARYNINJACOREAPI uint64_t BNGetTimeSinceLastUpdateCheck(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNUpdatesChecked(void) { __debugbreak(); }

BINARYNINJACOREAPI char* BNGetActiveUpdateChannel(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetActiveUpdateChannel(const char* channel) { __debugbreak(); }

BINARYNINJACOREAPI bool BNIsUpdateInstallationPending(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNInstallPendingUpdate(char** errors) { __debugbreak(); }

// Plugin commands
BINARYNINJACOREAPI void BNRegisterPluginCommand(const char* name, const char* description,
	void (*action)(void* ctxt, BNBinaryView* view), bool (*isValid)(void* ctxt, BNBinaryView* view), void* context) { __debugbreak(); }
BINARYNINJACOREAPI void BNRegisterPluginCommandForAddress(const char* name, const char* description,
	void (*action)(void* ctxt, BNBinaryView* view, uint64_t addr),
	bool (*isValid)(void* ctxt, BNBinaryView* view, uint64_t addr), void* context) { __debugbreak(); }
BINARYNINJACOREAPI void BNRegisterPluginCommandForRange(const char* name, const char* description,
	void (*action)(void* ctxt, BNBinaryView* view, uint64_t addr, uint64_t len),
	bool (*isValid)(void* ctxt, BNBinaryView* view, uint64_t addr, uint64_t len), void* context) { __debugbreak(); }
BINARYNINJACOREAPI void BNRegisterPluginCommandForFunction(const char* name, const char* description,
	void (*action)(void* ctxt, BNBinaryView* view, BNFunction* func),
	bool (*isValid)(void* ctxt, BNBinaryView* view, BNFunction* func), void* context) { __debugbreak(); }
BINARYNINJACOREAPI void BNRegisterPluginCommandForLowLevelILFunction(const char* name, const char* description,
	void (*action)(void* ctxt, BNBinaryView* view, BNLowLevelILFunction* func),
	bool (*isValid)(void* ctxt, BNBinaryView* view, BNLowLevelILFunction* func), void* context) { __debugbreak(); }
BINARYNINJACOREAPI void BNRegisterPluginCommandForLowLevelILInstruction(const char* name, const char* description,
	void (*action)(void* ctxt, BNBinaryView* view, BNLowLevelILFunction* func, size_t instr),
	bool (*isValid)(void* ctxt, BNBinaryView* view, BNLowLevelILFunction* func, size_t instr), void* context) { __debugbreak(); }
BINARYNINJACOREAPI void BNRegisterPluginCommandForMediumLevelILFunction(const char* name, const char* description,
	void (*action)(void* ctxt, BNBinaryView* view, BNMediumLevelILFunction* func),
	bool (*isValid)(void* ctxt, BNBinaryView* view, BNMediumLevelILFunction* func), void* context) { __debugbreak(); }
BINARYNINJACOREAPI void BNRegisterPluginCommandForMediumLevelILInstruction(const char* name, const char* description,
	void (*action)(void* ctxt, BNBinaryView* view, BNMediumLevelILFunction* func, size_t instr),
	bool (*isValid)(void* ctxt, BNBinaryView* view, BNMediumLevelILFunction* func, size_t instr), void* context) { __debugbreak(); }
BINARYNINJACOREAPI void BNRegisterPluginCommandForHighLevelILFunction(const char* name, const char* description,
	void (*action)(void* ctxt, BNBinaryView* view, BNHighLevelILFunction* func),
	bool (*isValid)(void* ctxt, BNBinaryView* view, BNHighLevelILFunction* func), void* context) { __debugbreak(); }
BINARYNINJACOREAPI void BNRegisterPluginCommandForHighLevelILInstruction(const char* name, const char* description,
	void (*action)(void* ctxt, BNBinaryView* view, BNHighLevelILFunction* func, size_t instr),
	bool (*isValid)(void* ctxt, BNBinaryView* view, BNHighLevelILFunction* func, size_t instr), void* context) { __debugbreak(); }

BINARYNINJACOREAPI BNPluginCommand* BNGetAllPluginCommands(size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNPluginCommand* BNGetValidPluginCommands(BNBinaryView* view, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNPluginCommand* BNGetValidPluginCommandsForAddress(
	BNBinaryView* view, uint64_t addr, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNPluginCommand* BNGetValidPluginCommandsForRange(
	BNBinaryView* view, uint64_t addr, uint64_t len, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNPluginCommand* BNGetValidPluginCommandsForFunction(
	BNBinaryView* view, BNFunction* func, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNPluginCommand* BNGetValidPluginCommandsForLowLevelILFunction(
	BNBinaryView* view, BNLowLevelILFunction* func, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNPluginCommand* BNGetValidPluginCommandsForLowLevelILInstruction(
	BNBinaryView* view, BNLowLevelILFunction* func, size_t instr, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNPluginCommand* BNGetValidPluginCommandsForMediumLevelILFunction(
	BNBinaryView* view, BNMediumLevelILFunction* func, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNPluginCommand* BNGetValidPluginCommandsForMediumLevelILInstruction(
	BNBinaryView* view, BNMediumLevelILFunction* func, size_t instr, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNPluginCommand* BNGetValidPluginCommandsForHighLevelILFunction(
	BNBinaryView* view, BNHighLevelILFunction* func, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNPluginCommand* BNGetValidPluginCommandsForHighLevelILInstruction(
	BNBinaryView* view, BNHighLevelILFunction* func, size_t instr, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreePluginCommandList(BNPluginCommand* commands) { __debugbreak(); }

// Calling conventions
#include "core_callingconvention.h"

// Platforms
BINARYNINJACOREAPI BNPlatform* BNCreatePlatform(BNArchitecture* arch, const char* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNPlatform* BNCreatePlatformWithTypes(
	BNArchitecture* arch, const char* name, const char* typeFile, const char** includeDirs, size_t includeDirCount) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNPlatform* BNCreateCustomPlatform(BNArchitecture* arch, const char* name, BNCustomPlatform* impl) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNPlatform* BNCreateCustomPlatformWithTypes(BNArchitecture* arch, const char* name,
	BNCustomPlatform* impl, const char* typeFile, const char** includeDirs, size_t includeDirCount) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNRegisterPlatform(const char* os, BNPlatform* platform) { __debugbreak(); }
BINARYNINJACOREAPI BNPlatform* BNNewPlatformReference(BNPlatform* platform) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreePlatform(BNPlatform* platform) { __debugbreak(); }

BINARYNINJACOREAPI char* BNGetPlatformName(BNPlatform* platform) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNArchitecture* BNGetPlatformArchitecture(BNPlatform* platform) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNPlatform* BNGetPlatformByName(const char* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNPlatform** BNGetPlatformList(size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNPlatform** BNGetPlatformListByArchitecture(BNArchitecture* arch, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNPlatform** BNGetPlatformListByOS(const char* os, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNPlatform** BNGetPlatformListByOSAndArchitecture(
	const char* os, BNArchitecture* arch, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreePlatformList(BNPlatform** platform, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI char** BNGetPlatformOSList(size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreePlatformOSList(char** list, size_t count) { __debugbreak(); }

BINARYNINJACOREAPI BNCallingConvention* BNGetPlatformDefaultCallingConvention(BNPlatform* platform) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNCallingConvention* BNGetPlatformCdeclCallingConvention(BNPlatform* platform) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNCallingConvention* BNGetPlatformStdcallCallingConvention(BNPlatform* platform) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNCallingConvention* BNGetPlatformFastcallCallingConvention(BNPlatform* platform) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNCallingConvention** BNGetPlatformCallingConventions(BNPlatform* platform, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNCallingConvention* BNGetPlatformSystemCallConvention(BNPlatform* platform) { __debugbreak(); return {}; }

BINARYNINJACOREAPI void BNRegisterPlatformCallingConvention(BNPlatform* platform, BNCallingConvention* cc) { __debugbreak(); }
BINARYNINJACOREAPI void BNRegisterPlatformDefaultCallingConvention(BNPlatform* platform, BNCallingConvention* cc) { __debugbreak(); }
BINARYNINJACOREAPI void BNRegisterPlatformCdeclCallingConvention(BNPlatform* platform, BNCallingConvention* cc) { __debugbreak(); }
BINARYNINJACOREAPI void BNRegisterPlatformStdcallCallingConvention(BNPlatform* platform, BNCallingConvention* cc) { __debugbreak(); }
BINARYNINJACOREAPI void BNRegisterPlatformFastcallCallingConvention(BNPlatform* platform, BNCallingConvention* cc) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetPlatformSystemCallConvention(BNPlatform* platform, BNCallingConvention* cc) { __debugbreak(); }

BINARYNINJACOREAPI uint32_t* BNGetPlatformGlobalRegisters(BNPlatform* platform, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNType* BNGetPlatformGlobalRegisterType(BNPlatform* platform, uint32_t reg) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNPlatformAdjustTypeParserInput(BNPlatform* platform, BNTypeParser* parser,
	const char* const* argumentsIn, size_t argumentsLenIn, const char* const* sourceFileNamesIn,
	const char* const* sourceFileValuesIn, size_t sourceFilesLenIn, char*** argumentsOut, size_t* argumentsLenOut,
	char*** sourceFileNamesOut, char*** sourceFileValuesOut, size_t* sourceFilesLenOut) { __debugbreak(); }

BINARYNINJACOREAPI BNPlatform* BNGetArchitectureStandalonePlatform(BNArchitecture* arch) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNPlatform* BNGetRelatedPlatform(BNPlatform* platform, BNArchitecture* arch) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNAddRelatedPlatform(BNPlatform* platform, BNArchitecture* arch, BNPlatform* related) { __debugbreak(); }
BINARYNINJACOREAPI BNPlatform** BNGetRelatedPlatforms(BNPlatform* platform, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNPlatform* BNGetAssociatedPlatformByAddress(BNPlatform* platform, uint64_t* addr) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNTypeContainer* BNGetPlatformTypeContainer(BNPlatform* platform) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNQualifiedNameAndType* BNGetPlatformTypes(BNPlatform* platform, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNQualifiedNameAndType* BNGetPlatformVariables(BNPlatform* platform, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNQualifiedNameAndType* BNGetPlatformFunctions(BNPlatform* platform, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNSystemCallInfo* BNGetPlatformSystemCalls(BNPlatform* platform, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeSystemCallList(BNSystemCallInfo* syscalls, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI BNType* BNGetPlatformTypeByName(BNPlatform* platform, BNQualifiedName* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNType* BNGetPlatformVariableByName(BNPlatform* platform, BNQualifiedName* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNType* BNGetPlatformFunctionByName(BNPlatform* platform, BNQualifiedName* name, bool exactMatch) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetPlatformSystemCallName(BNPlatform* platform, uint32_t number) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNType* BNGetPlatformSystemCallType(BNPlatform* platform, uint32_t number) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNTypeLibrary** BNGetPlatformTypeLibraries(BNPlatform* platform, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTypeLibrary** BNGetPlatformTypeLibrariesByName(
	BNPlatform* platform, const char* depName, size_t* count) { __debugbreak(); return {}; }

// Demangler
BINARYNINJACOREAPI bool BNDemangleMS(BNArchitecture* arch, const char* mangledName, BNType** outType,
	char*** outVarName, size_t* outVarNameElements, const bool simplify) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNDemangleMSWithOptions(BNArchitecture* arch, const char* mangledName, BNType** outType,
	char*** outVarName, size_t* outVarNameElements, const BNBinaryView* const view) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNDemangleMSPlatform(BNPlatform* platform, const char* mangledName, BNType** outType,
	char*** outVarName, size_t* outVarNameElements, const bool simplify) { __debugbreak(); return {}; }

// Download providers
BINARYNINJACOREAPI BNDownloadProvider* BNRegisterDownloadProvider(
	const char* name, BNDownloadProviderCallbacks* callbacks) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDownloadProvider** BNGetDownloadProviderList(size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeDownloadProviderList(BNDownloadProvider** providers) { __debugbreak(); }
BINARYNINJACOREAPI BNDownloadProvider* BNGetDownloadProviderByName(const char* name) { __debugbreak(); return {}; }

BINARYNINJACOREAPI char* BNGetDownloadProviderName(BNDownloadProvider* provider) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDownloadInstance* BNCreateDownloadProviderInstance(BNDownloadProvider* provider) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNDownloadInstance* BNInitDownloadInstance(
	BNDownloadProvider* provider, BNDownloadInstanceCallbacks* callbacks) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDownloadInstance* BNNewDownloadInstanceReference(BNDownloadInstance* instance) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeDownloadInstance(BNDownloadInstance* instance) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeDownloadInstanceResponse(BNDownloadInstanceResponse* response) { __debugbreak(); }
BINARYNINJACOREAPI int BNPerformDownloadRequest(
	BNDownloadInstance* instance, const char* url, BNDownloadInstanceOutputCallbacks* callbacks) { __debugbreak(); return {}; }
BINARYNINJACOREAPI int BNPerformCustomRequest(BNDownloadInstance* instance, const char* method, const char* url,
	uint64_t headerCount, const char* const* headerKeys, const char* const* headerValues,
	BNDownloadInstanceResponse** response, BNDownloadInstanceInputOutputCallbacks* callbacks) { __debugbreak(); return {}; }
BINARYNINJACOREAPI int64_t BNReadDataForDownloadInstance(BNDownloadInstance* instance, uint8_t* data, uint64_t len) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNWriteDataForDownloadInstance(BNDownloadInstance* instance, uint8_t* data, uint64_t len) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNNotifyProgressForDownloadInstance(
	BNDownloadInstance* instance, uint64_t progress, uint64_t total) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetErrorForDownloadInstance(BNDownloadInstance* instance) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetErrorForDownloadInstance(BNDownloadInstance* instance, const char* error) { __debugbreak(); }

// Websocket providers
BINARYNINJACOREAPI BNWebsocketProvider* BNRegisterWebsocketProvider(
	const char* name, BNWebsocketProviderCallbacks* callbacks) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNWebsocketProvider** BNGetWebsocketProviderList(size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeWebsocketProviderList(BNWebsocketProvider** providers) { __debugbreak(); }
BINARYNINJACOREAPI BNWebsocketProvider* BNGetWebsocketProviderByName(const char* name) { __debugbreak(); return {}; }

BINARYNINJACOREAPI char* BNGetWebsocketProviderName(BNWebsocketProvider* provider) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNWebsocketClient* BNCreateWebsocketProviderClient(BNWebsocketProvider* provider) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNWebsocketClient* BNInitWebsocketClient(
	BNWebsocketProvider* provider, BNWebsocketClientCallbacks* callbacks) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNWebsocketClient* BNNewWebsocketClientReference(BNWebsocketClient* client) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeWebsocketClient(BNWebsocketClient* client) { __debugbreak(); }
BINARYNINJACOREAPI bool BNConnectWebsocketClient(BNWebsocketClient* client, const char* url, uint64_t headerCount,
	const char* const* headerKeys, const char* const* headerValues, BNWebsocketClientOutputCallbacks* callbacks) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNNotifyWebsocketClientConnect(BNWebsocketClient* client) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNNotifyWebsocketClientDisconnect(BNWebsocketClient* client) { __debugbreak(); }
BINARYNINJACOREAPI void BNNotifyWebsocketClientError(BNWebsocketClient* client, const char* msg) { __debugbreak(); }
BINARYNINJACOREAPI bool BNNotifyWebsocketClientReadData(BNWebsocketClient* client, uint8_t* data, uint64_t len) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNWriteWebsocketClientData(BNWebsocketClient* client, const uint8_t* data, uint64_t len) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNDisconnectWebsocketClient(BNWebsocketClient* client) { __debugbreak(); return {}; }

// Scripting providers
BINARYNINJACOREAPI BNScriptingProvider* BNRegisterScriptingProvider(
	const char* name, const char* apiName, BNScriptingProviderCallbacks* callbacks) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNScriptingProvider** BNGetScriptingProviderList(size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeScriptingProviderList(BNScriptingProvider** providers) { __debugbreak(); }
BINARYNINJACOREAPI BNScriptingProvider* BNGetScriptingProviderByName(const char* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNScriptingProvider* BNGetScriptingProviderByAPIName(const char* name) { __debugbreak(); return {}; }

BINARYNINJACOREAPI char* BNGetScriptingProviderName(BNScriptingProvider* provider) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetScriptingProviderAPIName(BNScriptingProvider* provider) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNScriptingInstance* BNCreateScriptingProviderInstance(BNScriptingProvider* provider) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNLoadScriptingProviderModule(
	BNScriptingProvider* provider, const char* repository, const char* module, bool force) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNInstallScriptingProviderModules(BNScriptingProvider* provider, const char* modules) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNScriptingInstance* BNInitScriptingInstance(
	BNScriptingProvider* provider, BNScriptingInstanceCallbacks* callbacks) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNScriptingInstance* BNNewScriptingInstanceReference(BNScriptingInstance* instance) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeScriptingInstance(BNScriptingInstance* instance) { __debugbreak(); }
BINARYNINJACOREAPI void BNNotifyOutputForScriptingInstance(BNScriptingInstance* instance, const char* text) { __debugbreak(); }
BINARYNINJACOREAPI void BNNotifyWarningForScriptingInstance(BNScriptingInstance* instance, const char* text) { __debugbreak(); }
BINARYNINJACOREAPI void BNNotifyErrorForScriptingInstance(BNScriptingInstance* instance, const char* text) { __debugbreak(); }
BINARYNINJACOREAPI void BNNotifyInputReadyStateForScriptingInstance(
	BNScriptingInstance* instance, BNScriptingProviderInputReadyState state) { __debugbreak(); }

BINARYNINJACOREAPI void BNRegisterScriptingInstanceOutputListener(
	BNScriptingInstance* instance, BNScriptingOutputListener* callbacks) { __debugbreak(); }
BINARYNINJACOREAPI void BNUnregisterScriptingInstanceOutputListener(
	BNScriptingInstance* instance, BNScriptingOutputListener* callbacks) { __debugbreak(); }

BINARYNINJACOREAPI const char* BNGetScriptingInstanceDelimiters(BNScriptingInstance* instance) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetScriptingInstanceDelimiters(BNScriptingInstance* instance, const char* delimiters) { __debugbreak(); }

BINARYNINJACOREAPI BNScriptingProviderInputReadyState BNGetScriptingInstanceInputReadyState(
	BNScriptingInstance* instance) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNScriptingProviderExecuteResult BNExecuteScriptInput(
	BNScriptingInstance* instance, const char* input) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNScriptingProviderExecuteResult BNExecuteScriptInputFromFilename(
	BNScriptingInstance* instance, const char* filename) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNCancelScriptInput(BNScriptingInstance* instance) { __debugbreak(); }
BINARYNINJACOREAPI void BNScriptingInstanceReleaseBinaryView(BNScriptingInstance* instance, BNBinaryView* view) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetScriptingInstanceCurrentBinaryView(BNScriptingInstance* instance, BNBinaryView* view) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetScriptingInstanceCurrentFunction(BNScriptingInstance* instance, BNFunction* func) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetScriptingInstanceCurrentBasicBlock(BNScriptingInstance* instance, BNBasicBlock* block) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetScriptingInstanceCurrentAddress(BNScriptingInstance* instance, uint64_t addr) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetScriptingInstanceCurrentSelection(
	BNScriptingInstance* instance, uint64_t begin, uint64_t end) { __debugbreak(); }
BINARYNINJACOREAPI char* BNScriptingInstanceCompleteInput(
	BNScriptingInstance* instance, const char* text, uint64_t state) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNStopScriptingInstance(BNScriptingInstance* instance) { __debugbreak(); }
BINARYNINJACOREAPI size_t BNFuzzyMatchSingle(const char* target, const char* query) { __debugbreak(); return {}; }

// Main thread actions
BINARYNINJACOREAPI void BNRegisterMainThread(BNMainThreadCallbacks* callbacks) { __debugbreak(); }
BINARYNINJACOREAPI BNMainThreadAction* BNNewMainThreadActionReference(BNMainThreadAction* action) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeMainThreadAction(BNMainThreadAction* action) { __debugbreak(); }
BINARYNINJACOREAPI void BNExecuteMainThreadAction(BNMainThreadAction* action) { __debugbreak(); }
BINARYNINJACOREAPI bool BNIsMainThreadActionDone(BNMainThreadAction* action) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNWaitForMainThreadAction(BNMainThreadAction* action) { __debugbreak(); }
BINARYNINJACOREAPI BNMainThreadAction* BNExecuteOnMainThread(void* ctxt, void (*func)(void* ctxt)) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNExecuteOnMainThreadAndWait(void* ctxt, void (*func)(void* ctxt)) { __debugbreak(); }
BINARYNINJACOREAPI bool BNIsMainThread(void) { __debugbreak(); return {}; }

// Worker thread queue management
BINARYNINJACOREAPI void BNWorkerEnqueue(void* ctxt, void (*action)(void* ctxt)) { __debugbreak(); }
BINARYNINJACOREAPI void BNWorkerEnqueueNamed(void* ctxt, void (*action)(void* ctxt), const char* name) { __debugbreak(); }
BINARYNINJACOREAPI void BNWorkerPriorityEnqueue(void* ctxt, void (*action)(void* ctxt)) { __debugbreak(); }
BINARYNINJACOREAPI void BNWorkerPriorityEnqueueNamed(void* ctxt, void (*action)(void* ctxt), const char* name) { __debugbreak(); }
BINARYNINJACOREAPI void BNWorkerInteractiveEnqueue(void* ctxt, void (*action)(void* ctxt)) { __debugbreak(); }
BINARYNINJACOREAPI void BNWorkerInteractiveEnqueueNamed(void* ctxt, void (*action)(void* ctxt), const char* name) { __debugbreak(); }

BINARYNINJACOREAPI size_t BNGetWorkerThreadCount(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetWorkerThreadCount(size_t count) { __debugbreak(); }

BINARYNINJACOREAPI void BNSetThreadName(const char* name) { __debugbreak(); }

// Background task progress reporting
BINARYNINJACOREAPI BNBackgroundTask* BNBeginBackgroundTask(const char* initialText, bool canCancel) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFinishBackgroundTask(BNBackgroundTask* task) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetBackgroundTaskProgressText(BNBackgroundTask* task, const char* text) { __debugbreak(); }
BINARYNINJACOREAPI bool BNIsBackgroundTaskCancelled(BNBackgroundTask* task) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNBackgroundTask** BNGetRunningBackgroundTasks(size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBackgroundTask* BNNewBackgroundTaskReference(BNBackgroundTask* task) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeBackgroundTask(BNBackgroundTask* task) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeBackgroundTaskList(BNBackgroundTask** tasks, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI char* BNGetBackgroundTaskProgressText(BNBackgroundTask* task) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNGetBackgroundTaskRuntimeSeconds(BNBackgroundTask* task) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNCanCancelBackgroundTask(BNBackgroundTask* task) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNCancelBackgroundTask(BNBackgroundTask* task) { __debugbreak(); }
BINARYNINJACOREAPI bool BNIsBackgroundTaskFinished(BNBackgroundTask* task) { __debugbreak(); return {}; }

// Interaction APIs
BINARYNINJACOREAPI void BNRegisterInteractionHandler(BNInteractionHandlerCallbacks* callbacks) { __debugbreak(); }
BINARYNINJACOREAPI char* BNMarkdownToHTML(const char* contents) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNShowPlainTextReport(BNBinaryView* view, const char* title, const char* contents) { __debugbreak(); }
BINARYNINJACOREAPI void BNShowMarkdownReport(
	BNBinaryView* view, const char* title, const char* contents, const char* plaintext) { __debugbreak(); }
BINARYNINJACOREAPI void BNShowHTMLReport(
	BNBinaryView* view, const char* title, const char* contents, const char* plaintext) { __debugbreak(); }
BINARYNINJACOREAPI void BNShowGraphReport(BNBinaryView* view, const char* title, BNFlowGraph* graph) { __debugbreak(); }
BINARYNINJACOREAPI void BNShowReportCollection(const char* title, BNReportCollection* reports) { __debugbreak(); }
BINARYNINJACOREAPI bool BNGetTextLineInput(char** result, const char* prompt, const char* title) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNGetIntegerInput(int64_t* result, const char* prompt, const char* title) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNGetAddressInput(
	uint64_t* result, const char* prompt, const char* title, BNBinaryView* view, uint64_t currentAddr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNGetChoiceInput(
	size_t* result, const char* prompt, const char* title, const char** choices, size_t count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNGetLargeChoiceInput(
	size_t* result, const char* prompt, const char* title, const char** choices, size_t count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNGetOpenFileNameInput(char** result, const char* prompt, const char* ext) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNGetSaveFileNameInput(
	char** result, const char* prompt, const char* ext, const char* defaultName) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNGetDirectoryNameInput(char** result, const char* prompt, const char* defaultName) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNGetFormInput(BNFormInputField* fields, size_t count, const char* title) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeFormInputResults(BNFormInputField* fields, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI BNMessageBoxButtonResult BNShowMessageBox(
	const char* title, const char* text, BNMessageBoxButtonSet buttons, BNMessageBoxIcon icon) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNOpenUrl(const char* url) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRunProgressDialog(const char* title, bool canCancel,
	void (*task)(void* taskCtxt, bool (*progress)(void* progressCtxt, size_t cur, size_t max), void* progressCtxt),
	void* taskCtxt) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNReportCollection* BNCreateReportCollection(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNReportCollection* BNNewReportCollectionReference(BNReportCollection* reports) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeReportCollection(BNReportCollection* reports) { __debugbreak(); }
BINARYNINJACOREAPI size_t BNGetReportCollectionCount(BNReportCollection* reports) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNReportType BNGetReportType(BNReportCollection* reports, size_t i) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBinaryView* BNGetReportView(BNReportCollection* reports, size_t i) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetReportTitle(BNReportCollection* reports, size_t i) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetReportContents(BNReportCollection* reports, size_t i) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetReportPlainText(BNReportCollection* reports, size_t i) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNFlowGraph* BNGetReportFlowGraph(BNReportCollection* reports, size_t i) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNAddPlainTextReportToCollection(
	BNReportCollection* reports, BNBinaryView* view, const char* title, const char* contents) { __debugbreak(); }
BINARYNINJACOREAPI void BNAddMarkdownReportToCollection(
	BNReportCollection* reports, BNBinaryView* view, const char* title, const char* contents, const char* plaintext) { __debugbreak(); }
BINARYNINJACOREAPI void BNAddHTMLReportToCollection(
	BNReportCollection* reports, BNBinaryView* view, const char* title, const char* contents, const char* plaintext) { __debugbreak(); }
BINARYNINJACOREAPI void BNAddGraphReportToCollection(
	BNReportCollection* reports, BNBinaryView* view, const char* title, BNFlowGraph* graph) { __debugbreak(); }
BINARYNINJACOREAPI void BNUpdateReportFlowGraph(BNReportCollection* reports, size_t i, BNFlowGraph* graph) { __debugbreak(); }

BINARYNINJACOREAPI bool BNIsGNU3MangledString(const char* mangledName) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNDemangleGNU3(BNArchitecture* arch, const char* mangledName, BNType** outType,
	char*** outVarName, size_t* outVarNameElements, const bool simplify) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNDemangleGNU3WithOptions(BNArchitecture* arch, const char* mangledName, BNType** outType,
	char*** outVarName, size_t* outVarNameElements, const BNBinaryView* const view) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeDemangledName(char*** name, size_t nameElements) { __debugbreak(); }

BINARYNINJACOREAPI bool BNDemangleLLVM(
	const char* mangledName, char*** outVarName, size_t* outVarNameElements, const bool simplify) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNDemangleLLVMWithOptions(
	const char* mangledName, char*** outVarName, size_t* outVarNameElements, const BNBinaryView* const view) { __debugbreak(); return {}; }

// Plugin repository APIs
BINARYNINJACOREAPI char** BNPluginGetApis(BNRepoPlugin* p, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI const char* BNPluginGetAuthor(BNRepoPlugin* p) { __debugbreak(); return {}; }
BINARYNINJACOREAPI const char* BNPluginGetDescription(BNRepoPlugin* p) { __debugbreak(); return {}; }
BINARYNINJACOREAPI const char* BNPluginGetLicenseText(BNRepoPlugin* p) { __debugbreak(); return {}; }
BINARYNINJACOREAPI const char* BNPluginGetLongdescription(BNRepoPlugin* p) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNVersionInfo BNPluginGetMinimumVersionInfo(BNRepoPlugin* p) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNVersionInfo BNPluginGetMaximumVersionInfo(BNRepoPlugin* p) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNVersionInfo BNParseVersionString(const char* v) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNVersionLessThan(const BNVersionInfo smaller, const BNVersionInfo larger) { __debugbreak(); return {}; }
BINARYNINJACOREAPI const char* BNPluginGetName(BNRepoPlugin* p) { __debugbreak(); return {}; }
BINARYNINJACOREAPI const char* BNPluginGetProjectUrl(BNRepoPlugin* p) { __debugbreak(); return {}; }
BINARYNINJACOREAPI const char* BNPluginGetPackageUrl(BNRepoPlugin* p) { __debugbreak(); return {}; }
BINARYNINJACOREAPI const char* BNPluginGetAuthorUrl(BNRepoPlugin* p) { __debugbreak(); return {}; }
BINARYNINJACOREAPI const char* BNPluginGetVersion(BNRepoPlugin* p) { __debugbreak(); return {}; }
BINARYNINJACOREAPI const char* BNPluginGetCommit(BNRepoPlugin* p) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreePluginTypes(BNPluginType* r) { __debugbreak(); }
BINARYNINJACOREAPI BNRepoPlugin* BNNewPluginReference(BNRepoPlugin* r) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreePlugin(BNRepoPlugin* plugin) { __debugbreak(); }
BINARYNINJACOREAPI const char* BNPluginGetPath(BNRepoPlugin* p) { __debugbreak(); return {}; }
BINARYNINJACOREAPI const char* BNPluginGetSubdir(BNRepoPlugin* p) { __debugbreak(); return {}; }
BINARYNINJACOREAPI const char* BNPluginGetDependencies(BNRepoPlugin* p) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNPluginIsInstalled(BNRepoPlugin* p) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNPluginIsEnabled(BNRepoPlugin* p) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNPluginStatus BNPluginGetPluginStatus(BNRepoPlugin* p) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNPluginType* BNPluginGetPluginTypes(BNRepoPlugin* p, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNPluginEnable(BNRepoPlugin* p, bool force) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNPluginDisable(BNRepoPlugin* p) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNPluginInstall(BNRepoPlugin* p) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNPluginInstallDependencies(BNRepoPlugin* p) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNPluginUninstall(BNRepoPlugin* p) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNPluginUpdate(BNRepoPlugin* p) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char** BNPluginGetPlatforms(BNRepoPlugin* p, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreePluginPlatforms(char** platforms, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI const char* BNPluginGetRepository(BNRepoPlugin* p) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNPluginIsBeingDeleted(BNRepoPlugin* p) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNPluginIsBeingUpdated(BNRepoPlugin* p) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNPluginIsRunning(BNRepoPlugin* p) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNPluginIsUpdatePending(BNRepoPlugin* p) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNPluginIsDisablePending(BNRepoPlugin* p) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNPluginIsDeletePending(BNRepoPlugin* p) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNPluginIsUpdateAvailable(BNRepoPlugin* p) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNPluginAreDependenciesBeingInstalled(BNRepoPlugin* p) { __debugbreak(); return {}; }

BINARYNINJACOREAPI char* BNPluginGetProjectData(BNRepoPlugin* p) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNPluginGetLastUpdate(BNRepoPlugin* p) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNRepository* BNNewRepositoryReference(BNRepository* r) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeRepository(BNRepository* r) { __debugbreak(); }
BINARYNINJACOREAPI char* BNRepositoryGetUrl(BNRepository* r) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNRepositoryGetRepoPath(BNRepository* r) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRepoPlugin** BNRepositoryGetPlugins(BNRepository* r, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeRepositoryPluginList(BNRepoPlugin** r) { __debugbreak(); }
BINARYNINJACOREAPI void BNRepositoryFreePluginDirectoryList(char** list, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI BNRepoPlugin* BNRepositoryGetPluginByPath(BNRepository* r, const char* pluginPath) { __debugbreak(); return {}; }
BINARYNINJACOREAPI const char* BNRepositoryGetPluginsPath(BNRepository* r) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNRepositoryManager* BNCreateRepositoryManager(const char* enabledPluginsPath) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRepositoryManager* BNNewRepositoryManagerReference(BNRepositoryManager* r) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeRepositoryManager(BNRepositoryManager* r) { __debugbreak(); }
BINARYNINJACOREAPI bool BNRepositoryManagerCheckForUpdates(BNRepositoryManager* r) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRepository** BNRepositoryManagerGetRepositories(BNRepositoryManager* r, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeRepositoryManagerRepositoriesList(BNRepository** r) { __debugbreak(); }
BINARYNINJACOREAPI bool BNRepositoryManagerAddRepository(BNRepositoryManager* r, const char* url, const char* repoPath) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRepository* BNRepositoryGetRepositoryByPath(BNRepositoryManager* r, const char* repoPath) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRepositoryManager* BNGetRepositoryManager(void) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNRepository* BNRepositoryManagerGetDefaultRepository(BNRepositoryManager* r) { __debugbreak(); return {}; }

// Components

BINARYNINJACOREAPI BNComponent* BNNewComponentReference(BNComponent* component) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeComponent(BNComponent* component) { __debugbreak(); }

BINARYNINJACOREAPI BNFunction** BNComponentGetContainedFunctions(BNComponent* component, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNComponent** BNComponentGetContainedComponents(BNComponent* component, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDataVariable* BNComponentGetContainedDataVariables(BNComponent* component, size_t* count) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNDataVariable* BNComponentGetReferencedDataVariables(BNComponent* component, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDataVariable* BNComponentGetReferencedDataVariablesRecursive(
	BNComponent* component, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNType** BNComponentGetReferencedTypes(BNComponent* component, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNType** BNComponentGetReferencedTypesRecursive(BNComponent* component, size_t* count) { __debugbreak(); return {}; }

BINARYNINJACOREAPI void BNFreeComponents(BNComponent** components, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI void BNComponentFreeReferencedTypes(BNType** types, size_t count) { __debugbreak(); }

BINARYNINJACOREAPI BNComponent* BNComponentGetParent(BNComponent* component) { __debugbreak(); return {}; }

BINARYNINJACOREAPI bool BNComponentContainsFunction(BNComponent* component, BNFunction* function) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNComponentContainsComponent(BNComponent* parent, BNComponent* component) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNComponentContainsDataVariable(BNComponent* component, uint64_t address) { __debugbreak(); return {}; }

BINARYNINJACOREAPI bool BNComponentAddFunctionReference(BNComponent* component, BNFunction* function) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNComponentAddComponent(BNComponent* parent, BNComponent* component) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNComponentAddDataVariable(BNComponent* component, uint64_t address) { __debugbreak(); return {}; }

BINARYNINJACOREAPI bool BNComponentRemoveComponent(BNComponent* component) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNComponentRemoveFunctionReference(BNComponent* component, BNFunction* function) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNComponentRemoveAllFunctions(BNComponent* component) { __debugbreak(); }
BINARYNINJACOREAPI bool BNComponentRemoveDataVariable(BNComponent* component, uint64_t address) { __debugbreak(); return {}; }

BINARYNINJACOREAPI void BNComponentAddAllMembersFromComponent(BNComponent* component, BNComponent* fromComponent) { __debugbreak(); }
BINARYNINJACOREAPI char* BNComponentGetGuid(BNComponent* component) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNComponentsEqual(BNComponent* a, BNComponent* b) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNComponentsNotEqual(BNComponent* a, BNComponent* b) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNComponentGetDisplayName(BNComponent* component) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNComponentGetOriginalName(BNComponent* component) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNComponentSetName(BNComponent* component, const char* name) { __debugbreak(); }
BINARYNINJACOREAPI BNBinaryView* BNComponentGetView(BNComponent* component) { __debugbreak(); return {}; }

// LLVM Services APIs
BINARYNINJACOREAPI void BNLlvmServicesInit(void) { __debugbreak(); }

BINARYNINJACOREAPI int BNLlvmServicesAssemble(const char* src, int dialect, const char* triplet, int codeModel,
	int relocMode, char** outBytes, int* outBytesLen, char** err, int* errLen) { __debugbreak(); return {}; }

BINARYNINJACOREAPI void BNLlvmServicesAssembleFree(char* outBytes, char* err) { __debugbreak(); }

// Filesystem functionality
BINARYNINJACOREAPI bool BNDeleteFile(const char* path) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNDeleteDirectory(const char* path) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNCreateDirectory(const char* path, bool createSubdirectories) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNPathExists(const char* path) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetParentPath(const char* path) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsPathDirectory(const char* path) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsPathRegularFile(const char* path) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNFileSize(const char* path, uint64_t* size) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRenameFile(const char* source, const char* dest) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNCopyFile(const char* source, const char* dest) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetFileName(const char* path) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetFileExtension(const char* path) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char** BNGetFilePathsInDirectory(const char* path, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNAppendPath(const char* path, const char* part) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreePath(char* path) { __debugbreak(); }

// Settings APIs
#include "core_settings.h"

// Metadata APIs

// Create Metadata of various types
BINARYNINJACOREAPI BNMetadata* BNNewMetadataReference(BNMetadata* data) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNMetadata* BNCreateMetadataBooleanData(bool data) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNMetadata* BNCreateMetadataStringData(const char* data) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNMetadata* BNCreateMetadataUnsignedIntegerData(uint64_t data) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNMetadata* BNCreateMetadataSignedIntegerData(int64_t data) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNMetadata* BNCreateMetadataDoubleData(double data) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNMetadata* BNCreateMetadataOfType(BNMetadataType type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNMetadata* BNCreateMetadataRawData(const uint8_t* data, size_t size) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNMetadata* BNCreateMetadataArray(BNMetadata** data, size_t size) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNMetadata* BNCreateMetadataValueStore(const char** keys, BNMetadata** values, size_t size) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNMetadata* BNCreateMetadataBooleanListData(bool* data, size_t size) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNMetadata* BNCreateMetadataUnsignedIntegerListData(uint64_t* data, size_t size) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNMetadata* BNCreateMetadataSignedIntegerListData(int64_t* data, size_t size) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNMetadata* BNCreateMetadataDoubleListData(double* data, size_t size) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNMetadata* BNCreateMetadataStringListData(const char** data, size_t size) { __debugbreak(); return {}; }

BINARYNINJACOREAPI bool BNMetadataIsEqual(BNMetadata* lhs, BNMetadata* rhs) { __debugbreak(); return {}; }

BINARYNINJACOREAPI bool BNMetadataSetValueForKey(BNMetadata* data, const char* key, BNMetadata* md) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNMetadata* BNMetadataGetForKey(BNMetadata* data, const char* key) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNMetadataArrayAppend(BNMetadata* data, BNMetadata* md) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNMetadataRemoveKey(BNMetadata* data, const char* key) { __debugbreak(); }
BINARYNINJACOREAPI size_t BNMetadataSize(BNMetadata* data) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNMetadata* BNMetadataGetForIndex(BNMetadata* data, size_t index) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNMetadataRemoveIndex(BNMetadata* data, size_t index) { __debugbreak(); }

BINARYNINJACOREAPI void BNFreeMetadataArray(BNMetadata** data) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeMetadataValueStore(BNMetadataValueStore* data) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeMetadata(BNMetadata* data) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeMetadataRaw(uint8_t* data) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeMetadataBooleanList(bool*, size_t) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeMetadataUnsignedIntegerList(uint64_t*, size_t) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeMetadataSignedIntegerList(int64_t*, size_t) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeMetadataDoubleList(double*, size_t) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeMetadataStringList(char**, size_t) { __debugbreak(); }

// Retrieve Structured Data
BINARYNINJACOREAPI bool BNMetadataGetBoolean(BNMetadata* data) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNMetadataGetString(BNMetadata* data) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNMetadataGetUnsignedInteger(BNMetadata* data) { __debugbreak(); return {}; }
BINARYNINJACOREAPI int64_t BNMetadataGetSignedInteger(BNMetadata* data) { __debugbreak(); return {}; }
BINARYNINJACOREAPI double BNMetadataGetDouble(BNMetadata* data) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool* BNMetadataGetBooleanList(BNMetadata* data, size_t*) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char** BNMetadataGetStringList(BNMetadata* data, size_t*) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t* BNMetadataGetUnsignedIntegerList(BNMetadata* data, size_t*) { __debugbreak(); return {}; }
BINARYNINJACOREAPI int64_t* BNMetadataGetSignedIntegerList(BNMetadata* data, size_t*) { __debugbreak(); return {}; }
BINARYNINJACOREAPI double* BNMetadataGetDoubleList(BNMetadata* data, size_t*) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint8_t* BNMetadataGetRaw(BNMetadata* data, size_t* size) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNMetadata** BNMetadataGetArray(BNMetadata* data, size_t* size) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNMetadataValueStore* BNMetadataGetValueStore(BNMetadata* data) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNMetadataGetJsonString(BNMetadata* data) { __debugbreak(); return {}; }

// Query type of Metadata
BINARYNINJACOREAPI BNMetadataType BNMetadataGetType(BNMetadata* data) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNMetadataIsBoolean(BNMetadata* data) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNMetadataIsString(BNMetadata* data) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNMetadataIsUnsignedInteger(BNMetadata* data) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNMetadataIsSignedInteger(BNMetadata* data) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNMetadataIsDouble(BNMetadata* data) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNMetadataIsBooleanList(BNMetadata* data) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNMetadataIsStringList(BNMetadata* data) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNMetadataIsUnsignedIntegerList(BNMetadata* data) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNMetadataIsSignedIntegerList(BNMetadata* data) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNMetadataIsDoubleList(BNMetadata* data) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNMetadataIsRaw(BNMetadata* data) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNMetadataIsArray(BNMetadata* data) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNMetadataIsKeyValueStore(BNMetadata* data) { __debugbreak(); return {}; }

// Store/Query structured data to/from a BinaryView
BINARYNINJACOREAPI void BNBinaryViewStoreMetadata(BNBinaryView* view, const char* key, BNMetadata* value, bool isAuto) { __debugbreak(); }
BINARYNINJACOREAPI BNMetadata* BNBinaryViewQueryMetadata(BNBinaryView* view, const char* key) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNBinaryViewRemoveMetadata(BNBinaryView* view, const char* key) { __debugbreak(); }
BINARYNINJACOREAPI BNMetadata* BNBinaryViewGetMetadata(BNBinaryView* view) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNMetadata* BNBinaryViewGetAutoMetadata(BNBinaryView* view) { __debugbreak(); return {}; }

BINARYNINJACOREAPI char** BNBinaryViewGetLoadSettingsTypeNames(BNBinaryView* view, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNSettings* BNBinaryViewGetLoadSettings(BNBinaryView* view, const char* typeName) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNBinaryViewSetLoadSettings(BNBinaryView* view, const char* typeName, BNSettings* settings) { __debugbreak(); }

// Relocation object methods
BINARYNINJACOREAPI BNRelocation* BNNewRelocationReference(BNRelocation* reloc) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeRelocation(BNRelocation* reloc) { __debugbreak(); }
BINARYNINJACOREAPI BNRelocationInfo BNRelocationGetInfo(BNRelocation* reloc) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNArchitecture* BNRelocationGetArchitecture(BNRelocation* reloc) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNRelocationGetTarget(BNRelocation* reloc) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNRelocationGetReloc(BNRelocation* reloc) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNSymbol* BNRelocationGetSymbol(BNRelocation* reloc) { __debugbreak(); return {}; }

// Segment object methods
BINARYNINJACOREAPI BNSegment* BNCreateSegment(
	uint64_t start, uint64_t length, uint64_t dataOffset, uint64_t dataLength, uint32_t flags, bool autoDefined) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNSegment* BNNewSegmentReference(BNSegment* seg) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeSegment(BNSegment* seg) { __debugbreak(); }
BINARYNINJACOREAPI uint64_t BNSegmentGetStart(BNSegment* segment) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNSegmentGetLength(BNSegment* segment) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNSegmentGetEnd(BNSegment* segment) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNSegmentGetDataEnd(BNSegment* segment) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNSegmentGetDataOffset(BNSegment* segment) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNSegmentGetDataLength(BNSegment* segment) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint32_t BNSegmentGetFlags(BNSegment* segment) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNSegmentIsAutoDefined(BNSegment* segment) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSegmentSetLength(BNSegment* segment, uint64_t length) { __debugbreak(); }
BINARYNINJACOREAPI void BNSegmentSetDataOffset(BNSegment* segment, uint64_t dataOffset) { __debugbreak(); }
BINARYNINJACOREAPI void BNSegmentSetDataLength(BNSegment* segment, uint64_t dataLength) { __debugbreak(); }
BINARYNINJACOREAPI void BNSegmentSetFlags(BNSegment* segment, uint32_t flags) { __debugbreak(); }

// Section object methods
BINARYNINJACOREAPI BNSection* BNNewSectionReference(BNSection* section) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeSection(BNSection* section) { __debugbreak(); }
BINARYNINJACOREAPI char* BNSectionGetName(BNSection* section) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNSectionGetType(BNSection* section) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNSectionGetStart(BNSection* section) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNSectionGetLength(BNSection* section) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNSectionGetEnd(BNSection* section) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNSectionGetLinkedSection(BNSection* section) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNSectionGetInfoSection(BNSection* section) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNSectionGetInfoData(BNSection* section) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNSectionGetAlign(BNSection* section) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNSectionGetEntrySize(BNSection* section) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNSectionSemantics BNSectionGetSemantics(BNSection* section) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNSectionIsAutoDefined(BNSection* section) { __debugbreak(); return {}; }

// Custom Data Render methods
BINARYNINJACOREAPI BNDataRenderer* BNCreateDataRenderer(BNCustomDataRenderer* renderer) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDataRenderer* BNNewDataRendererReference(BNDataRenderer* renderer) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsValidForData(
	void* ctxt, BNBinaryView* view, uint64_t addr, BNType* type, BNTypeContext* typeCtx, size_t ctxCount) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDisassemblyTextLine* BNGetLinesForData(void* ctxt, BNBinaryView* view, uint64_t addr, BNType* type,
	const BNInstructionTextToken* prefix, size_t prefixCount, size_t width, size_t* count, BNTypeContext* typeCtx,
	size_t ctxCount) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDisassemblyTextLine* BNRenderLinesForData(BNBinaryView* data, uint64_t addr, BNType* type,
	const BNInstructionTextToken* prefix, size_t prefixCount, size_t width, size_t* count, BNTypeContext* typeCtx,
	size_t ctxCount) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeDataRenderer(BNDataRenderer* renderer) { __debugbreak(); }
BINARYNINJACOREAPI BNDataRendererContainer* BNGetDataRendererContainer(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNRegisterGenericDataRenderer(BNDataRendererContainer* container, BNDataRenderer* renderer) { __debugbreak(); }
BINARYNINJACOREAPI void BNRegisterTypeSpecificDataRenderer(
	BNDataRendererContainer* container, BNDataRenderer* renderer) { __debugbreak(); }

BINARYNINJACOREAPI bool BNParseExpression(
	BNBinaryView* view, const char* expression, uint64_t* offset, uint64_t here, char** errorString) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeParseError(char* errorString) { __debugbreak(); }

BINARYNINJACOREAPI char* BNGetCurrentStackTraceString(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void* BNRegisterObjectRefDebugTrace(const char* typeName) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNUnregisterObjectRefDebugTrace(const char* typeName, void* trace) { __debugbreak(); }
BINARYNINJACOREAPI BNMemoryUsageInfo* BNGetMemoryUsageInfo(size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeMemoryUsageInfo(BNMemoryUsageInfo* info, size_t count) { __debugbreak(); }

BINARYNINJACOREAPI uint32_t BNGetAddressRenderedWidth(uint64_t addr) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNQualifiedName BNRustSimplifyStrToFQN(const char* const, bool) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNRustSimplifyStrToStr(const char* const) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNDebugInfoParser* BNRegisterDebugInfoParser(const char* name, bool (*isValid)(void*, BNBinaryView*),
	bool (*parseInfo)(void*, BNDebugInfo*, BNBinaryView*, BNBinaryView*, bool (*)(void*, size_t, size_t), void*),
	void* context) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNUnregisterDebugInfoParser(const char* rawName) { __debugbreak(); }
BINARYNINJACOREAPI BNDebugInfoParser* BNGetDebugInfoParserByName(const char* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDebugInfoParser** BNGetDebugInfoParsers(size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDebugInfoParser** BNGetDebugInfoParsersForView(BNBinaryView* view, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetDebugInfoParserName(BNDebugInfoParser* parser) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsDebugInfoParserValidForView(BNDebugInfoParser* parser, BNBinaryView* view) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDebugInfo* BNParseDebugInfo(BNDebugInfoParser* parser, BNBinaryView* view, BNBinaryView* debugFile,
	BNDebugInfo* existingDebugInfo, BNProgressFunction progress, void* progressCtxt) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDebugInfoParser* BNNewDebugInfoParserReference(BNDebugInfoParser* parser) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeDebugInfoParserReference(BNDebugInfoParser* parser) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeDebugInfoParserList(BNDebugInfoParser** parsers, size_t count) { __debugbreak(); }

BINARYNINJACOREAPI BNDebugInfo* BNNewDebugInfoReference(BNDebugInfo* debugInfo) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeDebugInfoReference(BNDebugInfo* debugInfo) { __debugbreak(); }
BINARYNINJACOREAPI char** BNGetDebugParserNames(BNDebugInfo* const debugInfo, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTypeContainer* BNGetDebugInfoTypeContainer(BNDebugInfo* debugInfo, const char* const parserName) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoveDebugParserInfo(BNDebugInfo* const debugInfo, const char* const parserName) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoveDebugParserTypes(BNDebugInfo* const debugInfo, const char* const parserName) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoveDebugParserFunctions(BNDebugInfo* const debugInfo, const char* const parserName) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoveDebugParserDataVariables(BNDebugInfo* const debugInfo, const char* const parserName) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNAddDebugType(BNDebugInfo* const debugInfo, const char* const name, const BNType* const type,
	const char** const components, size_t components_count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNNameAndType* BNGetDebugTypes(BNDebugInfo* const debugInfo, const char* const name, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNType* BNGetDebugTypeByName(
	BNDebugInfo* const debugInfo, const char* const parserName, const char* const typeName) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNNameAndType* BNGetDebugTypesByName(
	BNDebugInfo* const debugInfo, const char* const typeName, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoveDebugTypeByName(
	BNDebugInfo* const debugInfo, const char* const parserName, const char* typeName) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeDebugTypes(BNNameAndType* types, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI bool BNAddDebugFunction(BNDebugInfo* const debugInfo, BNDebugFunctionInfo* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDebugFunctionInfo* BNGetDebugFunctions(
	BNDebugInfo* const debugInfo, const char* const name, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoveDebugFunctionByIndex(
	BNDebugInfo* const debugInfo, const char* const parserName, const size_t index) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeDebugFunctions(BNDebugFunctionInfo* functions, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI bool BNAddDebugDataVariable(BNDebugInfo* const debugInfo, uint64_t address, const BNType* const type,
	const char* name, const char** const components, size_t components_count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNAddDebugDataVariableInfo(BNDebugInfo* const debugInfo, const BNDataVariableAndName* var) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDataVariableAndName* BNGetDebugDataVariables(
	BNDebugInfo* const debugInfo, const char* const name, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDataVariableAndName* BNGetDebugDataVariableByName(
	BNDebugInfo* const debugInfo, const char* const parserName, const char* const variableName) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDataVariableAndName* BNGetDebugDataVariableByAddress(
	BNDebugInfo* const debugInfo, const char* const parserName, const uint64_t address) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDataVariableAndName* BNGetDebugDataVariablesByName(
	BNDebugInfo* const debugInfo, const char* const variableName, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDataVariableAndNameAndDebugParser* BNGetDebugDataVariablesByAddress(
	BNDebugInfo* const debugInfo, const uint64_t address, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoveDebugDataVariableByAddress(
	BNDebugInfo* const debugInfo, const char* const parserName, const uint64_t address) { __debugbreak(); return {}; }

// Secrets providers
BINARYNINJACOREAPI BNSecretsProvider* BNRegisterSecretsProvider(
	const char* name, BNSecretsProviderCallbacks* callbacks) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNSecretsProvider** BNGetSecretsProviderList(size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeSecretsProviderList(BNSecretsProvider** providers) { __debugbreak(); }
BINARYNINJACOREAPI BNSecretsProvider* BNGetSecretsProviderByName(const char* name) { __debugbreak(); return {}; }

BINARYNINJACOREAPI char* BNGetSecretsProviderName(BNSecretsProvider* provider) { __debugbreak(); return {}; }

BINARYNINJACOREAPI bool BNSecretsProviderHasData(BNSecretsProvider* provider, const char* key) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetSecretsProviderData(BNSecretsProvider* provider, const char* key) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNStoreSecretsProviderData(BNSecretsProvider* provider, const char* key, const char* data) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNDeleteSecretsProviderData(BNSecretsProvider* provider, const char* key) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNSymbolQueue* BNCreateSymbolQueue(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNDestroySymbolQueue(BNSymbolQueue* queue) { __debugbreak(); }
BINARYNINJACOREAPI void BNAppendSymbolQueue(BNSymbolQueue* queue,
	void (*resolve)(void* ctxt, BNSymbol** symbol, BNType** type), void* resolveContext,
	void (*add)(void* ctxt, BNSymbol* symbol, BNType* type), void* addContext) { __debugbreak(); }
BINARYNINJACOREAPI void BNProcessSymbolQueue(BNSymbolQueue* queue) { __debugbreak(); }

BINARYNINJACOREAPI bool BNCoreEnumToString(const char* enumName, size_t value, char** result) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNCoreEnumFromString(const char* enumName, const char* value, size_t* result) { __debugbreak(); return {}; }

// Type Archives
BINARYNINJACOREAPI BNTypeArchive* BNNewTypeArchiveReference(BNTypeArchive* archive) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeTypeArchiveReference(BNTypeArchive* archive) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeTypeArchiveList(BNTypeArchive** archives, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI BNTypeArchive* BNOpenTypeArchive(const char* path) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTypeArchive* BNCreateTypeArchive(const char* path, BNPlatform* platform) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTypeArchive* BNCreateTypeArchiveWithId(const char* path, BNPlatform* platform, const char* id) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTypeArchive* BNLookupTypeArchiveById(const char* id) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNCloseTypeArchive(BNTypeArchive* archive) { __debugbreak(); }
BINARYNINJACOREAPI bool BNIsTypeArchive(const char* path) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetTypeArchiveId(BNTypeArchive* archive) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetTypeArchivePath(BNTypeArchive* archive) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNPlatform* BNGetTypeArchivePlatform(BNTypeArchive* archive) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetTypeArchiveCurrentSnapshotId(BNTypeArchive* archive) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetTypeArchiveCurrentSnapshot(BNTypeArchive* archive, const char* id) { __debugbreak(); }
BINARYNINJACOREAPI char** BNGetTypeArchiveAllSnapshotIds(BNTypeArchive* archive, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char** BNGetTypeArchiveSnapshotParentIds(BNTypeArchive* archive, const char* id, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char** BNGetTypeArchiveSnapshotChildIds(BNTypeArchive* archive, const char* id, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTypeContainer* BNGetTypeArchiveTypeContainer(BNTypeArchive* archive) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNAddTypeArchiveTypes(
	BNTypeArchive* archive, const BNQualifiedNameAndType* types, size_t count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRenameTypeArchiveType(BNTypeArchive* archive, const char* id, const BNQualifiedName* newName) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNDeleteTypeArchiveType(BNTypeArchive* archive, const char* id) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNType* BNGetTypeArchiveTypeById(BNTypeArchive* archive, const char* id, const char* snapshot) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNType* BNGetTypeArchiveTypeByName(
	BNTypeArchive* archive, const BNQualifiedName* name, const char* snapshot) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetTypeArchiveTypeId(
	BNTypeArchive* archive, const BNQualifiedName* name, const char* snapshot) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNQualifiedName BNGetTypeArchiveTypeName(
	BNTypeArchive* archive, const char* id, const char* snapshot) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNQualifiedNameTypeAndId* BNGetTypeArchiveTypes(
	BNTypeArchive* archive, const char* snapshot, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char** BNGetTypeArchiveTypeIds(BNTypeArchive* archive, const char* snapshot, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNQualifiedName* BNGetTypeArchiveTypeNames(
	BNTypeArchive* archive, const char* snapshot, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNGetTypeArchiveTypeNamesAndIds(
	BNTypeArchive* archive, const char* snapshot, BNQualifiedName** names, char*** ids, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char** BNGetTypeArchiveOutgoingDirectTypeReferences(
	BNTypeArchive* archive, const char* id, const char* snapshot, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char** BNGetTypeArchiveOutgoingRecursiveTypeReferences(
	BNTypeArchive* archive, const char* id, const char* snapshot, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char** BNGetTypeArchiveIncomingDirectTypeReferences(
	BNTypeArchive* archive, const char* id, const char* snapshot, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char** BNGetTypeArchiveIncomingRecursiveTypeReferences(
	BNTypeArchive* archive, const char* id, const char* snapshot, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNTypeArchiveNewSnapshotTransaction(BNTypeArchive* archive,
	bool (*func)(void* context, const char* id), void* context, const char* const* parents, size_t parentCount) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNRegisterTypeArchiveNotification(
	BNTypeArchive* archive, BNTypeArchiveNotification* notification) { __debugbreak(); }
BINARYNINJACOREAPI void BNUnregisterTypeArchiveNotification(
	BNTypeArchive* archive, BNTypeArchiveNotification* notification) { __debugbreak(); }
BINARYNINJACOREAPI bool BNTypeArchiveStoreMetadata(BNTypeArchive* archive, const char* key, BNMetadata* value) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNMetadata* BNTypeArchiveQueryMetadata(BNTypeArchive* archive, const char* key) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNTypeArchiveRemoveMetadata(BNTypeArchive* archive, const char* key) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDataBuffer* BNTypeArchiveSerializeSnapshot(BNTypeArchive* archive, const char* snapshot) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNTypeArchiveDeserializeSnapshot(BNTypeArchive* archive, BNDataBuffer* buffer) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNTypeArchiveMergeSnapshots(BNTypeArchive* archive, const char* baseSnapshot,
	const char* firstSnapshot, const char* secondSnapshot, const char* const* mergeConflictKeysIn,
	const char* const* mergeConflictValuesIn, size_t mergeConflictCountIn, char*** mergeConflictsOut,
	size_t* mergeConflictCountOut, char** result, BNProgressFunction progress, void* context) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNTypeArchive* BNBinaryViewAttachTypeArchive(BNBinaryView* view, const char* id, const char* path) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNBinaryViewDetachTypeArchive(BNBinaryView* view, const char* id) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTypeArchive* BNBinaryViewGetTypeArchive(BNBinaryView* view, const char* id) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNBinaryViewGetTypeArchives(BNBinaryView* view, char*** ids, char*** paths) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNBinaryViewGetTypeArchivePath(BNBinaryView* view, const char* id) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNBinaryViewGetTypeArchiveTypeNameList(BNBinaryView* view, BNQualifiedName** names) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNBinaryViewGetTypeArchiveTypeNames(
	BNBinaryView* view, BNQualifiedName* name, char*** archiveIds, char*** archiveTypeIds) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNBinaryViewGetAssociatedTypeArchiveTypes(
	BNBinaryView* view, char*** typeIds, char*** archiveIds, char*** archiveTypeIds) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNBinaryViewGetAssociatedTypesFromArchive(
	BNBinaryView* view, const char* archiveId, char*** typeIds, char*** archiveTypeIds) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNBinaryViewGetAssociatedTypeArchiveTypeTarget(
	BNBinaryView* view, const char* typeId, char** archiveId, char** archiveTypeId) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNBinaryViewGetAssociatedTypeArchiveTypeSource(
	BNBinaryView* view, const char* archiveId, const char* archiveTypeId, char** typeId) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNSyncStatus BNBinaryViewGetTypeArchiveSyncStatus(BNBinaryView* view, const char* typeId) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNBinaryViewDisassociateTypeArchiveType(BNBinaryView* view, const char* typeId) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNBinaryViewPullTypeArchiveTypes(BNBinaryView* view, const char* archiveId,
	const char* const* archiveTypeIds, size_t archiveTypeIdCount, char*** updatedArchiveTypeIds,
	char*** updatedAnalysisTypeIds, size_t* updatedTypeCount) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNBinaryViewPushTypeArchiveTypes(BNBinaryView* view, const char* archiveId,
	const char* const* typeIds, size_t typeIdCount, char*** updatedAnalysisTypeIds, char*** updatedArchiveTypeIds,
	size_t* updatedTypeCount) { __debugbreak(); return {}; }

// Base Address Detection
BINARYNINJACOREAPI BNBaseAddressDetection* BNCreateBaseAddressDetection(BNBinaryView* view) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNDetectBaseAddress(BNBaseAddressDetection* bad, BNBaseAddressDetectionSettings& settings) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetBaseAddressDetectionScores(BNBaseAddressDetection* bad,
	BNBaseAddressDetectionScore* scores, size_t count, BNBaseAddressDetectionConfidence* confidence,
	uint64_t* lastTestedBaseAddress) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBaseAddressDetectionReason* BNGetBaseAddressDetectionReasons(
	BNBaseAddressDetection* bad, uint64_t baseAddress, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeBaseAddressDetectionReasons(BNBaseAddressDetectionReason* reasons) { __debugbreak(); }
BINARYNINJACOREAPI void BNAbortBaseAddressDetection(BNBaseAddressDetection* bad) { __debugbreak(); }
BINARYNINJACOREAPI bool BNIsBaseAddressDetectionAborted(BNBaseAddressDetection* bad) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeBaseAddressDetection(BNBaseAddressDetection* bad) { __debugbreak(); }

// Collaboration
BINARYNINJACOREAPI BNRemote* BNCollaborationGetActiveRemote() { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNCollaborationSetActiveRemote(BNRemote* remote) { __debugbreak(); }
BINARYNINJACOREAPI bool BNCollaborationStoreDataInKeychain(
	const char* key, const char** dataKeys, const char** dataValues, size_t dataCount) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNCollaborationHasDataInKeychain(const char* key) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNCollaborationGetDataFromKeychain(const char* key, char*** foundKeys, char*** foundValues) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNCollaborationDeleteDataFromKeychain(const char* key) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNCollaborationLoadRemotes() { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRemote** BNCollaborationGetRemotes(size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRemote* BNCollaborationGetRemoteById(const char* remoteId) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRemote* BNCollaborationGetRemoteByAddress(const char* remoteAddress) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRemote* BNCollaborationGetRemoteByName(const char* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRemote* BNCollaborationCreateRemote(const char* name, const char* address) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNCollaborationRemoveRemote(BNRemote* remote) { __debugbreak(); }
BINARYNINJACOREAPI void BNCollaborationSaveRemotes() { __debugbreak(); }
BINARYNINJACOREAPI bool BNCollaborationSyncDatabase(BNDatabase* database, BNRemoteFile* file,
	BNCollaborationAnalysisConflictHandler conflictHandler, void* conflictHandlerCtxt, BNProgressFunction progress,
	void* progressCtxt, BNCollaborationNameChangesetFunction nameChangeset, void* nameChangesetCtxt) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNCollaborationSyncTypeArchive(BNTypeArchive* archive, BNRemoteFile* file,
	bool (*conflictHandler)(void*, BNTypeArchiveMergeConflict** conflicts, size_t conflictCount),
	void* conflictHandlerCtxt, BNProgressFunction progress, void* progressCtxt) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNCollaborationPushTypeArchive(
	BNTypeArchive* archive, BNRemoteFile* file, size_t* count, BNProgressFunction progress, void* progressCtxt) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNCollaborationPullTypeArchive(BNTypeArchive* archive, BNRemoteFile* file, size_t* count,
	bool (*conflictHandler)(void*, BNTypeArchiveMergeConflict** conflicts, size_t conflictCount),
	void* conflictHandlerCtxt, BNProgressFunction progress, void* progressCtxt) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNCollaborationIsCollaborationTypeArchive(BNTypeArchive* archive) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRemote* BNCollaborationGetRemoteForLocalTypeArchive(BNTypeArchive* archive) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRemoteProject* BNCollaborationGetRemoteProjectForLocalTypeArchive(BNTypeArchive* archive) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRemoteFile* BNCollaborationGetRemoteFileForLocalTypeArchive(BNTypeArchive* archive) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNCollaborationSnapshot* BNCollaborationGetRemoteSnapshotFromLocalTypeArchive(
	BNTypeArchive* archive, const char* snapshotId) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNCollaborationGetLocalSnapshotFromRemoteTypeArchive(
	BNCollaborationSnapshot* snapshot, BNTypeArchive* archive) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNCollaborationIsTypeArchiveSnapshotIgnored(BNTypeArchive* archive, const char* snapshot) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNCollaborationSetSnapshotAuthor(
	BNDatabase* database, BNSnapshot* snapshot, const char* author) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNCollaborationDefaultProjectPath(BNRemoteProject* project) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNCollaborationDefaultFilePath(BNRemoteFile* file) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNFileMetadata* BNCollaborationDownloadFile(
	BNRemoteFile* file, const char* dbPath, BNProgressFunction progress, void* progressContext) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRemoteFile* BNCollaborationUploadDatabase(BNFileMetadata* metadata, BNRemoteProject* project,
	BNRemoteFolder* folder, BNProgressFunction progress, void* progressContext,
	BNCollaborationNameChangesetFunction nameChangeset, void* nameChangesetContext) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNCollaborationIsCollaborationDatabase(BNDatabase* database) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNCollaborationGetRemoteForLocalDatabase(BNDatabase* database, BNRemote** result) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNCollaborationGetRemoteProjectForLocalDatabase(BNDatabase* database, BNRemoteProject** result) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNCollaborationGetRemoteFileForLocalDatabase(BNDatabase* database, BNRemoteFile** result) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNCollaborationAssignSnapshotMap(
	BNSnapshot* localSnapshot, BNCollaborationSnapshot* remoteSnapshot) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNCollaborationGetRemoteSnapshotFromLocal(
	BNSnapshot* snapshot, BNCollaborationSnapshot** result) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNCollaborationGetLocalSnapshotFromRemote(
	BNCollaborationSnapshot* snapshot, BNDatabase* database, BNSnapshot** result) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNCollaborationDownloadTypeArchive(
	BNRemoteFile* file, const char* dbPath, BNProgressFunction progress, void* progressContext, BNTypeArchive** result) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNCollaborationUploadTypeArchive(BNTypeArchive* archive, BNRemoteProject* project,
	BNRemoteFolder* folder, BNProgressFunction progress, void* progressContext, BNProjectFile* coreFile,
	BNRemoteFile** result) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNCollaborationDownloadDatabaseForFile(
	BNRemoteFile* file, const char* dbPath, bool force, BNProgressFunction progress, void* progressContext) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNSnapshot* BNCollaborationMergeSnapshots(BNSnapshot* first, BNSnapshot* second,
	BNCollaborationAnalysisConflictHandler conflictHandler, void* conflictHandlerCtxt, BNProgressFunction progress,
	void* progressContext) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNCollaborationPullDatabase(BNDatabase* database, BNRemoteFile* file, size_t* count,
	BNCollaborationAnalysisConflictHandler conflictHandler, void* conflictHandlerCtxt, BNProgressFunction progress,
	void* progressContext, BNCollaborationNameChangesetFunction nameChangeset, void* nameChangesetContext) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNCollaborationMergeDatabase(BNDatabase* database,
	BNCollaborationAnalysisConflictHandler conflictHandler, void* conflictHandlerCtxt, BNProgressFunction progress,
	void* progressContext) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNCollaborationPushDatabase(
	BNDatabase* database, BNRemoteFile* file, size_t* count, BNProgressFunction progress, void* progressContext) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNCollaborationDumpDatabase(BNDatabase* database) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNCollaborationIgnoreSnapshot(BNDatabase* database, BNSnapshot* snapshot) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNCollaborationIsSnapshotIgnored(BNDatabase* database, BNSnapshot* snapshot) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNCollaborationGetSnapshotAuthor(BNDatabase* database, BNSnapshot* snapshot, char** result) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNCollaborationFreeIdList(uint64_t* ids, size_t size) { __debugbreak(); }
BINARYNINJACOREAPI void BNCollaborationFreeSnapshotIdList(int64_t* ids, size_t size) { __debugbreak(); }

// LazyT
BINARYNINJACOREAPI BNCollaborationLazyT* BNCollaborationLazyTCreate(void* (*ctor)(void*), void* context) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void* BNCollaborationLazyTDereference(BNCollaborationLazyT* lazyT) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNCollaborationFreeLazyT(BNCollaborationLazyT* lazyT) { __debugbreak(); }

// Remote
BINARYNINJACOREAPI BNRemote* BNNewRemoteReference(BNRemote* remote) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeRemote(BNRemote* remote) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeRemoteList(BNRemote** remotes, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI char* BNRemoteGetUniqueId(BNRemote* remote) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNRemoteGetName(BNRemote* remote) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNRemoteGetAddress(BNRemote* remote) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoteHasLoadedMetadata(BNRemote* remote) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoteIsConnected(BNRemote* remote) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNRemoteGetUsername(BNRemote* remote) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNRemoteGetToken(BNRemote* remote) { __debugbreak(); return {}; }
BINARYNINJACOREAPI int BNRemoteGetServerVersion(BNRemote* remote) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNRemoteGetServerBuildId(BNRemote* remote) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoteGetAuthBackends(
	BNRemote* remote, char*** backendIds, char*** backendNames, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoteHasPulledProjects(BNRemote* remote) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoteHasPulledUsers(BNRemote* remote) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoteHasPulledGroups(BNRemote* remote) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoteIsAdmin(BNRemote* remote) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoteIsEnterprise(BNRemote* remote) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoteLoadMetadata(BNRemote* remote) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNRemoteRequestAuthenticationToken(
	BNRemote* remote, const char* username, const char* password) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoteConnect(BNRemote* remote, const char* username, const char* token) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoteDisconnect(BNRemote* remote) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRemoteProject** BNRemoteGetProjects(BNRemote* remote, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRemoteProject* BNRemoteGetProjectById(BNRemote* remote, const char* id) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRemoteProject* BNRemoteGetProjectByName(BNRemote* remote, const char* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemotePullProjects(BNRemote* remote, BNProgressFunction progress, void* progressContext) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRemoteProject* BNRemoteCreateProject(BNRemote* remote, const char* name, const char* description) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRemoteProject* BNRemoteImportLocalProject(
	BNRemote* remote, BNProject* localProject, bool (*progress)(void*, size_t, size_t), void* progressCtxt) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemotePushProject(BNRemote* remote, BNRemoteProject* project, const char** extraFieldKeys,
	const char** extraFieldValues, size_t extraFieldCount) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoteDeleteProject(BNRemote* remote, BNRemoteProject* project) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNCollaborationGroup** BNRemoteGetGroups(BNRemote* remote, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNCollaborationGroup* BNRemoteGetGroupById(BNRemote* remote, uint64_t id) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNCollaborationGroup* BNRemoteGetGroupByName(BNRemote* remote, const char* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoteSearchGroups(
	BNRemote* remote, const char* prefix, uint64_t** groupIds, char*** groupNames, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemotePullGroups(BNRemote* remote, BNProgressFunction progress, void* progressContext) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNCollaborationGroup* BNRemoteCreateGroup(
	BNRemote* remote, const char* name, const char** usernames, size_t usernameCount) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemotePushGroup(BNRemote* remote, BNCollaborationGroup* group, const char** extraFieldKeys,
	const char** extraFieldValues, size_t extraFieldCount) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoteDeleteGroup(BNRemote* remote, BNCollaborationGroup* group) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNCollaborationUser** BNRemoteGetUsers(BNRemote* remote, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNCollaborationUser* BNRemoteGetUserById(BNRemote* remote, const char* id) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNCollaborationUser* BNRemoteGetUserByUsername(BNRemote* remote, const char* username) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNCollaborationUser* BNRemoteGetCurrentUser(BNRemote* remote) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoteSearchUsers(
	BNRemote* remote, const char* prefix, char*** userIds, char*** usernames, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemotePullUsers(BNRemote* remote, BNProgressFunction progress, void* progressContext) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNCollaborationUser* BNRemoteCreateUser(BNRemote* remote, const char* username, const char* email,
	bool isActive, const char* password, const uint64_t* groupIds, size_t groupIdCount,
	const uint64_t* userPermissionIds, size_t userPermissionIdCount) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemotePushUser(BNRemote* remote, BNCollaborationUser* user, const char** extraFieldKeys,
	const char** extraFieldValues, size_t extraFieldCount) { __debugbreak(); return {}; }
BINARYNINJACOREAPI int BNRemoteRequest(BNRemote* remote, void* request, void* ret) { __debugbreak(); return {}; }

// CollabGroup
BINARYNINJACOREAPI BNCollaborationGroup* BNNewCollaborationGroupReference(BNCollaborationGroup* group) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeCollaborationGroup(BNCollaborationGroup* group) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeCollaborationGroupList(BNCollaborationGroup** group, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI BNRemote* BNCollaborationGroupGetRemote(BNCollaborationGroup* group) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNCollaborationGroupGetUrl(BNCollaborationGroup* group) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNCollaborationGroupGetId(BNCollaborationGroup* group) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNCollaborationGroupGetName(BNCollaborationGroup* group) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNCollaborationGroupSetName(BNCollaborationGroup* group, const char* name) { __debugbreak(); }
BINARYNINJACOREAPI bool BNCollaborationGroupGetUsers(
	BNCollaborationGroup* group, char*** userIds, char*** usernames, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNCollaborationGroupSetUsernames(BNCollaborationGroup* group, const char** names, size_t count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNCollaborationGroupContainsUser(BNCollaborationGroup* group, const char* username) { __debugbreak(); return {}; }

// CollabUser
BINARYNINJACOREAPI BNCollaborationUser* BNNewCollaborationUserReference(BNCollaborationUser* user) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeCollaborationUser(BNCollaborationUser* user) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeCollaborationUserList(BNCollaborationUser** users, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI BNRemote* BNCollaborationUserGetRemote(BNCollaborationUser* user) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNCollaborationUserGetUrl(BNCollaborationUser* user) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNCollaborationUserGetId(BNCollaborationUser* user) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNCollaborationUserGetUsername(BNCollaborationUser* user) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNCollaborationUserGetEmail(BNCollaborationUser* user) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNCollaborationUserGetLastLogin(BNCollaborationUser* user) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNCollaborationUserIsActive(BNCollaborationUser* user) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNCollaborationUserSetUsername(BNCollaborationUser* user, const char* username) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNCollaborationUserSetEmail(BNCollaborationUser* user, const char* email) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNCollaborationUserSetIsActive(BNCollaborationUser* user, bool isActive) { __debugbreak(); return {}; }

// RemoteProject
BINARYNINJACOREAPI BNRemoteProject* BNNewRemoteProjectReference(BNRemoteProject* project) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeRemoteProject(BNRemoteProject* project) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeRemoteProjectList(BNRemoteProject** projects, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI BNProject* BNRemoteProjectGetCoreProject(BNRemoteProject* project) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoteProjectIsOpen(BNRemoteProject* project) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoteProjectOpen(
	BNRemoteProject* project, bool (*progress)(void*, size_t, size_t), void* progressCtxt) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNRemoteProjectClose(BNRemoteProject* project) { __debugbreak(); }
BINARYNINJACOREAPI BNRemote* BNRemoteProjectGetRemote(BNRemoteProject* project) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNRemoteProjectGetUrl(BNRemoteProject* project) { __debugbreak(); return {}; }
BINARYNINJACOREAPI int64_t BNRemoteProjectGetCreated(BNRemoteProject* project) { __debugbreak(); return {}; }
BINARYNINJACOREAPI int64_t BNRemoteProjectGetLastModified(BNRemoteProject* project) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNRemoteProjectGetId(BNRemoteProject* project) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNRemoteProjectGetName(BNRemoteProject* project) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoteProjectSetName(BNRemoteProject* project, const char* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNRemoteProjectGetDescription(BNRemoteProject* project) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoteProjectSetDescription(BNRemoteProject* project, const char* description) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNRemoteProjectGetReceivedFileCount(BNRemoteProject* project) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNRemoteProjectGetReceivedFolderCount(BNRemoteProject* project) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoteProjectHasPulledFiles(BNRemoteProject* project) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoteProjectHasPulledFolders(BNRemoteProject* project) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoteProjectHasPulledGroupPermissions(BNRemoteProject* project) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoteProjectHasPulledUserPermissions(BNRemoteProject* project) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoteProjectIsAdmin(BNRemoteProject* project) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRemoteFile** BNRemoteProjectGetFiles(BNRemoteProject* project, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRemoteFile* BNRemoteProjectGetFileById(BNRemoteProject* project, const char* id) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRemoteFile* BNRemoteProjectGetFileByName(BNRemoteProject* project, const char* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoteProjectPullFiles(
	BNRemoteProject* project, BNProgressFunction progress, void* progressContext) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRemoteFile* BNRemoteProjectCreateFile(BNRemoteProject* project, const char* filename,
	uint8_t* contents, size_t contentsSize, const char* name, const char* description, BNRemoteFolder* folder,
	BNRemoteFileType type, BNProgressFunction progress, void* progressContext) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoteProjectPushFile(BNRemoteProject* project, BNRemoteFile* file,
	const char** extraFieldKeys, const char** extraFieldValues, size_t extraFieldCount) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoteProjectDeleteFile(BNRemoteProject* project, BNRemoteFile* file) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRemoteFolder** BNRemoteProjectGetFolders(BNRemoteProject* project, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRemoteFolder* BNRemoteProjectGetFolderById(BNRemoteProject* project, const char* id) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoteProjectPullFolders(
	BNRemoteProject* project, BNProgressFunction progress, void* progressContext) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRemoteFolder* BNRemoteProjectCreateFolder(BNRemoteProject* project, const char* name,
	const char* description, BNRemoteFolder* parent, BNProgressFunction progress, void* progressContext) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoteProjectPushFolder(BNRemoteProject* project, BNRemoteFolder* folder,
	const char** extraFieldKeys, const char** extraFieldValues, size_t extraFieldCount) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoteProjectDeleteFolder(BNRemoteProject* project, BNRemoteFolder* folder) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNCollaborationPermission** BNRemoteProjectGetGroupPermissions(
	BNRemoteProject* project, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNCollaborationPermission** BNRemoteProjectGetUserPermissions(
	BNRemoteProject* project, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNCollaborationPermission* BNRemoteProjectGetPermissionById(
	BNRemoteProject* project, const char* id) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoteProjectPullGroupPermissions(
	BNRemoteProject* project, BNProgressFunction progress, void* progressContext) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoteProjectPullUserPermissions(
	BNRemoteProject* project, BNProgressFunction progress, void* progressContext) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNCollaborationPermission* BNRemoteProjectCreateGroupPermission(BNRemoteProject* project,
	int64_t groupId, BNCollaborationPermissionLevel level, BNProgressFunction progress, void* progressContext) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNCollaborationPermission* BNRemoteProjectCreateUserPermission(BNRemoteProject* project,
	const char* userId, BNCollaborationPermissionLevel level, BNProgressFunction progress, void* progressContext) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoteProjectPushPermission(BNRemoteProject* project, BNCollaborationPermission* permission,
	const char** extraFieldKeys, const char** extraFieldValues, size_t extraFieldCount) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoteProjectDeletePermission(
	BNRemoteProject* project, BNCollaborationPermission* permission) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoteProjectCanUserView(BNRemoteProject* project, const char* username) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoteProjectCanUserEdit(BNRemoteProject* project, const char* username) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoteProjectCanUserAdmin(BNRemoteProject* project, const char* username) { __debugbreak(); return {}; }

// RemoteFile
BINARYNINJACOREAPI BNRemoteFile* BNNewRemoteFileReference(BNRemoteFile* file) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeRemoteFile(BNRemoteFile* file) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeRemoteFileList(BNRemoteFile** files, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI BNProjectFile* BNRemoteFileGetCoreFile(BNRemoteFile* file) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRemoteProject* BNRemoteFileGetProject(BNRemoteFile* file) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRemoteFolder* BNRemoteFileGetFolder(BNRemoteFile* file) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRemote* BNRemoteFileGetRemote(BNRemoteFile* file) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNRemoteFileGetUrl(BNRemoteFile* file) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNRemoteFileGetChatLogUrl(BNRemoteFile* file) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNRemoteFileGetUserPositionsUrl(BNRemoteFile* file) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNRemoteFileGetId(BNRemoteFile* file) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRemoteFileType BNRemoteFileGetType(BNRemoteFile* file) { __debugbreak(); return {}; }
BINARYNINJACOREAPI int64_t BNRemoteFileGetCreated(BNRemoteFile* file) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNRemoteFileGetCreatedBy(BNRemoteFile* file) { __debugbreak(); return {}; }
BINARYNINJACOREAPI int64_t BNRemoteFileGetLastModified(BNRemoteFile* file) { __debugbreak(); return {}; }
BINARYNINJACOREAPI int64_t BNRemoteFileGetLastSnapshot(BNRemoteFile* file) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNRemoteFileGetLastSnapshotBy(BNRemoteFile* file) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNRemoteFileGetLastSnapshotName(BNRemoteFile* file) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNRemoteFileGetHash(BNRemoteFile* file) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNRemoteFileGetName(BNRemoteFile* file) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNRemoteFileGetDescription(BNRemoteFile* file) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNRemoteFileGetMetadata(BNRemoteFile* file) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNRemoteFileGetSize(BNRemoteFile* file) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoteFileHasPulledSnapshots(BNRemoteFile* file) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoteFileSetName(BNRemoteFile* file, const char* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoteFileSetDescription(BNRemoteFile* file, const char* description) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoteFileSetFolder(BNRemoteFile* file, BNRemoteFolder* folder) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoteFileSetMetadata(BNRemoteFile* file, const char* metadata) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNCollaborationSnapshot** BNRemoteFileGetSnapshots(BNRemoteFile* file, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNCollaborationSnapshot* BNRemoteFileGetSnapshotById(BNRemoteFile* file, const char* id) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoteFilePullSnapshots(
	BNRemoteFile* file, BNProgressFunction progress, void* progressContext) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNCollaborationSnapshot* BNRemoteFileCreateSnapshot(BNRemoteFile* file, const char* name,
	uint8_t* contents, size_t contentsSize, uint8_t* analysisCacheContents, size_t analysisCacheContentsSize,
	uint8_t* fileContents, size_t fileContentsSize, const char** parentIds, size_t parentIdCount,
	BNProgressFunction progress, void* progressContext) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoteFileDeleteSnapshot(BNRemoteFile* file, BNCollaborationSnapshot* snapshot) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoteFileDownload(
	BNRemoteFile* file, BNProgressFunction progress, void* progressCtxt, uint8_t** data, size_t* size) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNRemoteFileRequestUserPositions(BNRemoteFile* file) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNRemoteFileRequestChatLog(BNRemoteFile* file) { __debugbreak(); return {}; }

// RemoteFolder
BINARYNINJACOREAPI BNRemoteFolder* BNNewRemoteFolderReference(BNRemoteFolder* folder) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeRemoteFolder(BNRemoteFolder* folder) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeRemoteFolderList(BNRemoteFolder** folders, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI BNProjectFolder* BNRemoteFolderGetCoreFolder(BNRemoteFolder* folder) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRemoteProject* BNRemoteFolderGetProject(BNRemoteFolder* folder) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRemote* BNRemoteFolderGetRemote(BNRemoteFolder* folder) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoteFolderGetParent(BNRemoteFolder* folder, BNRemoteFolder** parent) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNRemoteFolderGetUrl(BNRemoteFolder* folder) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNRemoteFolderGetId(BNRemoteFolder* folder) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoteFolderGetParentId(BNRemoteFolder* folder, char** result) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNRemoteFolderGetName(BNRemoteFolder* folder) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNRemoteFolderGetDescription(BNRemoteFolder* folder) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoteFolderSetName(BNRemoteFolder* folder, const char* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoteFolderSetDescription(BNRemoteFolder* folder, const char* description) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRemoteFolderSetParent(BNRemoteFolder* folder, BNRemoteFolder* parent) { __debugbreak(); return {}; }

// CollabPermission
BINARYNINJACOREAPI BNCollaborationPermission* BNNewCollaborationPermissionReference(
	BNCollaborationPermission* permission) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeCollaborationPermission(BNCollaborationPermission* permission) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeCollaborationPermissionList(BNCollaborationPermission** permissions, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI BNRemoteProject* BNCollaborationPermissionGetProject(BNCollaborationPermission* permission) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRemote* BNCollaborationPermissionGetRemote(BNCollaborationPermission* permission) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNCollaborationPermissionGetId(BNCollaborationPermission* permission) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNCollaborationPermissionGetUrl(BNCollaborationPermission* permission) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNCollaborationPermissionGetGroupId(BNCollaborationPermission* permission) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNCollaborationPermissionGetGroupName(BNCollaborationPermission* permission) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNCollaborationPermissionGetUserId(BNCollaborationPermission* permission) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNCollaborationPermissionGetUsername(BNCollaborationPermission* permission) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNCollaborationPermissionLevel BNCollaborationPermissionGetLevel(
	BNCollaborationPermission* permission) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNCollaborationPermissionSetLevel(
	BNCollaborationPermission* permission, BNCollaborationPermissionLevel level) { __debugbreak(); }
BINARYNINJACOREAPI bool BNCollaborationPermissionCanView(BNCollaborationPermission* permission) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNCollaborationPermissionCanEdit(BNCollaborationPermission* permission) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNCollaborationPermissionCanAdmin(BNCollaborationPermission* permission) { __debugbreak(); return {}; }

// AnalysisMergeConflict
BINARYNINJACOREAPI BNAnalysisMergeConflict* BNNewAnalysisMergeConflictReference(BNAnalysisMergeConflict* conflict) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeAnalysisMergeConflict(BNAnalysisMergeConflict* conflict) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeAnalysisMergeConflictList(BNAnalysisMergeConflict** conflicts, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI BNDatabase* BNAnalysisMergeConflictGetDatabase(BNAnalysisMergeConflict* conflict) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNAnalysisMergeConflictGetType(BNAnalysisMergeConflict* conflict) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNAnalysisMergeConflictGetKey(BNAnalysisMergeConflict* conflict) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNMergeConflictDataType BNAnalysisMergeConflictGetDataType(BNAnalysisMergeConflict* conflict) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNAnalysisMergeConflictGetBase(BNAnalysisMergeConflict* conflict) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNAnalysisMergeConflictGetFirst(BNAnalysisMergeConflict* conflict) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNAnalysisMergeConflictGetSecond(BNAnalysisMergeConflict* conflict) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNFileMetadata* BNAnalysisMergeConflictGetBaseFile(BNAnalysisMergeConflict* conflict) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNFileMetadata* BNAnalysisMergeConflictGetFirstFile(BNAnalysisMergeConflict* conflict) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNFileMetadata* BNAnalysisMergeConflictGetSecondFile(BNAnalysisMergeConflict* conflict) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNSnapshot* BNAnalysisMergeConflictGetBaseSnapshot(BNAnalysisMergeConflict* conflict) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNSnapshot* BNAnalysisMergeConflictGetFirstSnapshot(BNAnalysisMergeConflict* conflict) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNSnapshot* BNAnalysisMergeConflictGetSecondSnapshot(BNAnalysisMergeConflict* conflict) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNAnalysisMergeConflictGetPathItemString(BNAnalysisMergeConflict* conflict, const char* path) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void* BNAnalysisMergeConflictGetPathItem(BNAnalysisMergeConflict* conflict, const char* path) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNAnalysisMergeConflictSuccess(BNAnalysisMergeConflict* conflict, const char* value) { __debugbreak(); return {}; }

// TypeArchiveMergeConflict
BINARYNINJACOREAPI BNTypeArchiveMergeConflict* BNNewTypeArchiveMergeConflictReference(
	BNTypeArchiveMergeConflict* conflict) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeTypeArchiveMergeConflict(BNTypeArchiveMergeConflict* conflict) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeTypeArchiveMergeConflictList(BNTypeArchiveMergeConflict** conflicts, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI BNTypeArchive* BNTypeArchiveMergeConflictGetTypeArchive(BNTypeArchiveMergeConflict* conflict) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNTypeArchiveMergeConflictGetTypeId(BNTypeArchiveMergeConflict* conflict) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNTypeArchiveMergeConflictGetBaseSnapshotId(BNTypeArchiveMergeConflict* conflict) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNTypeArchiveMergeConflictGetFirstSnapshotId(BNTypeArchiveMergeConflict* conflict) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNTypeArchiveMergeConflictGetSecondSnapshotId(BNTypeArchiveMergeConflict* conflict) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNTypeArchiveMergeConflictSuccess(BNTypeArchiveMergeConflict* conflict, const char* value) { __debugbreak(); return {}; }

// CollabSnapshot
BINARYNINJACOREAPI BNCollaborationSnapshot* BNNewCollaborationSnapshotReference(BNCollaborationSnapshot* snapshot) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeCollaborationSnapshot(BNCollaborationSnapshot* snapshot) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeCollaborationSnapshotList(BNCollaborationSnapshot** snapshots, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI BNRemoteFile* BNCollaborationSnapshotGetFile(BNCollaborationSnapshot* snapshot) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRemoteProject* BNCollaborationSnapshotGetProject(BNCollaborationSnapshot* snapshot) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRemote* BNCollaborationSnapshotGetRemote(BNCollaborationSnapshot* snapshot) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNCollaborationSnapshotGetUrl(BNCollaborationSnapshot* snapshot) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNCollaborationSnapshotGetId(BNCollaborationSnapshot* snapshot) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNCollaborationSnapshotGetName(BNCollaborationSnapshot* snapshot) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNCollaborationSnapshotGetAuthor(BNCollaborationSnapshot* snapshot) { __debugbreak(); return {}; }
BINARYNINJACOREAPI int64_t BNCollaborationSnapshotGetCreated(BNCollaborationSnapshot* snapshot) { __debugbreak(); return {}; }
BINARYNINJACOREAPI int64_t BNCollaborationSnapshotGetLastModified(BNCollaborationSnapshot* snapshot) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNCollaborationSnapshotGetHash(BNCollaborationSnapshot* snapshot) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNCollaborationSnapshotGetSnapshotFileHash(BNCollaborationSnapshot* snapshot) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNCollaborationSnapshotHasPulledUndoEntries(BNCollaborationSnapshot* snapshot) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNCollaborationSnapshotIsFinalized(BNCollaborationSnapshot* snapshot) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char** BNCollaborationSnapshotGetParentIds(BNCollaborationSnapshot* snapshot, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char** BNCollaborationSnapshotGetChildIds(BNCollaborationSnapshot* snapshot, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNCollaborationSnapshotGetAnalysisCacheBuildId(BNCollaborationSnapshot* snapshot) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNCollaborationSnapshotGetTitle(BNCollaborationSnapshot* snapshot) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNCollaborationSnapshotGetDescription(BNCollaborationSnapshot* snapshot) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNCollaborationSnapshotGetAuthorUsername(BNCollaborationSnapshot* snapshot) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNCollaborationSnapshot** BNCollaborationSnapshotGetParents(
	BNCollaborationSnapshot* snapshot, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNCollaborationSnapshot** BNCollaborationSnapshotGetChildren(
	BNCollaborationSnapshot* snapshot, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNCollaborationUndoEntry** BNCollaborationSnapshotGetUndoEntries(
	BNCollaborationSnapshot* snapshot, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNCollaborationUndoEntry* BNCollaborationSnapshotGetUndoEntryById(
	BNCollaborationSnapshot* snapshot, uint64_t id) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNCollaborationSnapshotPullUndoEntries(
	BNCollaborationSnapshot* snapshot, BNProgressFunction progress, void* progressContext) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNCollaborationUndoEntry* BNCollaborationSnapshotCreateUndoEntry(
	BNCollaborationSnapshot* snapshot, bool hasParent, uint64_t parent, const char* data) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNCollaborationSnapshotFinalize(BNCollaborationSnapshot* snapshot) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNCollaborationSnapshotDownloadSnapshotFile(BNCollaborationSnapshot* snapshot,
	BNProgressFunction progress, void* progressContext, uint8_t** data, size_t* size) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNCollaborationSnapshotDownload(BNCollaborationSnapshot* snapshot, BNProgressFunction progress,
	void* progressContext, uint8_t** data, size_t* size) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNCollaborationSnapshotDownloadAnalysisCache(BNCollaborationSnapshot* snapshot,
	BNProgressFunction progress, void* progressContext, uint8_t** data, size_t* size) { __debugbreak(); return {}; }

// CollabUndoEntry
BINARYNINJACOREAPI BNCollaborationUndoEntry* BNNewCollaborationUndoEntryReference(BNCollaborationUndoEntry* entry) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeCollaborationUndoEntry(BNCollaborationUndoEntry* entry) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeCollaborationUndoEntryList(BNCollaborationUndoEntry** entries, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI BNCollaborationSnapshot* BNCollaborationUndoEntryGetSnapshot(BNCollaborationUndoEntry* undoEntry) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRemoteFile* BNCollaborationUndoEntryGetFile(BNCollaborationUndoEntry* undoEntry) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRemoteProject* BNCollaborationUndoEntryGetProject(BNCollaborationUndoEntry* undoEntry) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRemote* BNCollaborationUndoEntryGetRemote(BNCollaborationUndoEntry* undoEntry) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNCollaborationUndoEntryGetUrl(BNCollaborationUndoEntry* undoEntry) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNCollaborationUndoEntryGetId(BNCollaborationUndoEntry* undoEntry) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNCollaborationUndoEntryGetParentId(BNCollaborationUndoEntry* undoEntry, uint64_t* parentId) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNCollaborationUndoEntryGetData(BNCollaborationUndoEntry* undoEntry, char** data) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNCollaborationUndoEntry* BNCollaborationUndoEntryGetParent(BNCollaborationUndoEntry* undoEntry) { __debugbreak(); return {}; }

// CollabChangeset
BINARYNINJACOREAPI BNCollaborationChangeset* BNNewCollaborationChangesetReference(BNCollaborationChangeset* changeset) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeCollaborationChangeset(BNCollaborationChangeset* changeset) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeCollaborationChangesetList(BNCollaborationChangeset** changesets, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI BNDatabase* BNCollaborationChangesetGetDatabase(BNCollaborationChangeset* changeset) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRemoteFile* BNCollaborationChangesetGetFile(BNCollaborationChangeset* changeset) { __debugbreak(); return {}; }
BINARYNINJACOREAPI int64_t* BNCollaborationChangesetGetSnapshotIds(BNCollaborationChangeset* changeset, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNCollaborationUser* BNCollaborationChangesetGetAuthor(BNCollaborationChangeset* changeset) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNCollaborationChangesetGetName(BNCollaborationChangeset* changeset) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNCollaborationChangesetSetName(BNCollaborationChangeset* changeset, const char* name) { __debugbreak(); return {}; }