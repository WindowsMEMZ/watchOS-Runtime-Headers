//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVAssetWriterInputTerminalHelper_h
#define AVAssetWriterInputTerminalHelper_h
@import Foundation;

#include "AVAssetWriterInputHelper.h"
#include "AVAssetWriterInputMediaDataRequesterDelegate-Protocol.h"

@class NSString;

@interface AVAssetWriterInputTerminalHelper : AVAssetWriterInputHelper<AVAssetWriterInputMediaDataRequesterDelegate> {
  /* instance variables */
  long long _terminalStatus;
  BOOL _didRequestMediaDataOnce;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithConfigurationState:(id)state;
- (id)initWithConfigurationState:(id)state terminalStatus:(long long)status;
- (long long)status;
- (id)transitionToAndReturnTerminalHelperWithTerminalStatus:(long long)status;
- (BOOL)isReadyForMoreMediaData;
- (void)requestMediaDataWhenReadyOnQueue:(id)queue usingBlock:(id /* block */)block;
- (void)stopRequestingMediaData;
- (BOOL)mediaDataRequesterShouldRequestMediaData;
- (void)requestMediaDataOnceIfNecessaryWithMediaDataRequester:(id)requester;
- (BOOL)canStartRespondingToEachPassDescriptionReturningReason:(id *)reason;
- (long long)appendSampleBuffer:(struct opaqueCMSampleBuffer *)buffer error:(id *)error;
- (BOOL)appendPixelBuffer:(struct __CVBuffer *)buffer withPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (BOOL)appendTaggedPixelBufferGroup:(struct OpaqueCMTaggedBufferGroup *)group withPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (void)markAsFinished;
- (void)markCurrentPassAsFinished;
@end

#endif /* AVAssetWriterInputTerminalHelper_h */
