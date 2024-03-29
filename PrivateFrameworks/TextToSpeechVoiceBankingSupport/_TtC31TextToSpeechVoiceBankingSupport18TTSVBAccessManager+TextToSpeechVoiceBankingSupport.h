//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 583.1.13.0.0
//
#ifndef _TtC31TextToSpeechVoiceBankingSupport18TTSVBAccessManager_TextToSpeechVoiceBankingSupport_h
#define _TtC31TextToSpeechVoiceBankingSupport18TTSVBAccessManager_TextToSpeechVoiceBankingSupport_h
@import Foundation;

@interface TextToSpeechVoiceBankingSupport.TTSVBAccessManager (TextToSpeechVoiceBankingSupport) <ACMonitoredAccountStoreDelegateProtocol>
/* instance methods */
- (void)accountWasAdded:(id)added;
- (void)accountWasModified:(id)modified;
- (void)accountWasRemoved:(id)removed;
- (void)accountCredentialChanged:(id)changed;
@end

#endif /* _TtC31TextToSpeechVoiceBankingSupport18TTSVBAccessManager_TextToSpeechVoiceBankingSupport_h */
