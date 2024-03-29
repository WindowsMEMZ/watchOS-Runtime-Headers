//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 143.7.11.0.0
//
#ifndef _TtC10FinanceKit27ManagedNetworkResponseEvent_h
#define _TtC10FinanceKit27ManagedNetworkResponseEvent_h
@import Foundation;

#include "NSManagedObject.h"

@class NSData, NSDate, NSString, NSURL, NSUUID;

@interface FinanceKit.ManagedNetworkResponseEvent : NSManagedObject // (Swift)

@property (nonatomic, @dynamic, copy) NSDate *eventDate;
@property (nonatomic, @dynamic, copy) NSURL *eventURL;
@property (nonatomic, @dynamic, copy) NSUUID *traceID;
@property (nonatomic, @dynamic, copy) NSData *responseBody;
@property (nonatomic, @dynamic) short responseStatusCode;
@property (nonatomic, @dynamic, copy) NSString *responseHeaders;

/* instance methods */
- (id)initWithEntity:(id)entity insertIntoManagedObjectContext:(id)context;
@end

#endif /* _TtC10FinanceKit27ManagedNetworkResponseEvent_h */
