//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1003.300.71.0.0
//
#ifndef IMPingTest_h
#define IMPingTest_h
@import Foundation;

@class NSString;
@protocol OS_dispatch_source;

@interface IMPingTest : NSObject {
  /* instance variables */
  NSString *_address;
  BOOL _usesWifi;
  id _collector;
  BOOL _isRunning;
  NSObject<OS_dispatch_source> *_sendTimer;
  NSObject<OS_dispatch_source> *_socketReadSource;
}

@property (readonly, nonatomic) double secondsToRun;

/* instance methods */
- (id)initWithAddress:(id)address wifi:(BOOL)wifi;
- (void)dealloc;
- (void)startWithTimeout:(double)timeout queue:(id)queue completionHandler:(id /* block */)handler;
- (void)stop;
- (id)pingStats;
- (id)pingStats:(double)stats;
- (BOOL)writeResultsToFile:(id)file error:(id *)error;
- (int)_setupAndPerformPing:(double)ping queue:(id)queue completionHandler:(id /* block */)handler;
- (void)_doPingWithSocket:(int)socket address:(struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8] })address timeToRunTestInSeconds:(double)seconds pingTimeout:(double)timeout queue:(id)queue completionHandler:(id /* block */)handler;
- (void)_setupReadSource:(int)source address:(struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8] })address icmID:(unsigned short)id queue:(id)queue completionHander:(id /* block */)hander;
- (double)longTimeInterval;
@end

#endif /* IMPingTest_h */
