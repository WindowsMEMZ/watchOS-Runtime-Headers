//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1221.1.1.2.0
//
#ifndef CoreDAVACEItem_h
#define CoreDAVACEItem_h
@import Foundation;

#include "CoreDAVItem.h"
#include "CoreDAVDenyItem.h"
#include "CoreDAVGrantItem.h"
#include "CoreDAVInvertItem.h"
#include "CoreDAVItemWithHrefChildItem.h"
#include "CoreDAVItemWithNoChildren.h"
#include "CoreDAVPrincipalItem.h"

@interface CoreDAVACEItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVPrincipalItem *principal;
@property (retain, nonatomic) CoreDAVInvertItem *invert;
@property (retain, nonatomic) CoreDAVGrantItem *grant;
@property (retain, nonatomic) CoreDAVDenyItem *deny;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *protectedItem;
@property (retain, nonatomic) CoreDAVItemWithHrefChildItem *inherited;

/* class methods */
+ (id)copyParseRules;
+ (id)privilegeItemWithNameSpace:(id)space andName:(id)name;

/* instance methods */
- (id)init;
- (id)initWithPrincipal:(id)principal shouldInvert:(BOOL)invert action:(int)action withPrivileges:(id)privileges;
- (id)description;
- (void)write:(id)write;
@end

#endif /* CoreDAVACEItem_h */
