//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMMNamedGroupSpecifier_h
#define HMMNamedGroupSpecifier_h
@import Foundation;

#include "HMMGroupSpecifier-Protocol.h"

@class NSDictionary, NSString;

@interface HMMNamedGroupSpecifier : NSObject<HMMGroupSpecifier>

@property (readonly, nonatomic) NSString *groupName;
@property (readonly, nonatomic) NSDictionary *descriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)type;

/* instance methods */
- (id)initWithGroupName:(id)name;
- (id)coreDataGroupUsingContext:(id)context;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToGroupNameSpecifier:(id)specifier;
@end

#endif /* HMMNamedGroupSpecifier_h */
