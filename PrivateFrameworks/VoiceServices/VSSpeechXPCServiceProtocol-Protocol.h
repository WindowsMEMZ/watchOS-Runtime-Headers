//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.3.1.0.0
//
#ifndef VSSpeechXPCServiceProtocol_Protocol_h
#define VSSpeechXPCServiceProtocol_Protocol_h
@import Foundation;

@protocol VSSpeechXPCServiceProtocol <NSObject>
/* instance methods */
- (void)updateWithConnectionIdentifier:(id)identifier keepActive:(BOOL)active;
- (void)prewarmIfNeededWithRequest:(id)request reply:(id /* block */)reply;
- (void)queryPhaticCapabilityWithRequest:(id)request reply:(id /* block */)reply;
- (void)estimateDurationWithRequest:(id)request reply:(id /* block */)reply;
- (void)startSpeechRequest:(id)request reply:(id /* block */)reply;
- (void)startSynthesisRequest:(id)request;
- (void)pauseSpeechRequest:(id)request atMark:(long long)mark;
- (void)continueSpeechRequest:(id)request;
- (void)stopSpeechRequest:(id)request atMark:(long long)mark;
- (void)startPresynthesizedAudioRequest:(id)request;
- (void)cachePresynthesizedAudioRequest:(id)request;
- (void)stopPresynthesizedAudioRequest:(id)request;
- (void)getVoiceNamesForLanguage:(id)language reply:(id /* block */)reply;
- (void)getFootprintsForVoiceName:(id)name languageCode:(id)code reply:(id /* block */)reply;
- (void)getSpeechIsActiveReply:(id /* block */)reply;
- (void)getSpeechIsActiveForConnectionReply:(id /* block */)reply;
- (void)startVoicePreviewRequest:(id)request reply:(id /* block */)reply;
- (void)stopVoicePreview;
- (void)startPhonemesRequest:(id)request phonemeSystem:(long long)system reply:(id /* block */)reply;
- (void)beginAudioPowerUpdateWithReply:(id /* block */)reply;
- (void)endAudioPowerUpdate;
- (void)cleanUnusedAssets:(id /* block */)assets;
- (void)getLocalVoicesForLanguage:(id)language reply:(id /* block */)reply;
- (void)getLocalVoiceResourcesReply:(id /* block */)reply;
- (void)setSubscribedVoiceAssets:(id)assets withClientID:(id)id forAccessoryID:(id)id;
- (void)getSubscribedVoiceAssetsWithClientID:(id)id forAccessoryID:(id)id reply:(id /* block */)reply;
- (void)getAllVoiceSubscriptionsWithReply:(id /* block */)reply;
- (void)triggerCellularDownloadedVoiceAssets:(id)assets withClientID:(id)id;
- (void)getVoiceResourceForLanguage:(id)language reply:(id /* block */)reply;
- (void)getVoiceInfoForLanguageCode:(id)code name:(id)name footprint:(long long)footprint gender:(long long)gender type:(long long)type reply:(id /* block */)reply;
- (void)forwardStreamObject:(id)object;
- (void)invokeDaemon:(id /* block */)daemon;
- (void)killDaemon;
@end

#endif /* VSSpeechXPCServiceProtocol_Protocol_h */
