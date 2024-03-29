//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SAABPersonSearch_h
#define SAABPersonSearch_h
@import Foundation;

#include "SADomainCommand.h"
#include "SAEmail.h"
#include "SALocation.h"
#include "SAPhone.h"

@class NSDate, NSNumber, NSString, NSURL;

@interface SAABPersonSearch : SADomainCommand

@property (copy, nonatomic) NSURL *accountIdentifier;
@property (retain, nonatomic) SALocation *address;
@property (copy, nonatomic) NSDate *birthday;
@property (copy, nonatomic) NSString *company;
@property (retain, nonatomic) SAEmail *email;
@property (copy, nonatomic) NSNumber *me;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) SAPhone *phone;
@property (copy, nonatomic) NSString *relationship;
@property (copy, nonatomic) NSString *scope;

/* class methods */
+ (id)personSearch;
+ (id)personSearchWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;
@end

#endif /* SAABPersonSearch_h */
