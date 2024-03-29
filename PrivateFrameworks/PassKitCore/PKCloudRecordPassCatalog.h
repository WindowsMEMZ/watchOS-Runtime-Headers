//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKCloudRecordPassCatalog_h
#define PKCloudRecordPassCatalog_h
@import Foundation;

#include "PKCloudRecordObject.h"
#include "PKCatalog.h"

@interface PKCloudRecordPassCatalog : PKCloudRecordObject

@property (retain, nonatomic) PKCatalog *catalog;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)item;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (long long)compare:(id)compare;
- (id)descriptionWithItem:(BOOL)item;
- (id)description;
- (id)_descriptionWithIncludeItem:(BOOL)item;
- (void)applyCloudRecordObject:(id)object;
@end

#endif /* PKCloudRecordPassCatalog_h */
