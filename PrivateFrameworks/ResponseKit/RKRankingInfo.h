//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 200.0.0.0.0
//
#ifndef RKRankingInfo_h
#define RKRankingInfo_h
@import Foundation;

#include "NSManagedObject.h"

@class NSDate, NSString;

@interface RKRankingInfo : NSManagedObject

@property (@dynamic, nonatomic) long long responseId;
@property (retain, @dynamic, nonatomic) NSString *message;
@property (retain, @dynamic, nonatomic) NSString *response;
@property (retain, @dynamic, nonatomic) NSString *category;
@property (retain, @dynamic, nonatomic) NSString *recipientId;
@property (@dynamic, nonatomic) unsigned long long source;
@property (@dynamic, nonatomic) unsigned long long inputMethod;
@property (retain, @dynamic, nonatomic) NSString *rankedList;
@property (retain, @dynamic, nonatomic) NSDate *timestamp;

@end

#endif /* RKRankingInfo_h */
