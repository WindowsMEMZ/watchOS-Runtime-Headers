//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIPBMethodDescriptorProto_h
#define TRIPBMethodDescriptorProto_h
@import Foundation;

#include "TRIPBMessage.h"
#include "TRIPBMethodOptions.h"

@class NSString;

@interface TRIPBMethodDescriptorProto : TRIPBMessage

@property (copy, @dynamic, nonatomic) NSString *name;
@property (@dynamic, nonatomic) BOOL hasName;
@property (copy, @dynamic, nonatomic) NSString *inputType;
@property (@dynamic, nonatomic) BOOL hasInputType;
@property (copy, @dynamic, nonatomic) NSString *outputType;
@property (@dynamic, nonatomic) BOOL hasOutputType;
@property (retain, @dynamic, nonatomic) TRIPBMethodOptions *options;
@property (@dynamic, nonatomic) BOOL hasOptions;
@property (@dynamic, nonatomic) BOOL clientStreaming;
@property (@dynamic, nonatomic) BOOL hasClientStreaming;
@property (@dynamic, nonatomic) BOOL serverStreaming;
@property (@dynamic, nonatomic) BOOL hasServerStreaming;

/* class methods */
+ (id)descriptor;
@end

#endif /* TRIPBMethodDescriptorProto_h */
