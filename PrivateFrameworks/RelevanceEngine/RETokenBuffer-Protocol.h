//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef RETokenBuffer_Protocol_h
#define RETokenBuffer_Protocol_h
@import Foundation;

@protocol RETokenBuffer <NSObject>

@property (readonly, nonatomic) BOOL empty;
@property (readonly, nonatomic) REScriptToken *currentToken;

/* instance methods */
- (void)next;
- (BOOL)isEmpty;
@end

#endif /* RETokenBuffer_Protocol_h */
