//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1221.1.1.2.0
//
#ifndef CoreDAVPrincipalItem_h
#define CoreDAVPrincipalItem_h
@import Foundation;

#include "CoreDAVItem.h"
#include "CoreDAVHrefItem.h"
#include "CoreDAVItem.h"
#include "CoreDAVItemWithNoChildren.h"

@interface CoreDAVPrincipalItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVHrefItem *href;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *all;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *authenticated;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *unauthenticated;
@property (retain, nonatomic) CoreDAVItem *property;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *selfItem;

/* class methods */
+ (id)copyParseRules;

/* instance methods */
- (id)init;
- (id)initTypeIsAll;
- (id)initTypeIsHREFWithURL:(id)url;
- (id)initTypeIsProperty:(id)property;
- (id)initTypeIsAuthenticated;
- (id)initTypeIsUnauthenticated;
- (id)initTypeIsSelf;
- (id)description;
- (void)write:(id)write;
- (id)hashString;
@end

#endif /* CoreDAVPrincipalItem_h */
