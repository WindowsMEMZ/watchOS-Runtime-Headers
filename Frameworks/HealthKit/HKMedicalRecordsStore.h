//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKMedicalRecordsStore_h
#define HKMedicalRecordsStore_h
@import Foundation;

#include "HKMedicalRecordsStoreClient-Protocol.h"
#include "HKTaskServerProxyProvider.h"
#include "_HKXPCExportable-Protocol.h"

@class NSString;

@interface HKMedicalRecordsStore : NSObject<_HKXPCExportable, HKMedicalRecordsStoreClient> {
  /* instance variables */
  HKTaskServerProxyProvider *_proxyProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)taskIdentifier;

/* instance methods */
- (id)initWithHealthStore:(id)store;
- (void)fetchMedicalRecordsForClinicalRecords:(id)records completion:(id /* block */)completion;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)remoteInterface;
@end

#endif /* HKMedicalRecordsStore_h */
