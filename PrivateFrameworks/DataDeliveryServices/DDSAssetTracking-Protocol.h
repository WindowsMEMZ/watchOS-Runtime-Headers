//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64.0.0.0.0
//
#ifndef DDSAssetTracking_Protocol_h
#define DDSAssetTracking_Protocol_h
@import Foundation;

@protocol DDSAssetTracking <NSObject>

@property (retain, nonatomic) NSObject<DDSAssetTrackingDelegate> *delegate;

/* instance methods */
- (void)addAssertionForQuery:(id)query policy:(id)policy assertionID:(id)id clientID:(id)id;
- (void)removeAssertionWithID:(id)id;
- (void)didUpdateAssertion:(id)assertion atDate:(id)date;
- (id)assertionDueForUpdateSinceDate:(id)date;
- (id)allAssertions;
- (id)trackedAssetTypes;
- (id)assertionIDsForClientID:(id)id;
- (void)resetAssertionDueDatesForAssetType:(id)type;
- (id)assertionForQuery:(id)query;
- (void)modifyUpdateStatusForAssertion:(id)assertion toStatus:(long long)status;
- (long long)updateStatusForAssertion:(id)assertion;
@end

#endif /* DDSAssetTracking_Protocol_h */
