//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 930.0.0.0.0
//
#ifndef TFResolver_Protocol_h
#define TFResolver_Protocol_h
@import Foundation;

@protocol TFResolver <NSObject>
/* instance methods */
- (id)resolveClass:(Class)class;
- (id)resolveClass:(Class)class contextBlock:(id /* block */)block;
- (id)resolveClass:(Class)class name:(id)name;
- (id)resolveClass:(Class)class name:(id)name contextBlock:(id /* block */)block;
- (id)resolveOptionalClass:(Class)class;
- (id)resolveOptionalClass:(Class)class contextBlock:(id /* block */)block;
- (id)resolveOptionalClass:(Class)class name:(id)name;
- (id)resolveOptionalClass:(Class)class name:(id)name contextBlock:(id /* block */)block;
- (id)resolveProtocol:(id)protocol;
- (id)resolveProtocol:(id)protocol contextBlock:(id /* block */)block;
- (id)resolveProtocol:(id)protocol name:(id)name;
- (id)resolveProtocol:(id)protocol name:(id)name contextBlock:(id /* block */)block;
- (id)resolveOptionalProtocol:(id)protocol;
- (id)resolveOptionalProtocol:(id)protocol contextBlock:(id /* block */)block;
- (id)resolveOptionalProtocol:(id)protocol name:(id)name;
- (id)resolveOptionalProtocol:(id)protocol name:(id)name contextBlock:(id /* block */)block;
@end

#endif /* TFResolver_Protocol_h */
