//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVPlayerLoggingIdentifier_h
#define AVPlayerLoggingIdentifier_h
@import Foundation;

#include "AVLoggingIdentifier-Protocol.h"
#include "AVPlayerLoggingIdentifierInternal.h"

@class NSString;

@interface AVPlayerLoggingIdentifier : NSObject<AVLoggingIdentifier> {
  /* instance variables */
  AVPlayerLoggingIdentifierInternal *_priv;
}

@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)dealloc;
@end

#endif /* AVPlayerLoggingIdentifier_h */
