// dllmain.cpp : DLL 애플리케이션의 진입점을 정의합니다.
#include "pch.h"

#define DECL_EXPORT extern "C" __declspec(dllexport)

#include <unordered_map>
using namespace std;

unordered_map<int, int> OFFSET_NAME_IDX_MAP;
unordered_map<int, int> OFFSET_NAME_IDX_MAP_2;

DECL_EXPORT void AddRootFileOffsetAndNameIdx(int offset, int name_idx) {
	OFFSET_NAME_IDX_MAP.insert(make_pair(offset, name_idx));
}

DECL_EXPORT int GetRootFileNameIdxFromOffset(int offset) {
	auto itr = OFFSET_NAME_IDX_MAP.find(offset);

	if (itr != OFFSET_NAME_IDX_MAP.end()) {
		return itr->second;
	}
	else {
		return -1;
	}
}

DECL_EXPORT void AddArchiveFileOffsetAndNameIdx(int offset, int name_idx) {
	OFFSET_NAME_IDX_MAP_2.insert(make_pair(offset, name_idx));
}

DECL_EXPORT int GetArchiveFileNameIdxFromOffset(int offset) {
	auto itr = OFFSET_NAME_IDX_MAP_2.find(offset);

	if (itr != OFFSET_NAME_IDX_MAP_2.end()) {
		return itr->second;
	}
	else {
		return -1;
	}
}

DECL_EXPORT void ClearArchiveFileOffsetAndNameIdx() {
	OFFSET_NAME_IDX_MAP_2.clear();
}