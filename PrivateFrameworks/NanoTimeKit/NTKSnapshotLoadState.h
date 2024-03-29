//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKSnapshotLoadState_h
#define NTKSnapshotLoadState_h
@import Foundation;

@class NSError, UIImage;

@interface NTKSnapshotLoadState : NSObject

@property (readonly, nonatomic) unsigned long long status;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) NSError *error;

/* class methods */
+ (id)pending;
+ (id)loading;
+ (id)successWithImage:(id)image;
+ (id)failureWithError:(id)error;

/* instance methods */
- (id)initWithStatus:(unsigned long long)status image:(id)image error:(id)error;
@end

#endif /* NTKSnapshotLoadState_h */
