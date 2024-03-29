//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 523.0.0.0.0
//
#ifndef WFAQIScale_Protocol_h
#define WFAQIScale_Protocol_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "WFAQIScaleGradient.h"

@class NSArray, NSString;

@protocol WFAQIScale <NSObject>

@property (readonly, nonatomic) NSString *name;

/* instance methods */
- (id)scaleCategoryForCategoryIndex:(unsigned long long)index localizedCategoryDescription:(id)description;
@end

#endif /* WFAQIScale_Protocol_h */
