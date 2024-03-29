//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SADomainObjectCreate_h
#define SADomainObjectCreate_h
@import Foundation;

#include "SADomainCommand.h"
#include "SADomainObject.h"
#include "SADomainObjectCommand-Protocol.h"

@class NSString;

@interface SADomainObjectCreate : SADomainCommand<SADomainObjectCommand>

@property (retain, nonatomic) SADomainObject *object;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)domainObjectCreate;
+ (id)domainObjectCreateWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
@end

#endif /* SADomainObjectCreate_h */
