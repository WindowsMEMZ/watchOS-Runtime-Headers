//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SACarPlaySupportedOEMAppIdList_h
#define SACarPlaySupportedOEMAppIdList_h
@import Foundation;

#include "SADomainObject.h"

@class NSArray;

@interface SACarPlaySupportedOEMAppIdList : SADomainObject

@property (copy, nonatomic) NSArray *appIds;

/* class methods */
+ (id)carPlaySupportedOEMAppIdList;
+ (id)carPlaySupportedOEMAppIdListWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
@end

#endif /* SACarPlaySupportedOEMAppIdList_h */
