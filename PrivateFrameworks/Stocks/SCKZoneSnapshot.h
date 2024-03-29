//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 101.0.0.0.0
//
#ifndef SCKZoneSnapshot_h
#define SCKZoneSnapshot_h
@import Foundation;

#include "SCKZoneReading-Protocol.h"
#include "SCKZoneSchema.h"

@class NSArray;

@interface SCKZoneSnapshot : NSObject<SCKZoneReading>

@property (retain, nonatomic) SCKZoneSchema *zoneSchema;
@property (copy, nonatomic) NSArray *records;
@property (readonly, copy, nonatomic) NSArray *allRecords;

/* instance methods */
- (id)initWithZoneSchema:(id)schema records:(id)records;
- (BOOL)isEqualToSnapshot:(id)snapshot;
- (id)recordsOfType:(id)type;
- (id)recordOfType:(id)type;
- (id)recordOfType:(id)type passingTest:(id /* block */)test;
- (id)recordWithName:(id)name;
- (id)descriptionOfContents;
@end

#endif /* SCKZoneSnapshot_h */
