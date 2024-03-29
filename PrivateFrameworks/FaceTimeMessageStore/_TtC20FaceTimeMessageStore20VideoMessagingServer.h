//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1431.300.81.0.0
//
#ifndef _TtC20FaceTimeMessageStore20VideoMessagingServer_h
#define _TtC20FaceTimeMessageStore20VideoMessagingServer_h
@import Foundation;

#include "_TtCs12_SwiftObject.h"
#include "_TtP20FaceTimeMessageStore32VideoMessagingXPCServerInterface_-Protocol.h"

@class NSData *, NSError *;

@interface FaceTimeMessageStore.VideoMessagingServer : Swift._SwiftObject<FaceTimeMessageStore.VideoMessagingXPCServerInterface> { // (Swift)
  /* instance variables */
   fileTransferer;
   assetManager;
   outgoingMessageCache;
}

/* instance methods */
- (void)sendVideoMessageWithData:(NSData *)data url:(FaceTimeMessageStore.SandboxExtendedURL *)url completionHandler:(id /* block */)handler;
@end

#endif /* _TtC20FaceTimeMessageStore20VideoMessagingServer_h */
