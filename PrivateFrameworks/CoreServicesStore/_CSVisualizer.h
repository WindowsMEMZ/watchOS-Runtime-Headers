//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1299.2.3.1.0
//
#ifndef _CSVisualizer_h
#define _CSVisualizer_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSMutableDictionary, NSRecursiveLock;

@interface _CSVisualizer : NSObject<NSCopying> {
  /* instance variables */
  NSMutableDictionary *_functions;
  NSRecursiveLock *_lock;
}

@property (readonly) struct __CSStore * store;
@property (readonly) NSMutableDictionary *userInfo;

/* class methods */
+ (id)new;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfValueForTitle:(id)title inDescription:(id)description;
+ (void)enumerateValuesForTitlesInDescription:(id)description block:(id /* block */)block;
+ (id)predicateForSearchingDescriptionWithString:(id)string error:(id *)error;
+ (void)breakDownTable:(const struct Table { struct Unit { unsigned int x0 :30; unsigned int x1 :2; unsigned int x2; char x3[0] } x0; char x1[48] unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; } *)table inStore:(const void *)store buffer:(char *)buffer;
+ (void)enumerateReferencesToUnitsInUnitDescription:(id)description block:(id /* block */)block;
+ (BOOL)unitDescription:(id)description referencesUnit:(unsigned int)unit inTable:(unsigned int)table;
+ (id)URLForUnit:(unsigned int)unit inTable:(unsigned int)table;
+ (BOOL)getUnit:(unsigned int *)unit inTable:(unsigned int *)table fromURL:(id)url;

/* instance methods */
- (id)initWithStore:(struct __CSStore *)store useStandardTableHandlers:(BOOL)handlers;
- (id /* block */)handlerForTable:(unsigned int)table;
- (void)setHandler:(id /* block */)handler forTable:(unsigned int)table;
- (void)setStandardTableHandlers;
- (id)init;
- (id)initWithStore:(struct __CSStore *)store;
- (id)initWithStore:(struct __CSStore *)store useStandardTableFunctions:(BOOL)functions;
- (void)dealloc;
- (id)functionsForTableNoCopy:(unsigned int)copy;
- (id)functionsForTable:(unsigned int)table;
- (void)setFunctions:(id)functions forTable:(unsigned int)table;
- (void)setStandardTableFunctions;
- (id)summaryOfUnit:(unsigned int)unit inTable:(unsigned int)table;
- (id)descriptionOfUnit:(unsigned int)unit inTable:(unsigned int)table;
- (id)breakDownUsage;
- (void)enumerateReferencesToUnit:(unsigned int)unit inTable:(unsigned int)table block:(id /* block */)block;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* _CSVisualizer_h */
