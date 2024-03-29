//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef AFEnablementConfigurationProviderParametersMutating_Protocol_h
#define AFEnablementConfigurationProviderParametersMutating_Protocol_h
@import Foundation;

@protocol AFEnablementConfigurationProviderParametersMutating <NSObject>
/* instance methods */
- (void)setEnablementFlow:(long long)flow;
- (void)setNewUser:(BOOL)user;
- (void)setUserStatusFetchError:(id)error;
- (void)setDateStartedResolvingUserStatus:(id)status;
- (void)setDateEndedResolvingUserStatus:(id)status;
- (void)setExperiment:(id)experiment;
- (void)setExperimentFetchError:(id)error;
- (void)setDateStartedResolvingExperiment:(id)experiment;
- (void)setDateEndedResolvingExperiment:(id)experiment;
- (void)setOutputVoiceCountForRecognitionLanguage:(id)language;
- (void)setRecognitionLanguageWithMultipleOutputVoicesExists:(BOOL)exists;
@end

#endif /* AFEnablementConfigurationProviderParametersMutating_Protocol_h */
