//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDFetchArchivedRecordsURLRequest_h
#define CKDFetchArchivedRecordsURLRequest_h
@import Foundation;

#include "CKDURLRequest.h"
#include "CKDURLRequestPipelining-Protocol.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSSet, NSString;

@interface CKDFetchArchivedRecordsURLRequest : CKDURLRequest<CKDURLRequestPipelining>

@property (copy, nonatomic) NSArray *recordZoneIDs;
@property (retain, nonatomic) NSDictionary *configurationsByRecordZoneID;
@property (retain, nonatomic) NSMutableDictionary *zoneIDsByRequestOperationUUID;
@property (retain, nonatomic) NSMutableDictionary *requestResultsByRecordZoneID;
@property (retain, nonatomic) NSMutableDictionary *nodeErrorsByZoneID;
@property (nonatomic) BOOL shouldFetchAssetContent;
@property (retain, nonatomic) NSSet *desiredAssetKeys;
@property (copy, nonatomic) id /* block */ recordFetchedBlock;
@property (readonly, nonatomic) NSDictionary *resultsByRecordZoneID;
@property (readonly, nonatomic) NSDictionary *zoneErrorsByZoneID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithOperation:(id)operation recordZoneIDs:(id)ids configurationsByRecordZoneID:(id)id;
- (void)fillOutEquivalencyPropertiesBuilder:(id)builder;
- (void)fillOutRequestProperties:(id)properties;
- (id)zoneIDsToLock;
- (id)requestOperationClasses;
- (id)generateRequestOperations;
- (id)_handleRecords:(id)records;
- (id)requestDidParseProtobufObject:(id)object;
- (void)requestDidParseNodeFailure:(id)failure;
@end

#endif /* CKDFetchArchivedRecordsURLRequest_h */
