//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 523.0.0.0.0
//
#ifndef WFAQIScaleATMO_h
#define WFAQIScaleATMO_h
@import Foundation;

#include "WFAQIScale-Protocol.h"

@class NSString;

@interface WFAQIScaleATMO : NSObject<WFAQIScale>

@property (readonly, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)scaleCategoryForCategoryIndex:(unsigned long long)index localizedCategoryDescription:(id)description;
@end

#endif /* WFAQIScaleATMO_h */
