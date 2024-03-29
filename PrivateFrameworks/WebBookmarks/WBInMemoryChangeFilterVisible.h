//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBInMemoryChangeFilterVisible_h
#define WBInMemoryChangeFilterVisible_h
@import Foundation;

#include "WebBookmarkInMemoryChangeFilter-Protocol.h"

@class NSString;

@interface WBInMemoryChangeFilterVisible : NSObject<WebBookmarkInMemoryChangeFilter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (BOOL)isBookmarkVisible:(id)visible;
- (id)bookmarkIDsModifiedInMemoryNotPassingFilterFromChangeSet:(id)set inFolder:(int)folder;
- (id)bookmarkIDsModifiedInMemoryPassingFilterFromChangeSet:(id)set inFolder:(int)folder;
- (BOOL)shouldIncludeBookmarkAddedInMemory:(id)memory;
@end

#endif /* WBInMemoryChangeFilterVisible_h */
