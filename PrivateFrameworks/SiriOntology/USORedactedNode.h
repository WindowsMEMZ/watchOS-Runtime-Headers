//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef USORedactedNode_h
#define USORedactedNode_h
@import Foundation;

@protocol struct unique_ptr<siri::ontology::UsoGraph, std::default_delete<siri::ontology::UsoGraph>> { struct __compressed_pair<siri::ontology::UsoGraph *, std::default_delete<siri::ontology::UsoGraph>> { struct UsoGraph * x0; } x0; }, {unique_ptr<siri::ontology::UsoGraph, std::default_delete<siri::ontology::UsoGraph>>="__ptr_"{__compressed_pair<siri::ontology::UsoGraph *, std::default_delete<siri::ontology::UsoGraph>>="__value_"^{UsoGraph}}};

@interface USORedactedNode : NSObject {
  /* instance variables */
  struct unique_ptr<siri::ontology::UsoGraph, std::default_delete<siri::ontology::UsoGraph>> { struct __compressed_pair<siri::ontology::UsoGraph *, std::default_delete<siri::ontology::UsoGraph>> { struct UsoGraph *__value_; } __ptr_; } mUsoGraph;
}

@property (nonatomic) long long index;
@property (nonatomic) struct unique_ptr<siri::ontology::UsoGraph, std::default_delete<siri::ontology::UsoGraph>> { struct __compressed_pair<siri::ontology::UsoGraph *, std::default_delete<siri::ontology::UsoGraph>> { struct UsoGraph * x0; } x0; } usoGraph;

/* instance methods */
- (id)initWithIndex:(long long)index usoGraph:(void *)graph;
@end

#endif /* USORedactedNode_h */
