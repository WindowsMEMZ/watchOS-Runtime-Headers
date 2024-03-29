//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 135.6.0.0.0
//
#ifndef RCPSyntheticFluidSwipeEventStream_h
#define RCPSyntheticFluidSwipeEventStream_h
@import Foundation;

#include "RCPChildEventStream-Protocol.h"
#include "RCPEventEnvironment.h"
#include "RCPEventSenderProperties.h"
#include "RCPProgressEventStreamComposer-Protocol.h"

@class NSMutableArray, NSString;

@interface RCPSyntheticFluidSwipeEventStream : NSObject<RCPChildEventStream, RCPProgressEventStreamComposer> {
  /* instance variables */
  NSMutableArray *_processingEventBuffer;
  unsigned int _eventType;
  unsigned short _flavor;
  unsigned short _motion;
  BOOL _hasCreatedFirstEvent;
}

@property (retain, nonatomic) RCPEventEnvironment *environment;
@property (nonatomic) double currentTimeOffset;
@property (retain, nonatomic) RCPEventSenderProperties *senderProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double progress;
@property (nonatomic) double frequency;

/* instance methods */
- (id)initWithEventType:(unsigned int)type flavor:(unsigned short)flavor motion:(unsigned short)motion;
- (id)finalizeEventStream;
- (void)advanceTime:(double)time;
- (void)advanceProgressByDelta:(double)delta duration:(double)duration;
- (void)updateProgressTo:(double)to duration:(double)duration;
- (void)updateProgressTo:(double)to;
- (void)addToBuffer:(struct __IOHIDEvent *)buffer;
- (unsigned long long)_currentMachTime;
@end

#endif /* RCPSyntheticFluidSwipeEventStream_h */
