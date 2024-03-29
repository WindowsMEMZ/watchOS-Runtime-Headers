//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDCloudSyncCachedZone_h
#define HDCloudSyncCachedZone_h
@import Foundation;

#include "HDCloudSyncRepository.h"
#include "HDCloudSyncZoneIdentifier.h"

@class HDAssertion;

@interface HDCloudSyncCachedZone : NSObject {
  /* instance variables */
  HDAssertion *_accessibilityAssertion;
}

@property (readonly, weak, nonatomic) HDCloudSyncRepository *repository;
@property (readonly, copy, nonatomic) HDCloudSyncZoneIdentifier *zoneIdentifier;
@property (readonly, nonatomic) long long zoneType;

/* instance methods */
- (id)initForZoneIdentifier:(id)identifier repository:(id)repository accessibilityAssertion:(id)assertion;
- (id)serverChangeTokenWithError:(id *)error;
- (BOOL)setServerChangeToken:(id)token fetchComplete:(BOOL)complete error:(id *)error;
- (BOOL)deleteZoneWithError:(id *)error;
- (void)handleCloudError:(id)error operation:(id)operation container:(id)container database:(id)database;
- (BOOL)resetZoneServerChangeTokenWithError:(id *)error;
- (long long)needsFetchWithError:(id *)error;
- (id)zoneShareWithError:(id *)error;
- (id)recordsForClass:(Class)class error:(id *)error;
- (BOOL)recordsForClass:(Class)class epoch:(long long)epoch error:(id *)error enumerationHandler:(id /* block */)handler;
- (id)recordsForClass:(Class)class error:(id *)error filter:(id /* block */)filter;
- (id)recordForRecordID:(id)id class:(Class)class error:(id *)error;
- (id)cloudSyncRecordForCKRecord:(id)ckrecord error:(id *)error;
- (BOOL)addRecord:(id)record error:(id *)error;
- (long long)containsRecordsWithError:(id *)error;
- (long long)containsRecordWithRecordID:(id)id error:(id *)error;
- (BOOL)deleteRecordID:(id)id error:(id *)error;
@end

#endif /* HDCloudSyncCachedZone_h */
