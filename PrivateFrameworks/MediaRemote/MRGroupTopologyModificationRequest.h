//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRGroupTopologyModificationRequest_h
#define MRGroupTopologyModificationRequest_h
@import Foundation;

#include "MRRequestDetails.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSData, NSString;

@interface MRGroupTopologyModificationRequest : NSObject<NSSecureCoding, NSCopying>

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) _MRGroupTopologyModificationRequestProtobuf *protobuf;
@property (readonly, nonatomic) MRRequestDetails *requestDetails;
@property (readonly, nonatomic) NSArray *outputDeviceUIDs;
@property (readonly, nonatomic) NSArray *outputDevices;
@property (readonly, nonatomic) unsigned long long type;
@property (nonatomic) BOOL fadeAudio;
@property (nonatomic) NSString *password;
@property (nonatomic) BOOL shouldNotPauseIfLastDeviceRemoved;
@property (nonatomic) BOOL suppressErrorDialog;
@property (nonatomic) BOOL muteUntilFinished;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithRequestDetails:(id)details type:(unsigned long long)type outputDevices:(id)devices;
- (id)initWithRequestDetails:(id)details type:(unsigned long long)type outputDeviceUIDs:(id)uids;
- (id)copyWithOutputDeviceUIDs:(id)uids;
- (id)copyWithType:(unsigned long long)type outputDeviceUIDs:(id)uids;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithData:(id)data;
- (id)initWithProtobuf:(id)protobuf;
@end

#endif /* MRGroupTopologyModificationRequest_h */
