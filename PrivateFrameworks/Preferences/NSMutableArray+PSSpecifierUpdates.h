//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5215.3.9.0.0
//
#ifndef NSMutableArray_PSSpecifierUpdates_h
#define NSMutableArray_PSSpecifierUpdates_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "PSSpecifierGroupIndex.h"
#include "PSSpecifierUpdateContext.h"

@class NSArray, NSMutableArray;

@interface NSMutableArray (PSSpecifierUpdates)
/* instance methods */
- (void)ps_addPossibleObject:(id)object;
- (void)ps_insertObject:(id)object afterObject:(id)object;
- (void)ps_insertObjectsFromArray:(id)array afterObject:(id)object;
- (void)ps_addSpecifier:(id)specifier toGroup:(id)group;
- (void)ps_addSpecifiers:(id)specifiers toGroup:(id)group;
- (void)ps_addGroup:(id)group afterGroup:(id)group;
- (void)performSpecifierUpdatesUsingBlock:(id /* block */)block;
@end

#endif /* NSMutableArray_PSSpecifierUpdates_h */
