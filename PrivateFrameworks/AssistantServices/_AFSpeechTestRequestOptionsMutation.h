//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef _AFSpeechTestRequestOptionsMutation_h
#define _AFSpeechTestRequestOptionsMutation_h
@import Foundation;

#include "AFSpeechTestRequestOptions.h"
#include "AFSpeechTestRequestOptionsMutating-Protocol.h"

@class NSArray, NSString;

@interface _AFSpeechTestRequestOptionsMutation : NSObject<AFSpeechTestRequestOptionsMutating> {
  /* instance variables */
  AFSpeechTestRequestOptions *_base;
  NSArray *_jitContext;
  NSString *_overrideModelPath;
  struct _mutationFlags { unsigned int x :1 isDirty; unsigned int x :1 hasJitContext; unsigned int x :1 hasOverrideModelPath; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithBase:(id)base;
- (BOOL)isDirty;
- (id)getJitContext;
- (void)setJitContext:(id)context;
- (id)getOverrideModelPath;
- (void)setOverrideModelPath:(id)path;
@end

#endif /* _AFSpeechTestRequestOptionsMutation_h */
