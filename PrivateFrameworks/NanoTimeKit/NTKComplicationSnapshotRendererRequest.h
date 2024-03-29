//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKComplicationSnapshotRendererRequest_h
#define NTKComplicationSnapshotRendererRequest_h
@import Foundation;

#include "NTKComplicationSnapshotDescriptor.h"

@interface NTKComplicationSnapshotRendererRequest : NSObject

@property (readonly, nonatomic) NTKComplicationSnapshotDescriptor *descriptor;
@property (readonly, nonatomic) id /* block */ completion;

/* instance methods */
- (id)initWithDescriptor:(id)descriptor completion:(id /* block */)completion;
@end

#endif /* NTKComplicationSnapshotRendererRequest_h */
