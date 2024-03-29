//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef _AFSharedConfidenceScoreMutation_h
#define _AFSharedConfidenceScoreMutation_h
@import Foundation;

#include "AFSharedConfidenceScore.h"
#include "AFSharedConfidenceScoreMutating-Protocol.h"

@class NSString;

@interface _AFSharedConfidenceScoreMutation : NSObject<AFSharedConfidenceScoreMutating> {
  /* instance variables */
  AFSharedConfidenceScore *_base;
  NSString *_sharedUserId;
  unsigned long long _confidenceScore;
  struct _mutationFlags { unsigned int x :1 isDirty; unsigned int x :1 hasSharedUserId; unsigned int x :1 hasConfidenceScore; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithBase:(id)base;
- (BOOL)isDirty;
- (id)getSharedUserId;
- (void)setSharedUserId:(id)id;
- (unsigned long long)getConfidenceScore;
- (void)setConfidenceScore:(unsigned long long)score;
@end

#endif /* _AFSharedConfidenceScoreMutation_h */
