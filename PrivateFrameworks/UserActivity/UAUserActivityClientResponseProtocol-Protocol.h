//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 567.0.0.0.0
//
#ifndef UAUserActivityClientResponseProtocol_Protocol_h
#define UAUserActivityClientResponseProtocol_Protocol_h
@import Foundation;

@protocol UAUserActivityClientResponseProtocol <NSObject>
/* instance methods */
- (void)askClientUserActivityToSave:(id)save;
- (void)askClientUserActivityToSave:(id)save completionHandler:(id /* block */)handler;
- (void)tellClientUserActivityItWasResumed:(id)resumed;
- (void)tellClientDebuggingEnabled:(BOOL)enabled logFileHandle:(id)handle;
@end

#endif /* UAUserActivityClientResponseProtocol_Protocol_h */
