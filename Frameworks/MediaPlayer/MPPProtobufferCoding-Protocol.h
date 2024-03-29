//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPPProtobufferCoding_Protocol_h
#define MPPProtobufferCoding_Protocol_h
@import Foundation;

@protocol MPPProtobufferCoding <NSObject>
/* instance methods */
- (id)initWithProtobufferDecodableObject:(id)object library:(id)library;
- (id)initWithProtobufferDecodableObject:(id)object;
- (id)protobufferEncodableObjectFromLibrary:(id)library;
- (id)protobufferEncodableObject;
@end

#endif /* MPPProtobufferCoding_Protocol_h */
