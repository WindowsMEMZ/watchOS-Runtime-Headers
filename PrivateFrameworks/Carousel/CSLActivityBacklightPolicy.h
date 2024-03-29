//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLActivityBacklightPolicy_h
#define CSLActivityBacklightPolicy_h
@import Foundation;

#include "CSLActivityPolicy-Protocol.h"

@class NSString;

@interface CSLActivityBacklightPolicy : NSObject<CSLActivityPolicy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)initialize;

/* instance methods */
- (BOOL)appliesToActivity:(id)activity;
- (id)responseForActivity:(id)activity withState:(id)state;
@end

#endif /* CSLActivityBacklightPolicy_h */
