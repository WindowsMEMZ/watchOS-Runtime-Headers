//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCOnce_h
#define FCOnce_h
@import Foundation;

@class NFUnfairLock;

@interface FCOnce : NSObject {
  /* instance variables */
  BOOL _finished;
  NFUnfairLock *_lock;
}

/* instance methods */
- (id)init;
- (id)initWithOptions:(unsigned long long)options;
- (void)executeOnce:(id /* block */)once;
- (BOOL)trigger;
- (BOOL)hasBeenTriggered;
@end

#endif /* FCOnce_h */
