//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef NMSSHLogger_h
#define NMSSHLogger_h
@import Foundation;

@protocol OS_dispatch_queue;

@interface NMSSHLogger : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *loggerQueue;
@property (copy, nonatomic) id /* block */ logBlock;
@property (nonatomic) unsigned long long logLevel;
@property (nonatomic) BOOL enabled;

/* class methods */
+ (id)logger;
+ (id)sharedLogger;

/* instance methods */
- (void)log:(id)log level:(unsigned long long)level flag:(unsigned long long)flag;
- (void)logVerbose:(id)verbose;
- (void)logInfo:(id)info;
- (void)logWarn:(id)warn;
- (void)logError:(id)error;
- (BOOL)isEnabled;
@end

#endif /* NMSSHLogger_h */
