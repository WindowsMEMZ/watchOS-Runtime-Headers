//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1387.3.4.0.0
//
#ifndef AUAudioUnitHostProtocol_Protocol_h
#define AUAudioUnitHostProtocol_Protocol_h
@import Foundation;

@protocol AUAudioUnitHostProtocol <_AURemoteParameterSynchronization>
/* instance methods */
- (void)propertiesChanged:(id)changed;
- (void)MIDICIProfileChanged:(unsigned char)changed channel:(unsigned char)channel profile:(id)profile enabled:(BOOL)enabled;
- (void)speechSynthesisMetadataAvailable:(id)available speechRequest:(id)request;
@end

#endif /* AUAudioUnitHostProtocol_Protocol_h */
