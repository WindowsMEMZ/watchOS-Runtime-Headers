//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKModifySubscriptionsOperationCallbacks_Protocol_h
#define CKModifySubscriptionsOperationCallbacks_Protocol_h
@import Foundation;

@protocol CKModifySubscriptionsOperationCallbacks <CKOperationCallbacks>
/* instance methods */
- (void)handleSubscriptionSaveForSubscriptionID:(id)id error:(id)error;
- (void)handleSubscriptionDeleteForSubscriptionID:(id)id error:(id)error;
@end

#endif /* CKModifySubscriptionsOperationCallbacks_Protocol_h */
