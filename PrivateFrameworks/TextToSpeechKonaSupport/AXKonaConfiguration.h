//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 73.0.7.0.0
//
#ifndef AXKonaConfiguration_h
#define AXKonaConfiguration_h
@import Foundation;

@class NSString;

@interface AXKonaConfiguration : NSObject

@property (readonly, nonatomic) NSString *dylib;
@property (readonly, nonatomic) NSString *dialectCode;
@property (readonly, nonatomic) NSString *iniString;
@property (readonly, nonatomic) int eciDialect;

/* instance methods */
- (id)initWithDylib:(id)dylib dialectCode:(id)code dialect:(int)dialect;
@end

#endif /* AXKonaConfiguration_h */
