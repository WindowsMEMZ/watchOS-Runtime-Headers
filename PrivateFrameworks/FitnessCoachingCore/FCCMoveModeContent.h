//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 138.2.0.0.0
//
#ifndef FCCMoveModeContent_h
#define FCCMoveModeContent_h
@import Foundation;

#include "FCCDataSerializable-Protocol.h"

@class NSDate, NSString;

@interface FCCMoveModeContent : NSObject<FCCDataSerializable>

@property (readonly, nonatomic) long long notificationType;
@property (readonly, nonatomic) long long nextActivityMoveMode;
@property (readonly, nonatomic) NSDate *nextActivityMoveModeStartDate;
@property (readonly, nonatomic) double delay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithNotificationType:(long long)type nextActivityMoveMode:(long long)mode nextActivityMoveModeStartDate:(id)date delay:(double)delay;
- (id)initWithTransportData:(id)data;
- (id)transportData;
@end

#endif /* FCCMoveModeContent_h */
