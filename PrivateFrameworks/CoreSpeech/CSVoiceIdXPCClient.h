//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSVoiceIdXPCClient_h
#define CSVoiceIdXPCClient_h
@import Foundation;

@protocol OS_xpc_object;

@interface CSVoiceIdXPCClient : NSObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection;

/* class methods */
+ (void)notifyImplicitUtterance:(id)utterance audioDeviceType:(id)type audioRecordType:(id)type voiceTriggerEventInfo:(id)info otherCtxt:(id)ctxt completion:(id /* block */)completion;

/* instance methods */
- (id)init;
- (void)connect;
- (void)disconnect;
- (void)dealloc;
- (void)_handleListenerEvent:(id)event;
- (void)_handleListenerError:(id)error;
- (void)_notifyImplicitUtterance:(id)utterance audioDeviceType:(id)type audioRecordType:(id)type voiceTriggerEventInfo:(id)info otherCtxt:(id)ctxt completion:(id /* block */)completion;
- (void)_sendMessage:(id)message connection:(id)connection completion:(id /* block */)completion;
- (id)_decodeError:(id)error;
@end

#endif /* CSVoiceIdXPCClient_h */
