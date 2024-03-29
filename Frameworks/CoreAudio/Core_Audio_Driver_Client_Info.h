//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 290.153.3.50.1
//
#ifndef Core_Audio_Driver_Client_Info_h
#define Core_Audio_Driver_Client_Info_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface Core_Audio_Driver_Client_Info : NSObject<NSSecureCoding>

@property (nonatomic) unsigned int client_id;
@property (nonatomic) int process_id;
@property (nonatomic) BOOL is_native_endian;
@property (retain, nonatomic) NSString *bundle_id;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init_with_asp_client_info:(const struct AudioServerPlugInClientInfo { unsigned int x0; int x1; unsigned char x2; struct __CFString * x3; } *)init_with_asp_client_info;
- (struct AudioServerPlugInClientInfo { unsigned int x0; int x1; unsigned char x2; struct __CFString * x3; })create_asp_client_info;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* Core_Audio_Driver_Client_Info_h */
