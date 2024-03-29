//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 956.0.0.0.0
//
#ifndef ACNotifyWriter_h
#define ACNotifyWriter_h
@import Foundation;

#include "ACNotifyWriting-Protocol.h"

@class NSString;

@interface ACNotifyWriter : NSObject<ACNotifyWriting> {
  /* instance variables */
  int notifierToken;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
}

@property (retain, nonatomic) NSString *key;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithKey:(id)key;
- (void)write:(unsigned long long)write;
@end

#endif /* ACNotifyWriter_h */
