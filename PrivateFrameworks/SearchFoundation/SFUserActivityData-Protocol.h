//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef SFUserActivityData_Protocol_h
#define SFUserActivityData_Protocol_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "SFUserActivityData-Protocol.h"

@class NSArray, NSData, NSDictionary, NSString;

@protocol SFUserActivityData <NSObject>

@property (copy, nonatomic) NSString *activityType;
@property (copy, nonatomic) NSArray *userInfo;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;

@end

#endif /* SFUserActivityData_Protocol_h */
