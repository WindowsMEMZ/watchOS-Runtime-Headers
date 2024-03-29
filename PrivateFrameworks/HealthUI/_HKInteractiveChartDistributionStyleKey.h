//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef _HKInteractiveChartDistributionStyleKey_h
#define _HKInteractiveChartDistributionStyleKey_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSString;

@interface _HKInteractiveChartDistributionStyleKey : NSObject<NSCopying>

@property (nonatomic) long long style;
@property (nonatomic) long long timeScope;
@property (retain, nonatomic) NSString *predicateName;

/* instance methods */
- (id)initWithDistributionStyle:(long long)style timeScope:(long long)scope predicateName:(id)name;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* _HKInteractiveChartDistributionStyleKey_h */
