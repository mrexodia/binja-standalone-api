// Settings APIs
#include "core_ref.h"
#include <binaryninjacore.h>

#include <map>
#include "json/json.h"

struct BNSettings : BNRef
{
	std::unique_ptr<Json::CharReader> reader;
	std::map<std::string, std::string> aliases;
	std::map<std::string, Json::Value> settings;
	std::map<std::string, Json::Value> state;

	BNSettings()
	{
		Json::CharReaderBuilder builder;
		reader.reset(builder.newCharReader());
	}

	bool RegisterSetting(const char* key, const char* properties)
	{
		// deserialize the properties string into a Json::Value
		Json::Value root;
		std::string errors;
		if (!reader->parse(properties, properties + strlen(properties), &root, &errors))
		{
			printf("Failed to parse settings properties: %s\n", errors.c_str());
			return false;
		}
		for (auto alias : root.get("aliases", Json::Value(Json::arrayValue)))
		{
			aliases[alias.asString()] = key;
		}
		settings[key] = root;
		state[key] = root.get("default", "");
		return true;
	}

	bool GetBool(const char* key, BNBinaryView* view, BNSettingsScope* scope)
	{
		auto it = state.find(key);
		if (it == state.end())
			return false;
		return it->second.isBool() ? it->second.asBool() : false;
	}

	std::string GetString(const char* key, BNBinaryView* view, BNSettingsScope* scope)
	{
		auto it = state.find(key);
		if (it == state.end())
			return nullptr;
		return it->second.asString();
	}
};

BINARYNINJACOREAPI BNSettings* BNCreateSettings(const char* schemaId) { return new BNSettings(); }
BINARYNINJACOREAPI BNSettings* BNNewSettingsReference(BNSettings* settings) { return BNRef::Add(settings); }
BINARYNINJACOREAPI void BNFreeSettings(BNSettings* settings) { BNRef::Release(settings); }
BINARYNINJACOREAPI bool BNLoadSettingsFile(
	BNSettings* settings, const char* fileName, BNSettingsScope scope, BNBinaryView* view) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSettingsSetResourceId(BNSettings* settings, const char* resourceId) { __debugbreak(); }
BINARYNINJACOREAPI bool BNSettingsRegisterGroup(BNSettings* settings, const char* group, const char* title) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNSettingsRegisterSetting(BNSettings* settings, const char* key, const char* properties) { return settings->RegisterSetting(key, properties); }
BINARYNINJACOREAPI bool BNSettingsContains(BNSettings* settings, const char* key) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNSettingsIsEmpty(BNSettings* settings) { __debugbreak(); return {}; }
BINARYNINJACOREAPI const char** BNSettingsKeysList(BNSettings* settings, size_t* inoutSize) { __debugbreak(); return {}; }
BINARYNINJACOREAPI const char** BNSettingsQueryPropertyStringList(
	BNSettings* settings, const char* key, const char* property, size_t* inoutSize) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNSettingsUpdateProperty(BNSettings* settings, const char* key, const char* property) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNSettingsUpdateBoolProperty(
	BNSettings* settings, const char* key, const char* property, bool value) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNSettingsUpdateDoubleProperty(
	BNSettings* settings, const char* key, const char* property, double value) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNSettingsUpdateInt64Property(
	BNSettings* settings, const char* key, const char* property, int64_t value) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNSettingsUpdateUInt64Property(
	BNSettings* settings, const char* key, const char* property, uint64_t value) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNSettingsUpdateStringProperty(
	BNSettings* settings, const char* key, const char* property, const char* value) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNSettingsUpdateStringListProperty(
	BNSettings* settings, const char* key, const char* property, const char** value, size_t size) { __debugbreak(); return {}; }

BINARYNINJACOREAPI bool BNSettingsDeserializeSchema(
	BNSettings* settings, const char* schema, BNSettingsScope scope, bool merge) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNSettingsSerializeSchema(BNSettings* settings) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNDeserializeSettings(
	BNSettings* settings, const char* contents, BNBinaryView* view, BNSettingsScope scope) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNSerializeSettings(BNSettings* settings, BNBinaryView* view, BNSettingsScope scope) { __debugbreak(); return {}; }

BINARYNINJACOREAPI bool BNSettingsReset(
	BNSettings* settings, const char* key, BNBinaryView* view, BNSettingsScope scope) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNSettingsResetAll(
	BNSettings* settings, BNBinaryView* view, BNSettingsScope scope, bool schemaOnly) { __debugbreak(); return {}; }

BINARYNINJACOREAPI bool BNSettingsGetBool(
	BNSettings* settings, const char* key, BNBinaryView* view, BNSettingsScope* scope) { return settings->GetBool(key, view, scope); }
BINARYNINJACOREAPI double BNSettingsGetDouble(
	BNSettings* settings, const char* key, BNBinaryView* view, BNSettingsScope* scope) { __debugbreak(); return {}; }
BINARYNINJACOREAPI int64_t BNSettingsGetInt64(
	BNSettings* settings, const char* key, BNBinaryView* view, BNSettingsScope* scope) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNSettingsGetUInt64(
	BNSettings* settings, const char* key, BNBinaryView* view, BNSettingsScope* scope) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNSettingsGetString(
	BNSettings* settings, const char* key, BNBinaryView* view, BNSettingsScope* scope)
{
	return BNAllocString(settings->GetString(key, view, scope).c_str());
}
BINARYNINJACOREAPI const char** BNSettingsGetStringList(
	BNSettings* settings, const char* key, BNBinaryView* view, BNSettingsScope* scope, size_t* inoutSize) { __debugbreak(); return {}; }

BINARYNINJACOREAPI char* BNSettingsGetJson(
	BNSettings* settings, const char* key, BNBinaryView* view, BNSettingsScope* scope) { __debugbreak(); return {}; }

BINARYNINJACOREAPI bool BNSettingsSetBool(
	BNSettings* settings, BNBinaryView* view, BNSettingsScope scope, const char* key, bool value) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNSettingsSetDouble(
	BNSettings* settings, BNBinaryView* view, BNSettingsScope scope, const char* key, double value) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNSettingsSetInt64(
	BNSettings* settings, BNBinaryView* view, BNSettingsScope scope, const char* key, int64_t value) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNSettingsSetUInt64(
	BNSettings* settings, BNBinaryView* view, BNSettingsScope scope, const char* key, uint64_t value) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNSettingsSetString(
	BNSettings* settings, BNBinaryView* view, BNSettingsScope scope, const char* key, const char* value) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNSettingsSetStringList(
	BNSettings* settings, BNBinaryView* view, BNSettingsScope scope, const char* key, const char** value, size_t size) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNSettingsSetJson(
	BNSettings* settings, BNBinaryView* view, BNSettingsScope scope, const char* key, const char* value) { __debugbreak(); return {}; }