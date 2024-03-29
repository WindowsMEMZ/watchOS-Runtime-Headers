//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 138.2.0.0.0
//
#ifndef FCCNotificationSuppressionRequest_h
#define FCCNotificationSuppressionRequest_h
@import Foundation;

#include "FCCDataSerializable-Protocol.h"

@class NSDate, NSString;

@interface FCCNotificationSuppressionRequest : NSObject<FCCDataSerializable>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithIdentifier:(id)identifier;
- (id)initWithIdentifier:(id)identifier expirationDate:(id)date;
- (id)initWithTransportData:(id)data;
- (id)transportData;
@end

#endif /* FCCNotificationSuppressionRequest_h */
