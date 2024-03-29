//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSDestinationDevice_h
#define IDSDestinationDevice_h
@import Foundation;

#include "IDSDestination.h"
#include "IDSURI.h"

@interface IDSDestinationDevice : IDSDestination

@property (retain, nonatomic) IDSURI *destinationURI;
@property (nonatomic) BOOL isGuest;

/* class methods */
+ (BOOL)isDeviceURI:(id)uri;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithRapportPublicIdentifierURI:(id)uri;
- (id)initWithIDSDeviceURI:(id)uri;
- (id)initWithDeviceURI:(id)uri;
- (id)initWithURI:(id)uri isGuest:(BOOL)guest;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
- (BOOL)isDevice;
- (id)destinationURIs;
@end

#endif /* IDSDestinationDevice_h */
