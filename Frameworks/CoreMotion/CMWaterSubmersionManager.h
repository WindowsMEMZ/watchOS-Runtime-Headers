//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2890.4.12.2.3
//
#ifndef CMWaterSubmersionManager_h
#define CMWaterSubmersionManager_h
@import Foundation;

@class NSMeasurement;
@protocol CMWaterSubmersionManagerDelegate, OS_dispatch_queue;

@interface CMWaterSubmersionManager : NSObject {
  /* instance variables */
  void * _locationConnection;
  NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (weak, nonatomic) NSObject<CMWaterSubmersionManagerDelegate> *delegate;
@property (readonly, nonatomic) NSMeasurement *maximumDepth;

/* class methods */
+ (BOOL)waterSubmersionAvailable;
+ (long long)authorizationStatus;
+ (BOOL)isAuthorizedAndEntitled;

/* instance methods */
- (void)notifySubmersionStateProcessingCompleted;
- (id)init;
- (void)dealloc;
- (void)_setDelegate:(id)delegate;
- (void)_connect;
- (void)_handleMessage:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage * x0; struct __shared_weak_count * x1; })message;
- (void)_disconnect;
@end

#endif /* CMWaterSubmersionManager_h */
