//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1004.0.0.0.0
//
#ifndef DATrafficLogger_h
#define DATrafficLogger_h
@import Foundation;

@class NSString;

@interface DATrafficLogger : NSObject

@property (retain, nonatomic) NSString *filename;

/* class methods */
+ (BOOL)enabled;

/* instance methods */
- (void)_ensureCustomLogFile;
- (id)initWithFilename:(id)filename;
- (void)logSnippet:(id)snippet;
- (void)slurpAndRemoveLookasideFile:(id)file prefixString:(id)string suffixString:(id)string;
@end

#endif /* DATrafficLogger_h */
