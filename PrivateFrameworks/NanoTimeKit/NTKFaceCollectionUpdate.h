//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKFaceCollectionUpdate_h
#define NTKFaceCollectionUpdate_h
@import Foundation;

@class NSUUID;

@interface NTKFaceCollectionUpdate : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) id /* block */ block;

/* class methods */
+ (id)updateWithType:(long long)type uuid:(id)uuid block:(id /* block */)block;

/* instance methods */
@end

#endif /* NTKFaceCollectionUpdate_h */
