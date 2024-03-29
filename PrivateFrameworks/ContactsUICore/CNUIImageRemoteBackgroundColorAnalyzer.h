//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3505.0.0.0.0
//
#ifndef CNUIImageRemoteBackgroundColorAnalyzer_h
#define CNUIImageRemoteBackgroundColorAnalyzer_h
@import Foundation;

@class NSXPCConnection;

@interface CNUIImageRemoteBackgroundColorAnalyzer : NSObject

@property (retain) NSXPCConnection *serviceConnection;

/* instance methods */
- (void)dealloc;
- (void)_openConnectionIfNeeded;
- (void)_closeConnection;
- (void)getBackgroundColorOnImageData:(id)data bitmapFormat:(id)format reply:(id /* block */)reply;
@end

#endif /* CNUIImageRemoteBackgroundColorAnalyzer_h */
