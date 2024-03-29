//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef INWidgetDescriptor_h
#define INWidgetDescriptor_h
@import Foundation;

@class NSString;

@interface INWidgetDescriptor : NSObject

@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *kind;
@property (readonly, copy, nonatomic) NSString *intentClassName;
@property (readonly, nonatomic) long long preferredSizeClass;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredSize;

/* instance methods */
- (id)initWithExtensionBundleIdentifier:(id)identifier kind:(id)kind intentClassName:(id)name preferredSizeClass:(long long)class;
- (BOOL)supportsIntent:(id)intent;
- (id)description;
- (id)_extensionRecordWithError:(id *)error;
@end

#endif /* INWidgetDescriptor_h */
