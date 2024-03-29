//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TIMecabraIMLogger_h
#define TIMecabraIMLogger_h
@import Foundation;

@class NSMutableString;

@interface TIMecabraIMLogger : NSObject

@property (retain, nonatomic) NSMutableString *loggedMessage;

/* class methods */
+ (BOOL)isLoggingEnabled;

/* instance methods */
- (void)beginLogging;
- (void)markTime:(unsigned long long)time;
- (id)logFilePath;
- (void)endLoggingForInput:(id)input atFinalTimeMark:(unsigned long long)mark;
- (void)writeLogToFile;
@end

#endif /* TIMecabraIMLogger_h */
