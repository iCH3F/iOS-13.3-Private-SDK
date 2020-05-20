//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UISEGestureFeature.h>

#import <UIKitCore/_UISEGestureFeatureDelegate-Protocol.h>
#import <UIKitCore/_UISETouchedEdgesProvider-Protocol.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UISEHybridEdgesFailGestureFeature : _UISEGestureFeature <_UISEGestureFeatureDelegate, _UISETouchedEdgesProvider>
{
    NSUInteger _fails;
    NSArray *_subfeatures;
}

@property(readonly, nonatomic) NSArray *subfeatures; // @synthesize subfeatures=_subfeatures;
// - (void).cxx_destruct;
- (void)_incorporateSample:(const struct _UISEGestureFeatureSample )arg1;
- (id)debugDictionary;
- (void)featureDidChangeState:(id)arg1;
@property(readonly, nonatomic) NSUInteger touchedEdges;
- (id)initWithSubfeatures:(id)arg1;

@end

