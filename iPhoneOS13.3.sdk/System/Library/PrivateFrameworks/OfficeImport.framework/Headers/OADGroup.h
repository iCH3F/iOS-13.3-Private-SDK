//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OADDrawable.h>

#import <OfficeImport/OADDrawableContainer-Protocol.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface OADGroup : OADDrawable <OADDrawableContainer>
{
    CGRect mLogicalBounds;
    NSMutableArray *mChildren;
}

// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)removeUnnecessaryOverrides;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)arg1;
- (void)setParentTextListStyle:(id)arg1;
- (void)removeChild:(id)arg1;
- (void)replaceChild:(id)arg1 with:(id)arg2;
- (id)children;
- (id)childAtIndex:(NSUInteger)arg1;
- (void)addChildren:(id)arg1;
- (void)addChild:(id)arg1;
- (NSUInteger)childCount;
- (void)setLogicalBounds:(CGRect)arg1;
- (CGRect)logicalBounds;
- (id)groupProperties;
- (id)init;

@end

