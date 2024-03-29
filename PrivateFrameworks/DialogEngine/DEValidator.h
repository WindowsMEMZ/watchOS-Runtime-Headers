//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.12.1.0.0
//
#ifndef DEValidator_h
#define DEValidator_h
@import Foundation;

@class NSString;

@interface DEValidator : NSObject

@property (retain, nonatomic) NSString *templateDir;

/* instance methods */
- (id)jsonToResult:(id)result;
- (id)validateString:(id)string localeString:(id)string;
- (id)validateFile:(id)file locale:(id)locale;
- (id)validate:(id)validate locale:(id)locale;
- (id)validateWithParams:(id)params locale:(id)locale;
@end

#endif /* DEValidator_h */
