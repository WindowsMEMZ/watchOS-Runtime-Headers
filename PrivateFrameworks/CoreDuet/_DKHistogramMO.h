//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _DKHistogramMO_h
#define _DKHistogramMO_h
@import Foundation;

#include "NSManagedObject.h"

@class NSDate, NSNumber, NSSet, NSString;

@interface _DKHistogramMO : NSManagedObject

@property (copy, @dynamic, nonatomic) NSString *deviceIdentifier;
@property (copy, @dynamic, nonatomic) NSDate *endDate;
@property (copy, @dynamic, nonatomic) NSDate *startDate;
@property (copy, @dynamic, nonatomic) NSString *streamName;
@property (copy, @dynamic, nonatomic) NSNumber *streamTypeCode;
@property (copy, @dynamic, nonatomic) NSString *identifier;
@property (copy, @dynamic, nonatomic) NSString *customIdentifier;
@property (retain, @dynamic, nonatomic) NSSet *value;

/* class methods */
+ (id)fetchRequest;
@end

#endif /* _DKHistogramMO_h */
