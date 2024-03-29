//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 930.0.0.0.0
//
#ifndef TFRegistrationContainer_Protocol_h
#define TFRegistrationContainer_Protocol_h
@import Foundation;

@protocol TFRegistrationContainer <NSObject>
/* instance methods */
- (id)registerClass:(Class)class factory:(id /* block */)factory;
- (id)registerClass:(Class)class name:(id)name factory:(id /* block */)factory;
- (id)registerProtocol:(id)protocol factory:(id /* block */)factory;
- (id)registerProtocol:(id)protocol name:(id)name factory:(id /* block */)factory;
- (id)registerUncheckedProtocol:(id)protocol factory:(id /* block */)factory;
- (id)registerUncheckedProtocol:(id)protocol name:(id)name factory:(id /* block */)factory;
@end

#endif /* TFRegistrationContainer_Protocol_h */
