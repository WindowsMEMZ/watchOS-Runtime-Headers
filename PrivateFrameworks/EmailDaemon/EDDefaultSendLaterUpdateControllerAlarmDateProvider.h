//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EDDefaultSendLaterUpdateControllerAlarmDateProvider_h
#define EDDefaultSendLaterUpdateControllerAlarmDateProvider_h
@import Foundation;

#include "EDSendLaterUpdateControllerAlarmDateProvider-Protocol.h"

@class NSDate, NSString;

@interface EDDefaultSendLaterUpdateControllerAlarmDateProvider : NSObject<EDSendLaterUpdateControllerAlarmDateProvider>

@property (copy, nonatomic) NSDate *nextDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

#endif /* EDDefaultSendLaterUpdateControllerAlarmDateProvider_h */
