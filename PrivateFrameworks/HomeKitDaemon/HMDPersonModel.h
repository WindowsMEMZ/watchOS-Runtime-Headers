//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDPersonModel_h
#define HMDPersonModel_h
@import Foundation;

#include "HMBModel.h"

@class NSData, NSSet, NSString;

@interface HMDPersonModel : HMBModel

@property (retain, @dynamic) NSData *personLinksData;
@property (retain, @dynamic) NSString *name;
@property (copy) NSSet *personLinks;

/* class methods */
+ (id)hmbProperties;
+ (id)sentinelParentUUID;

/* instance methods */
- (id)initWithPerson:(id)person;
- (id)createPerson;
@end

#endif /* HMDPersonModel_h */
