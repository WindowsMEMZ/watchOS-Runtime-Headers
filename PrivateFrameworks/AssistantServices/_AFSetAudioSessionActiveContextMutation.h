//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef _AFSetAudioSessionActiveContextMutation_h
#define _AFSetAudioSessionActiveContextMutation_h
@import Foundation;

#include "AFSetAudioSessionActiveContext.h"
#include "AFSetAudioSessionActiveContextMutating-Protocol.h"
#include "AFSpeechRequestOptions.h"

@class NSString;

@interface _AFSetAudioSessionActiveContextMutation : NSObject<AFSetAudioSessionActiveContextMutating> {
  /* instance variables */
  AFSetAudioSessionActiveContext *_base;
  unsigned long long _options;
  long long _reason;
  AFSpeechRequestOptions *_speechRequestOptions;
  struct _mutationFlags { unsigned int x :1 isDirty; unsigned int x :1 hasOptions; unsigned int x :1 hasReason; unsigned int x :1 hasSpeechRequestOptions; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithBase:(id)base;
- (BOOL)isDirty;
- (unsigned long long)getOptions;
- (void)setOptions:(unsigned long long)options;
- (long long)getReason;
- (void)setReason:(long long)reason;
- (id)getSpeechRequestOptions;
- (void)setSpeechRequestOptions:(id)options;
@end

#endif /* _AFSetAudioSessionActiveContextMutation_h */
