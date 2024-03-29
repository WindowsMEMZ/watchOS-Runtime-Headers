//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 138.2.0.0.0
//
#ifndef FCCTimeOfDayRule_h
#define FCCTimeOfDayRule_h
@import Foundation;

#include "FCCDataSerializable-Protocol.h"

@class NSString;

@interface FCCTimeOfDayRule : NSObject<FCCDataSerializable>

@property (readonly, nonatomic) double minimumDayDuration;
@property (readonly, nonatomic) double secondsBeforeEndOfDay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMinimumDayDuration:(double)duration secondsBeforeEndOfDay:(double)day;
- (id)initWithProtobuf:(id)protobuf;
- (id)protobuf;
- (id)initWithTransportData:(id)data;
- (id)transportData;
@end

#endif /* FCCTimeOfDayRule_h */
