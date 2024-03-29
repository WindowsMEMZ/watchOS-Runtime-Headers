//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKFaceSnapshotRequest_h
#define NTKFaceSnapshotRequest_h
@import Foundation;

#include "NTKFace.h"

@class NSDate, NSDictionary;

@interface NTKFaceSnapshotRequest : NSObject

@property (readonly, nonatomic) BOOL ready;
@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NTKFace *face;
@property (readonly, copy, nonatomic) NSDictionary *options;
@property (copy, nonatomic) id /* block */ completion;

/* instance methods */
- (id)initWithFace:(id)face options:(id)options completion:(id /* block */)completion;
- (BOOL)isReady;
@end

#endif /* NTKFaceSnapshotRequest_h */
