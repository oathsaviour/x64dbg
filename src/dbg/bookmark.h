#pragma once

#include "_global.h"

struct BOOKMARKSINFO
{
    char mod[MAX_MODULE_SIZE];
    duint addr;
    bool manual;
};

bool BookmarkSet(duint Address, bool Manual);
bool BookmarkGet(duint Address);
bool BookmarkDelete(duint Address);
void BookmarkDelRange(duint Start, duint End);
void BookmarkCacheSave(JSON Root);
void BookmarkCacheLoad(JSON Root);
bool BookmarkEnum(BOOKMARKSINFO* List, size_t* Size);
void BookmarkClear();