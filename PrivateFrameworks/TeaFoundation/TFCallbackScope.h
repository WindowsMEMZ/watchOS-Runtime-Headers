//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 930.0.0.0.0
//
#ifndef TFCallbackScope_h
#define TFCallbackScope_h
@import Foundation;

@class NSArray;

@interface TFCallbackScope : NSObject

@property (readonly, nonatomic) unsigned long long scope;
@property (readonly, nonatomic) NSArray *names;

/* instance methods */
- (id)initWithScope:(unsigned long long)scope names:(id)names;
@end

#endif /* TFCallbackScope_h */
