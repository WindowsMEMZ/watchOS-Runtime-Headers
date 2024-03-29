//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef REElementGroup_h
#define REElementGroup_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "REAutomaticExportedInterface-Protocol.h"

@class NSString;

@interface REElementGroup : NSObject<REAutomaticExportedInterface, NSCopying>

@property (readonly, nonatomic) NSString *groupIdentifier;
@property (nonatomic) unsigned long long behavior;
@property (nonatomic) long long maxElementCount;

/* class methods */
+ (id)topElementGroupWithIdentifier:(id)identifier;
+ (id)adjoiningElementGroupWithIdentifier:(id)identifier;

/* instance methods */
- (id)initWithGroupIdentifier:(id)identifier;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* REElementGroup_h */
