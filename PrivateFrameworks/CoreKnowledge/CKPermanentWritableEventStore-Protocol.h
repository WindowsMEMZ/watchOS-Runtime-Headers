//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.3.1.0.0
//
#ifndef CKPermanentWritableEventStore_Protocol_h
#define CKPermanentWritableEventStore_Protocol_h
@import Foundation;

@protocol CKPermanentWritableEventStore 
/* instance methods */
- (void)recordEvent:(id)event completionHandler:(id /* block */)handler;
- (BOOL)recordEvent:(id)event error:(id *)error;
- (void)recordInteraction:(id)interaction completionHandler:(id /* block */)handler;
- (BOOL)recordInteraction:(id)interaction error:(id *)error;
- (void)recordInteraction:(id)interaction bundleId:(id)id completionHandler:(id /* block */)handler;
- (BOOL)recordInteraction:(id)interaction bundleId:(id)id error:(id *)error;
- (void)deleteInteractionsWithBundleId:(id)id completionHandler:(id /* block */)handler;
- (BOOL)deleteInteractionsWithBundleId:(id)id error:(id *)error;
@end

#endif /* CKPermanentWritableEventStore_Protocol_h */
