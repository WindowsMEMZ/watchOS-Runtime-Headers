//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVPlayerItemAccessLog_h
#define AVPlayerItemAccessLog_h
@import Foundation;

#include "AVPlayerItemAccessLogInternal.h"
#include "NSCopying-Protocol.h"

@class NSArray;

@interface AVPlayerItemAccessLog : NSObject<NSCopying> {
  /* instance variables */
  AVPlayerItemAccessLogInternal *_playerItemAccessLog;
}

@property (readonly, nonatomic) unsigned long long extendedLogDataStringEncoding;
@property (readonly, nonatomic) NSArray *events;

/* instance methods */
- (id)_common_init;
- (id)init;
- (id)initWithLogArray:(id)array;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)dealloc;
- (id)extendedLogData;
- (id)_accessLogArray;
@end

#endif /* AVPlayerItemAccessLog_h */
