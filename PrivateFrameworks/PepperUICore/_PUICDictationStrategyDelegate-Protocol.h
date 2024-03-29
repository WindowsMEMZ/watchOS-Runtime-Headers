//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef _PUICDictationStrategyDelegate_Protocol_h
#define _PUICDictationStrategyDelegate_Protocol_h
@import Foundation;

@protocol _PUICDictationStrategyDelegate <NSObject>

@property (readonly, nonatomic) PUICDictationViewController *dictationViewController;

/* instance methods */
- (void)strategyDidBeginListening;
- (void)strategyIsStillListening;
- (void)strategyIsProcessing;
- (void)strategyDidCancel;
- (void)strategyDidFinish;
- (void)strategyDidFailWithError:(id)error;
- (void)strategyDidFailWithError:(id)error title:(id)title message:(id)message;
- (void)strategy:(id)strategy didRecognizedPhrases:(id)phrases secureOfflineOnly:(BOOL)only modelInfo:(id)info;
@optional
/* instance methods */
- (void)strategyUpdatedText:(id)text;
- (unsigned long long)strategyShouldFilterByContactPropertyKey;
@end

#endif /* _PUICDictationStrategyDelegate_Protocol_h */
