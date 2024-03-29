//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDUpdateMissingAssetStatusOperation_h
#define CKDUpdateMissingAssetStatusOperation_h
@import Foundation;

#include "CKDDatabaseOperation.h"
#include "CKDFetchRecordsOperation.h"
#include "CKDModifyRecordsOperation.h"

@class CKRecord, CKRecordID, NSArray;

@interface CKDUpdateMissingAssetStatusOperation : CKDDatabaseOperation

@property (@dynamic, nonatomic) unsigned long long state;
@property (retain, nonatomic) CKRecordID *repairRecordID;
@property (nonatomic) BOOL recovered;
@property (nonatomic) BOOL isPackage;
@property (retain, nonatomic) NSArray *assetSizes;
@property (retain, nonatomic) NSArray *assetPutReceipts;
@property (retain, nonatomic) CKDFetchRecordsOperation *fetchOperation;
@property (retain, nonatomic) CKDModifyRecordsOperation *modifyOperation;
@property (retain, nonatomic) CKRecord *record;

/* class methods */
+ (id)nameForState:(unsigned long long)state;

/* instance methods */
- (id)initWithOperationInfo:(id)info container:(id)container;
- (id)activityCreate;
- (BOOL)makeStateTransition;
- (int)operationType;
- (void)_updateMissingAssetStatus;
- (void)main;
@end

#endif /* CKDUpdateMissingAssetStatusOperation_h */
