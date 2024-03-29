//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 858.60.5.0.0
//
#ifndef RBSProcessBundle_h
#define RBSProcessBundle_h
@import Foundation;

#include "RBSProcessInstance.h"
#include "RBSXPCSecureCoding-Protocol.h"

@class NSDictionary, NSString;
@protocol RBSProcessBundleDataSource;

@interface RBSProcessBundle : NSObject<RBSXPCSecureCoding> {
  /* instance variables */
  NSDictionary *_plistValues;
  NSObject<RBSProcessBundleDataSource> *_dataSource;
}

@property (retain, nonatomic) RBSProcessInstance *instance;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *path;
@property (readonly, copy, nonatomic) NSString *executablePath;
@property (readonly, copy, nonatomic) NSString *extensionPointIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)bundleWithDataSource:(id)source;
+ (BOOL)supportsRBSXPCSecureCoding;

/* instance methods */
- (id)bundleInfoValueForKey:(id)key;
- (id)bundleInfoValuesForKeys:(id)keys;
- (void)encodeWithRBSXPCCoder:(id)rbsxpccoder;
- (id)initWithRBSXPCCoder:(id)rbsxpccoder;
@end

#endif /* RBSProcessBundle_h */
