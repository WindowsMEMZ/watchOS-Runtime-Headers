//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMBLocalSQLContextRowZone_h
#define HMBLocalSQLContextRowZone_h
@import Foundation;

#include "HMFObject.h"
#include "HMBLocalZoneID-Protocol.h"

@class NSUUID;

@interface HMBLocalSQLContextRowZone : HMFObject

@property (nonatomic) unsigned long long zoneRow;
@property (retain, nonatomic) NSObject<HMBLocalZoneID> *identifier;
@property (retain, nonatomic) NSUUID *replication;

/* instance methods */
- (id)init;
- (id)initWithZoneRow:(unsigned long long)row;
- (id)initWithZoneRow:(unsigned long long)row name:(id)name token:(id)token;
- (id)debugDescription;
- (id)description;
@end

#endif /* HMBLocalSQLContextRowZone_h */
