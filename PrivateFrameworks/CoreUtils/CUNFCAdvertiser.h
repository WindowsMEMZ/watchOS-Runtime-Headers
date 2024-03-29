//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 730.8.0.0.0
//
#ifndef CUNFCAdvertiser_h
#define CUNFCAdvertiser_h
@import Foundation;

@class NSURL;
@protocol OS_dispatch_queue;

@interface CUNFCAdvertiser : NSObject {
  /* instance variables */
  BOOL _invalidateCalled;
}

@property (copy, nonatomic) NSURL *advertisementURI;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ tagStateChangedHandler;

/* instance methods */
- (id)init;
- (void)activate;
- (void)invalidate;
- (void)_invalidateWithError:(id)error;
@end

#endif /* CUNFCAdvertiser_h */
