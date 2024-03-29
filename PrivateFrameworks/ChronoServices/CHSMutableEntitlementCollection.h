//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 402.23.0.0.0
//
#ifndef CHSMutableEntitlementCollection_h
#define CHSMutableEntitlementCollection_h
@import Foundation;

#include "CHSEntitlementCollection.h"

@interface CHSMutableEntitlementCollection : CHSEntitlementCollection

@property (@dynamic, nonatomic) BOOL usesEventService;
@property (@dynamic, nonatomic) BOOL canOpenSystemURLs;
@property (@dynamic, nonatomic) BOOL canKeepAlive;
@property (@dynamic, nonatomic) BOOL invalidatesOnStorefrontChange;

@end

#endif /* CHSMutableEntitlementCollection_h */
