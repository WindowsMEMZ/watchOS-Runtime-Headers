//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.2.1.0.0
//
#ifndef _SMTSiriIntendedInfoMutation_h
#define _SMTSiriIntendedInfoMutation_h
@import Foundation;

#include "SMTSiriIntendedInfo.h"
#include "SMTSiriIntendedInfoMutating-Protocol.h"

@class NSNumber, NSString;

@interface _SMTSiriIntendedInfoMutation : NSObject<SMTSiriIntendedInfoMutating> {
  /* instance variables */
  SMTSiriIntendedInfo *_base;
  float _odldScore;
  float _aftmScore;
  float _spkrIdScore;
  float _lrnnScore;
  float _checkerScore;
  float _lrnnThreshold;
  float _lrnnScale;
  float _lrnnOffset;
  NSNumber *_invocationType;
  struct _mutationFlags { unsigned int x :1 isDirty; unsigned int x :1 hasOdldScore; unsigned int x :1 hasAftmScore; unsigned int x :1 hasSpkrIdScore; unsigned int x :1 hasLrnnScore; unsigned int x :1 hasCheckerScore; unsigned int x :1 hasInvocationType; unsigned int x :1 hasLrnnThreshold; unsigned int x :1 hasLrnnScale; unsigned int x :1 hasLrnnOffset; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithBase:(id)base;
- (BOOL)isDirty;
- (float)getOdldScore;
- (void)setOdldScore:(float)score;
- (float)getAftmScore;
- (void)setAftmScore:(float)score;
- (float)getSpkrIdScore;
- (void)setSpkrIdScore:(float)score;
- (float)getLrnnScore;
- (void)setLrnnScore:(float)score;
- (float)getCheckerScore;
- (void)setCheckerScore:(float)score;
- (id)getInvocationType;
- (void)setInvocationType:(id)type;
- (float)getLrnnThreshold;
- (void)setLrnnThreshold:(float)threshold;
- (float)getLrnnScale;
- (void)setLrnnScale:(float)scale;
- (float)getLrnnOffset;
- (void)setLrnnOffset:(float)offset;
@end

#endif /* _SMTSiriIntendedInfoMutation_h */
