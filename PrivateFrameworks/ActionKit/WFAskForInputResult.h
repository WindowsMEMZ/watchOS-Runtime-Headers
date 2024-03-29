//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFAskForInputResult_h
#define WFAskForInputResult_h
@import Foundation;

#include "INObject.h"

@class NSDateComponents, NSNumber, NSString, NSURL;

@interface WFAskForInputResult : INObject

@property (@dynamic, nonatomic) long long type;
@property (copy, @dynamic, nonatomic) NSString *stringValue;
@property (copy, @dynamic, nonatomic) NSNumber *numberValue;
@property (copy, @dynamic, nonatomic) NSURL *urlValue;
@property (copy, @dynamic, nonatomic) NSDateComponents *dateValue;
@property (copy, @dynamic, nonatomic) NSDateComponents *timeValue;
@property (copy, @dynamic, nonatomic) NSDateComponents *dateAndTimeValue;

@end

#endif /* WFAskForInputResult_h */
