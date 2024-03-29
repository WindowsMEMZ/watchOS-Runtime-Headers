//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSVStoreDownloadQueueResponse_h
#define SSVStoreDownloadQueueResponse_h
@import Foundation;

@class NSArray, NSData, NSDictionary, NSError, NSMutableOrderedSet, NSNumber, NSOrderedSet, NSString;
@protocol OS_dispatch_queue;

@interface SSVStoreDownloadQueueResponse : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_dispatchQueue;
  NSDictionary *_itemErrors;
}

@property (readonly) NSOrderedSet *downloads;
@property NSString *storeCorrelationID;
@property (retain) NSError *error;
@property (readonly) NSData *keybag;
@property (readonly) NSArray *rangesToLoad;
@property BOOL shouldCancelPurchaseBatch;
@property BOOL triggeredQueueCheck;
@property (readonly) NSNumber *userIdentifier;
@property NSString *clientIdentifier;

/* instance methods */
- (id)_initStoreDownloadQueueResponse;
- (id)init;
- (id)initWithDictionary:(id)dictionary userIdentifier:(id)identifier;
- (id)initWithDictionary:(id)dictionary userIdentifier:(id)identifier preferredAssetFlavor:(id)flavor;
- (id)initWithError:(id)error userIdentifier:(id)identifier;
- (id)errorForItemIdentifier:(id)identifier;
- (id)_errorWithFailureType:(id)type customerMessage:(id)message;
@end

#endif /* SSVStoreDownloadQueueResponse_h */
