//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef GKVoiceChatSessionMessage_h
#define GKVoiceChatSessionMessage_h
@import Foundation;

#include "GKOOBMessage.h"

@class NSData;

@interface GKVoiceChatSessionMessage : GKOOBMessage {
  /* instance variables */
  NSData *_data;
  unsigned int _conferenceID;
  unsigned int _subtype;
}

/* instance methods */
- (id)init;
- (id)initWithBytes:(const void *)bytes length:(unsigned long long)length;
- (id)initWithPayload:(id)payload conferenceID:(unsigned int)id subtype:(unsigned int)subtype;
- (void)dealloc;
- (id)data;
- (id)payload;
- (unsigned int)subtype;
- (BOOL)_checkType:(unsigned short)type;
- (BOOL)_checkSize:(unsigned long long)size;
- (unsigned int)conferenceID;
@end

#endif /* GKVoiceChatSessionMessage_h */
