//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef VCCaptionsReceiver_h
#define VCCaptionsReceiver_h
@import Foundation;

#include "VCCaptionsReceiverDelegate-Protocol.h"
#include "VCCaptionsTranscription.h"

@interface VCCaptionsReceiver : NSObject {
  /* instance variables */
  unsigned int _captionsLastUtteranceNumber;
  unsigned int _captionsLastUpdateNumber;
  struct opaqueVCCaptionsDecoder * _captionsDecoder;
}

@property (readonly) NSObject<VCCaptionsReceiverDelegate> *delegate;
@property (retain, nonatomic) VCCaptionsTranscription *currentTranscription;

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (void)dealloc;
@end

#endif /* VCCaptionsReceiver_h */
