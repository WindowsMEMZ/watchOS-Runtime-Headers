//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef DKDAAPParser_h
#define DKDAAPParser_h
@import Foundation;

@class NSInputStream, NSMutableArray;
@protocol DKDAAPParserDelegate;

@interface DKDAAPParser : NSObject

@property (readonly, nonatomic) NSInputStream *inputStream;
@property (readonly, nonatomic) NSMutableArray *containerStack;
@property (nonatomic) BOOL canceled;
@property (weak, nonatomic) NSObject<DKDAAPParserDelegate> *delegate;
@property (readonly, nonatomic) long long state;

/* instance methods */
- (id)initWithStream:(id)stream;
- (id)initWithData:(id)data;
- (void)parse;
- (void)cancel;
- (void)_callDelegateDidStart;
- (void)_callDelegateDidFinish;
- (void)_callDelegateDidCancel;
- (void)_callDelegateDidFailWithError:(id)error;
- (BOOL)_callDelegateShouldParseCode:(unsigned int)code;
- (BOOL)_callDelegateShouldParseCodeAsContainer:(unsigned int)container;
- (void)_callDelegateDidStartContainerCode:(unsigned int)code contentLength:(unsigned int)length;
- (void)_callDelegateDidParseDataCode:(unsigned int)code bytes:(char *)bytes contentLength:(unsigned int)length;
- (void)_callDelegateDidEndContainerCode:(unsigned int)code;
- (void)_verifyExpectedEOF;
- (BOOL)isCanceled;
@end

#endif /* DKDAAPParser_h */
