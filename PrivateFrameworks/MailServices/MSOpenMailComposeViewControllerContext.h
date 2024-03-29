//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef MSOpenMailComposeViewControllerContext_h
#define MSOpenMailComposeViewControllerContext_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface MSOpenMailComposeViewControllerContext : NSObject<NSSecureCoding>

@property (retain, nonatomic) NSDictionary *compositionValues;
@property (retain, nonatomic) NSArray *attachments;
@property (readonly, nonatomic) NSString *autosaveIdentifier;
@property (retain, nonatomic) NSString *hostApplicationBundleIdentifier;

/* class methods */
+ (id)unarchiveFromData:(id)data error:(id *)error;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithAutosaveIdentifier:(id)identifier compositionValues:(id)values attachments:(id)attachments;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* MSOpenMailComposeViewControllerContext_h */
