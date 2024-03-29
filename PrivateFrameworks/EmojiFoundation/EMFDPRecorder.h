//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 200.200.0.0.0
//
#ifndef EMFDPRecorder_h
#define EMFDPRecorder_h
@import Foundation;

#include "EMFDPReportingDelegate-Protocol.h"
#include "EMFEmojiToken.h"

@class NSLock, NSString;

@interface EMFDPRecorder : NSObject {
  /* instance variables */
  NSLock *_delegateLock;
}

@property (readonly, nonatomic) NSString *recordingKey;
@property (retain) EMFEmojiToken *emoji;
@property (retain) NSObject<EMFDPReportingDelegate> *delegate;

/* instance methods */
- (id)initWithEmoji:(id)emoji;
- (BOOL)report;
@end

#endif /* EMFDPRecorder_h */
