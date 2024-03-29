//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 611.60.5.0.0
//
#ifndef SRPInit_h
#define SRPInit_h
@import Foundation;

#include "SRPClientRequest-Protocol.h"
#include "SecureBackup.h"

@class NSDictionary, NSString;

@interface SRPInit : NSObject<SRPClientRequest>

@property (readonly, copy, nonatomic) NSString *dsid;
@property (copy, nonatomic) NSString *recordLabel;
@property (readonly, copy, nonatomic) NSString *recoveryPassphrase;
@property (retain, nonatomic) NSDictionary *escrowRecord;
@property (copy, nonatomic) NSString *recordID;
@property (readonly, retain, nonatomic) SecureBackup *sb;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSecureBackup:(id)backup;
- (id)validateInput;
@end

#endif /* SRPInit_h */
