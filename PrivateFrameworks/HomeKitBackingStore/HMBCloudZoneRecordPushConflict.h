//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMBCloudZoneRecordPushConflict_h
#define HMBCloudZoneRecordPushConflict_h
@import Foundation;

#include "HMFObject.h"

@class CKRecord, CKRecordID;

@interface HMBCloudZoneRecordPushConflict : HMFObject

@property (readonly) CKRecordID *recordID;
@property (readonly) CKRecord *clientRecord;
@property (readonly) CKRecord *serverRecord;
@property (readonly) CKRecord *ancestorRecord;

/* instance methods */
- (id)initWithRecordID:(id)id error:(id)error;
- (id)initWithRecordID:(id)id clientRecord:(id)record serverRecord:(id)record ancestorRecord:(id)record;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)attributeDescriptions;
@end

#endif /* HMBCloudZoneRecordPushConflict_h */
