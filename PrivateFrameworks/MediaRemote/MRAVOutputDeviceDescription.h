//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRAVOutputDeviceDescription_h
#define MRAVOutputDeviceDescription_h
@import Foundation;

#include "MRAVOutputDeviceDescriptionImpl-Protocol.h"

@class NSArray, NSString;

@interface MRAVOutputDeviceDescription : NSObject

@property (retain, nonatomic) NSObject<MRAVOutputDeviceDescriptionImpl> *impl;
@property (retain, nonatomic) NSArray *subComponents;
@property (readonly, nonatomic) _MRAVOutputDeviceDescriptorProtobuf *descriptor;
@property (readonly, nonatomic) unsigned int deviceType;
@property (readonly, nonatomic) unsigned int deviceSubtype;
@property (readonly, nonatomic) NSString *uid;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *composedTypeDescription;
@property (readonly, nonatomic) NSString *modelID;
@property (readonly, nonatomic) NSString *roomID;
@property (readonly, nonatomic) NSString *roomName;
@property (readonly, nonatomic) unsigned int clusterType;
@property (readonly, nonatomic) BOOL clusterLeader;
@property (readonly, nonatomic) BOOL supportsEngageOnClusterActivation;

/* instance methods */
- (id)initWithDeviceType:(unsigned int)type deviceSubtype:(unsigned int)subtype uid:(id)uid;
- (id)initWithDeviceType:(unsigned int)type deviceSubtype:(unsigned int)subtype uid:(id)uid name:(id)name;
- (id)initWithDeviceType:(unsigned int)type deviceSubtype:(unsigned int)subtype uid:(id)uid name:(id)name modelID:(id)id;
- (id)initWithAVDescription:(id)avdescription;
- (id)initWithDescriptor:(id)descriptor;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (BOOL)isClusterLeader;
- (BOOL)containsUID:(id)uid;
@end

#endif /* MRAVOutputDeviceDescription_h */
