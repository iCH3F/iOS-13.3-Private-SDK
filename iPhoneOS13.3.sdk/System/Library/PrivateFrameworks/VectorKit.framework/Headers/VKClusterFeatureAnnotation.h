//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VectorKit/VKCustomFeatureAnnotation-Protocol.h>

@class VKCustomFeature;

__attribute__((visibility("hidden")))
@interface VKClusterFeatureAnnotation : NSObject <VKCustomFeatureAnnotation>
{
    CDStruct_2c43369c _coordinate;
    VKCustomFeature *_customFeature;
}

@property(nonatomic) CDStruct_c3b9c2ee coordinate; // @synthesize coordinate=_coordinate;
- (id)feature;
- (void)dealloc;
- (id)initWithClusterNode:(struct ClusterTreeClusterNode )arg1 clusterTree:(const shared_ptr_e2fd4869 )arg2 baseStyle:(id)arg3 imageText:(id)arg4 annotationText:(id)arg5 annotationLocale:(id)arg6;

@end

