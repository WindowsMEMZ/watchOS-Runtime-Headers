//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef DNDAppConfigurationTargetContentIdentifierPrefixMO_h
#define DNDAppConfigurationTargetContentIdentifierPrefixMO_h
@import Foundation;

#include "DNDPerAppSettingsMO.h"

@class NSString;

@interface DNDAppConfigurationTargetContentIdentifierPrefixMO : DNDPerAppSettingsMO

@property (copy, @dynamic, nonatomic) NSString *targetContentIdentifierPrefix;

/* class methods */
+ (id)fetchRequest;
@end

#endif /* DNDAppConfigurationTargetContentIdentifierPrefixMO_h */
