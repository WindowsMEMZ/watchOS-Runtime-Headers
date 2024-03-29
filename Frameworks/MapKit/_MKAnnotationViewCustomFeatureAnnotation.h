//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2417.42.9.28.9
//
#ifndef _MKAnnotationViewCustomFeatureAnnotation_h
#define _MKAnnotationViewCustomFeatureAnnotation_h
@import Foundation;

#include "MKAnnotationView.h"
#include "NSSecureCoding-Protocol.h"
#include "VKCustomFeatureAnnotation-Protocol.h"

@class NSString, VKCustomFeature;

@interface _MKAnnotationViewCustomFeatureAnnotation : NSObject<VKCustomFeatureAnnotation, NSSecureCoding> {
  /* instance variables */
  VKCustomFeature *_customFeature;
}

@property (readonly, nonatomic) VKCustomFeature *feature;
@property (nonatomic) struct { double x0; double x1; } coordinate;
@property (weak, nonatomic) MKAnnotationView *annotationView;
@property (nonatomic) double course;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (void)setCustomFeature:(id)feature;
@end

#endif /* _MKAnnotationViewCustomFeatureAnnotation_h */
