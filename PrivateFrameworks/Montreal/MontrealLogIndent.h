//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 178.0.0.0.0
//
#ifndef MontrealLogIndent_h
#define MontrealLogIndent_h
@import Foundation;

@class NSString;

@interface MontrealLogIndent : NSObject

@property (readonly) NSString *step;
@property (readonly) unsigned long long factor;
@property (readonly) NSString *level;

/* class methods */
+ (id)indentWithLevel:(id)level;
+ (id)indentWithLevel:(id)level step:(id)step factor:(unsigned long long)factor;

/* instance methods */
- (id)initWithLevel:(id)level step:(id)step factor:(unsigned long long)factor;
- (id)description;
- (id)indentByFactor:(unsigned long long)factor;
@end

#endif /* MontrealLogIndent_h */
