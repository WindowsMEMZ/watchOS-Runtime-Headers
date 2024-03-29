//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef GKVoiceChatSession_h
#define GKVoiceChatSession_h
@import Foundation;

@class NSArray, NSString;
@protocol GKVoiceChatSessionDelegate;

@interface GKVoiceChatSession : NSObject {
  /* instance variables */
  id opaqueSession;
}

@property NSObject<GKVoiceChatSessionDelegate> *delegate;
@property (readonly) NSString *sessionName;
@property (readonly) NSArray *peerList;
@property BOOL activeSession;
@property (readonly) float inputMeter;
@property float sessionVolume;

/* instance methods */
- (id)initWithGKSession:(id)gksession sessionName:(id)name;
- (void)dealloc;
- (void)startSession;
- (void)stopSession;
- (void)setMute:(BOOL)mute forPeer:(id)peer;
- (BOOL)getMuteStateForPeer:(id)peer;
- (float)outputMeterForPeer:(id)peer;
- (BOOL)isActiveSession;
@end

#endif /* GKVoiceChatSession_h */
