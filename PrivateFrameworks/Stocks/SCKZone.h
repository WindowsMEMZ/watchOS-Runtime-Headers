//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 101.0.0.0.0
//
#ifndef SCKZone_h
#define SCKZone_h
@import Foundation;

#include "SCKZoneDiff.h"
#include "SCKZoneSchema.h"
#include "SCKZoneStore-Protocol.h"

@class NSArray;

@interface SCKZone : NSObject

@property (retain, nonatomic) NSObject<SCKZoneStore> *store;
@property (readonly, nonatomic) SCKZoneSchema *schema;
@property (readonly, copy, nonatomic) NSArray *clientRecords;
@property (readonly, copy, nonatomic) SCKZoneDiff *clientDiff;
@property (readonly, nonatomic) BOOL needsFirstSync;
@property (readonly, nonatomic) BOOL dirty;

/* instance methods */
- (id)initWithSchema:(id)schema store:(id)store;
- (BOOL)isDirty;
@end

#endif /* SCKZone_h */
