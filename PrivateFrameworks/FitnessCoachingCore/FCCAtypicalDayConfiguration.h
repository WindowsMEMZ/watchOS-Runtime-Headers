//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 138.2.0.0.0
//
#ifndef FCCAtypicalDayConfiguration_h
#define FCCAtypicalDayConfiguration_h
@import Foundation;

#include "FCCPercentageOfDayRule.h"

@class NSArray, NSString;

@interface FCCAtypicalDayConfiguration : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) double minimumAheadPercentage;
@property (readonly, nonatomic) double minimumBehindPercentage;
@property (readonly, nonatomic) FCCPercentageOfDayRule *percentageOfDayRule;
@property (readonly, copy, nonatomic) NSArray *allowedGoalTypes;

/* instance methods */
- (id)initWithIdentifier:(id)identifier minimumAheadPercentage:(double)percentage minimumBehindPercentage:(double)percentage percentageOfDayRule:(id)rule allowedGoalTypes:(id)types;
- (id)description;
- (id)initWithProtobuf:(id)protobuf;
- (id)protobuf;
- (id)initWithTransportData:(id)data;
- (id)transportData;
@end

#endif /* FCCAtypicalDayConfiguration_h */
