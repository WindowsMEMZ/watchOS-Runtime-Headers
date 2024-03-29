//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 101.4.0.0.0
//
#ifndef DESUploadTransport_h
#define DESUploadTransport_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSURL;

@interface DESUploadTransport : NSObject<NSSecureCoding, NSCopying>

@property (readonly, nonatomic) BOOL originRoute;
@property (readonly, nonatomic) BOOL parsecRoute;
@property (readonly, nonatomic) BOOL dediscoRoute;
@property (readonly, copy, nonatomic) NSURL *postBackBaseURL;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithPolicy:(id)policy recipe:(id)recipe;
- (id)initWithDediscoRoute:(BOOL)route originRoute:(BOOL)route parsecRoute:(BOOL)route postBackBaseURL:(id)url;
- (id)description;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* DESUploadTransport_h */
