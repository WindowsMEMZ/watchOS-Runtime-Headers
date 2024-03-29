//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2890.4.12.2.3
//
#ifndef CMAudioAccessoryUsageManager_h
#define CMAudioAccessoryUsageManager_h
@import Foundation;

@protocol CMAudioAccessoryUsageDelegate, OS_dispatch_queue, {unique_ptr<CLConnectionClient, std::default_delete<CLConnectionClient>>="__ptr_"{__compressed_pair<CLConnectionClient *, std::default_delete<CLConnectionClient>>="__value_"^{CLConnectionClient}}};

@interface CMAudioAccessoryUsageManager : NSObject {
  /* instance variables */
  struct unique_ptr<CLConnectionClient, std::default_delete<CLConnectionClient>> { struct __compressed_pair<CLConnectionClient *, std::default_delete<CLConnectionClient>> { struct CLConnectionClient *__value_; } __ptr_; } _locationConnection;
  NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (weak, nonatomic) NSObject<CMAudioAccessoryUsageDelegate> *delegate;
@property (readonly, nonatomic) long long authorizationStatus;

/* class methods */
+ (BOOL)isAvailable;
+ (long long)isAuthorized;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)_connect;
- (void)_handleMessage:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage * x0; struct __shared_weak_count * x1; })message;
- (void)_disconnect;
- (void)requestAudioAccessoryUsageUpdatesWithHandler:(id /* block */)handler;
- (long long)isAuthorized;
@end

#endif /* CMAudioAccessoryUsageManager_h */
