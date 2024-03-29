//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.200.1.0.0
//
#ifndef NPTOUserPhotoFaceServer_Protocol_h
#define NPTOUserPhotoFaceServer_Protocol_h
@import Foundation;

#include "NPTOUserPhotoFaceServer-Protocol.h"
#include "NSXPCListenerDelegate-Protocol.h"

@class NSString;
@protocol NPTOUserPhotoFaceServerDelegateProtocol;

@protocol NPTOUserPhotoFaceServer <NSObject>
/* instance methods */
- (void)userPhotoFaceDirectory:(id /* block */)directory;
- (void)clockFaceCounts:(id /* block */)counts;
- (void)createUserPhotoFaceFromPath:(id)path completion:(id /* block */)completion;
- (void)createKaleidoscopeFaceFromPath:(id)path completion:(id /* block */)completion;
@end

#endif /* NPTOUserPhotoFaceServer_Protocol_h */
