//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1299.2.3.1.0
//
#ifndef _LSLocalizedStringRecord_h
#define _LSLocalizedStringRecord_h
@import Foundation;

#include "LSRecord.h"

@class NSArray, NSDictionary, NSString;

@interface _LSLocalizedStringRecord : LSRecord

@property (readonly) NSDictionary *_allUnsanitizedStringValues;
@property (readonly) NSArray *_missingBundleLocs;
@property (readonly) NSString *stringValue;
@property (readonly) NSDictionary *allStringValues;
@property (readonly) NSString *defaultStringValue;

/* class methods */
+ (id)sanitizeString:(id)string;
+ (BOOL)supportsSecureCoding;
+ (id)_propertyClasses;

/* instance methods */
- (id)_initWithContext:(struct LSContext { id x0; } *)context unitID:(unsigned int)id;
- (id)stringValueWithPreferredLocalizations:(id)localizations;
- (id)_allUnsanitizedStringValuesWithContext:(struct LSContext { id x0; } *)context tableID:(unsigned int)id unitID:(unsigned int)id unitBytes:(const struct LocalizedString { unsigned int x0; unsigned int x1; struct Flags { unsigned int x0 :1; unsigned int x1 :1; } x2; } *)bytes;
- (void)_LSRecord_resolve__allUnsanitizedStringValues;
- (id)_missingBundleLocsWithContext:(struct LSContext { id x0; } *)context tableID:(unsigned int)id unitID:(unsigned int)id unitBytes:(const struct LocalizedString { unsigned int x0; unsigned int x1; struct Flags { unsigned int x0 :1; unsigned int x1 :1; } x2; } *)bytes;
- (void)_LSRecord_resolve__missingBundleLocs;
- (id)description;
- (id)debugDescription;
- (void)_detachFromContext:(struct LSContext { id x0; } *)context tableID:(unsigned int)id unitID:(unsigned int)id unitBytes:(const void *)bytes;
@end

#endif /* _LSLocalizedStringRecord_h */
