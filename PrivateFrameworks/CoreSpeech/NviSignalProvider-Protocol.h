//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef NviSignalProvider_Protocol_h
#define NviSignalProvider_Protocol_h
@import Foundation;

@protocol NviSignalProvider <NSObject>

@property (readonly, nonatomic) unsigned long long sigType;

/* instance methods */
- (id)initWithDataSource:(id)source assetsProvider:(id)provider;
- (void)addDelegate:(id)delegate;
- (void)removeDelegate:(id)delegate;
- (void)startWithNviContext:(id)context didStartHandler:(id /* block */)handler;
- (void)reset;
- (void)stopWithDidStopHandler:(id /* block */)handler;
@end

#endif /* NviSignalProvider_Protocol_h */
