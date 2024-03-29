//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFStateDumpBuilderContext_h
#define HFStateDumpBuilderContext_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"

@class NSDictionary, NSSet, NSString;

@interface HFStateDumpBuilderContext : NSObject<NSCopying, NSMutableCopying>

@property (nonatomic) unsigned long long detailLevel;
@property (nonatomic) unsigned long long outputStyle;
@property (copy, nonatomic) NSSet *objectsToExclude;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) NSString *multilinePrefix;
@property (nonatomic) BOOL excludePrimaryID;
@property (nonatomic) BOOL includeVolatileObjects;

/* class methods */
+ (id)contextWithDetailLevel:(unsigned long long)level;

/* instance methods */
- (id)init;
- (id)initWithDetailLevel:(unsigned long long)level;
- (id)initWithContext:(id)context;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (id)copyWithDetailLevel:(unsigned long long)level;
- (id)copyWithOutputStyle:(unsigned long long)style;
- (unsigned long long)derivedOutputStyle;
@end

#endif /* HFStateDumpBuilderContext_h */
