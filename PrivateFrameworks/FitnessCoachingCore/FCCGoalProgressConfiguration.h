//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 138.2.0.0.0
//
#ifndef FCCGoalProgressConfiguration_h
#define FCCGoalProgressConfiguration_h
@import Foundation;

#include "FCCAlmostThereConfiguration.h"
#include "FCCAtypicalDayConfiguration.h"
#include "FCCCompletionOffTrackConfiguration.h"
#include "FCCDataSerializable-Protocol.h"

@class NSDate, NSString;

@interface FCCGoalProgressConfiguration : NSObject<FCCDataSerializable>

@property (readonly, nonatomic) long long minimumNumberOfActiveDays;
@property (readonly, nonatomic) NSDate *userStartOfDay;
@property (readonly, nonatomic) NSDate *userEndOfDay;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) FCCAlmostThereConfiguration *almostThereConfiguration;
@property (readonly, nonatomic) FCCAtypicalDayConfiguration *atypicalDayConfiguration;
@property (readonly, nonatomic) FCCCompletionOffTrackConfiguration *completionOffTrackConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMinimumNumberOfActiveDays:(long long)days userStartOfDay:(id)day userEndOfDay:(id)day expirationDate:(id)date almostThereConfiguration:(id)configuration atypicalDayConfiguration:(id)configuration completionOffTrackConfiguration:(id)configuration;
- (id)initWithProtobuf:(id)protobuf;
- (id)protobuf;
- (id)initWithTransportData:(id)data;
- (id)transportData;
@end

#endif /* FCCGoalProgressConfiguration_h */
