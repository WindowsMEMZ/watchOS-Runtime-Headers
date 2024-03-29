//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVAssetWriterHelper_h
#define AVAssetWriterHelper_h
@import Foundation;

#include "AVAssetWriterConfigurationState.h"
#include "AVMediaFileType.h"
#include "AVWeakReference.h"

@class NSArray, NSError, NSString, NSURL;
@protocol AVAssetWriterDelegate;

@interface AVAssetWriterHelper : NSObject

@property (readonly, nonatomic) BOOL defunct;
@property (readonly, nonatomic) AVAssetWriterConfigurationState *configurationState;
@property (retain) AVWeakReference *weakReferenceToAssetWriter;
@property (readonly, nonatomic) NSURL *outputURL;
@property (readonly, nonatomic) AVMediaFileType *mediaFileType;
@property (readonly, nonatomic) NSArray *availableMediaTypes;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSError *error;
@property (weak) NSObject<AVAssetWriterDelegate> *delegate;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } movieFragmentInterval;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } initialMovieFragmentInterval;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } overallDurationHint;
@property (nonatomic) BOOL shouldOptimizeForNetworkUse;
@property (copy, nonatomic) NSURL *directoryForTemporaryFiles;
@property (nonatomic) int movieTimeScale;
@property (copy, nonatomic) NSArray *metadata;
@property (nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } preferredTransform;
@property (nonatomic) float preferredVolume;
@property (nonatomic) float preferredRate;
@property (nonatomic) long long singlePassFileSize;
@property (nonatomic) long long singlePassMediaDataSize;
@property (readonly, nonatomic) NSArray *inputs;
@property (readonly, nonatomic) NSArray *inputGroups;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } preferredOutputSegmentInterval;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } initialSegmentStartTime;
@property (copy, nonatomic) NSString *outputFileTypeProfile;
@property (nonatomic) long long initialMovieFragmentSequenceNumber;
@property (nonatomic) BOOL producesCombinableFragments;
@property (nonatomic) BOOL requiresInProcessOperation;

/* instance methods */
- (id)init;
- (id)initWithConfigurationState:(id)state;
- (void)dealloc;
- (BOOL)_canApplyOutputSettings:(id)settings forMediaType:(id)type sourceFormat:(struct opaqueCMFormatDescription *)format exceptionReason:(id *)reason;
- (BOOL)canApplyOutputSettings:(id)settings forMediaType:(id)type;
- (BOOL)_canApplyTrackReferences:(id)references exceptionReason:(id *)reason;
- (BOOL)canAddInput:(id)input;
- (void)addInput:(id)input;
- (BOOL)canAddInputGroup:(id)group;
- (void)addInputGroup:(id)group;
- (void)startWriting;
- (void)startSessionAtSourceTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (void)endSessionAtSourceTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (void)cancelWriting;
- (void)finishWriting;
- (void)finishWritingWithCompletionHandler:(id /* block */)handler;
- (BOOL)_transitionToClientInitiatedTerminalStatus:(long long)status;
- (void)transitionToFailedStatusWithError:(id)error;
- (void)flush;
- (void)flushSegment;
- (BOOL)_isDefunct;
@end

#endif /* AVAssetWriterHelper_h */
