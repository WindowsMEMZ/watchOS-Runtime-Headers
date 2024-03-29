//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFObservableObjectResult_h
#define WFObservableObjectResult_h
@import Foundation;

#include "WFObservableResult.h"
#include "WFDatabaseObjectDescriptor.h"

@interface WFObservableObjectResult : WFObservableResult

@property (readonly, nonatomic) WFDatabaseObjectDescriptor *descriptor;
@property (readonly, nonatomic) WFDatabaseObjectDescriptor *value;

/* class methods */
+ (void)getResultWithDescriptor:(id)descriptor valueType:(Class)type glyphSize:(struct CGSize { double x0; double x1; })size completionHandler:(id /* block */)handler;
+ (id)getResultWithDescriptor:(id)descriptor valueType:(Class)type glyphSize:(struct CGSize { double x0; double x1; })size error:(id *)error;

/* instance methods */
- (id)initWithValueType:(Class)type glyphSize:(struct CGSize { double x0; double x1; })size initialValue:(id)value descriptor:(id)descriptor;
- (void)handleChangeNotification:(id)notification;
- (id)description;
@end

#endif /* WFObservableObjectResult_h */
