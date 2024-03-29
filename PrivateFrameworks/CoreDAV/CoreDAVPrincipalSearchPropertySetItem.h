//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1221.1.1.2.0
//
#ifndef CoreDAVPrincipalSearchPropertySetItem_h
#define CoreDAVPrincipalSearchPropertySetItem_h
@import Foundation;

#include "CoreDAVItem.h"

@class NSMutableSet;

@interface CoreDAVPrincipalSearchPropertySetItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *principalSearchProperties;

/* class methods */
+ (id)copyParseRules;

/* instance methods */
- (id)init;
- (id)description;
- (void)addPrincipalSearchProperty:(id)property;
@end

#endif /* CoreDAVPrincipalSearchPropertySetItem_h */
